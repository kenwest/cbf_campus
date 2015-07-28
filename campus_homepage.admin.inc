<?php
// $Id$


	// View listing existing synchronisations.
	function campus_homepage_list(){
		$output = t('This list displays all monitored vocabulary terms which do not currently have a Campus Homepage.');

		// Declare form output variables.
		$rows = array();
		$header = array(t('Term'), t('Monitor Vocabulary / Watchlist Name'), t('Actions'));

		// Grab watched vocabularies and load all terms...		
		$results = db_query("SELECT * FROM {taxonomy_watchlist} WHERE module = 'campus_homepage'");
		foreach($results as $result){
			$terms = taxonomy_get_tree($result->vid);

			// Check to see if each term already has a node associated.
			foreach($terms as $term){
				$hasNode = campus_homepage_find_nid_by_tid($term->tid);

				// If a term has no node associated, present it to the user in this list.
				if(empty($hasNode)){
					$rows[] = array($term->name, $result->name, l(t('Add'), 'admin/settings/campus/homepage/add/'. $term->tid));
				}
			}
		}

		// Output data to view.
		if(empty($rows)){
			$output .= t(' There is nothing to display here. Either all monitored vocabulary terms already have a Campus Homepage, or no vocabularies are being monitored.');
		} else {
			$output .= theme('table', array('header' => $header, 'rows'=> $rows));
		}

	  return $output;
	}


	function campus_homepage_add($form, $form_state, $id){
		// Confirm that ID is legit
		$term = taxonomy_term_load($id);
		if(!empty($term)){
			$form = array();
			$form['tid'] = array('#type' => 'value', '#markup' => $id);
			return confirm_form($form,
				t(
					'This will create a unique Campus Homepage node for %name. You should ensure that the vocabulary can be associated with Campus Homepage node type first.', 
					array('%name' => $term->name)
				), 

				'admin/settings/campus/homepage',
				t('To undo this action, please delete the appropriate Campus Homepage node.'),
				t('Continue'),  
				t('Cancel')
			);
		}
	}


		// Process add.
		function campus_homepage_add_submit($form, &$form_state) {
			$term = taxonomy_term_load($form_state['values']['tid']);

			if(!empty($term)){
				$result = campus_homepage_tweak_node('create', $term->tid, $term->name);
				if($result){
					drupal_set_message("Created Campus Homepage node for {$term->name}.");
				} else {
					drupal_set_message("Node creation failed for {$term->name}. Perhaps this term already has a Campus Homapage?", 'warning');
				}
			}
			
			$form_state['redirect'] = 'admin/settings/campus/homepage';
		}
