<?php
// $Id$


	// View listing existing synchronisations.
	function campus_contact_list(){
		$output = t('This list displays all monitored vocabulary terms which do not currently have a Contact Webform.');

		// Declare form output variables.
		$rows = array();
		$header = array(t('Term'), t('Monitor Vocabulary / Watchlist Name'), t('Actions'));

		// Grab watched vocabularies and load all terms...		
		$results = db_query("SELECT * FROM {taxonomy_watchlist} WHERE module = 'campus_homepage'");
		foreach($results as $result){
			$terms = taxonomy_get_tree($result->vid);

			// Check to see if each term already has a node associated.
			foreach($terms as $term){
				$hasNode = campus_contact_find_nid_by_tid($term->tid);

				// If a term has no node associated, present it to the user in this list.
				if(empty($hasNode)){
					$rows[] = array($term->name, $result->name, l(t('Add'), 'admin/settings/campus/contact/add/'. $term->tid));
				}
			}
		}

		// Output data to view.
		if(empty($rows)){
			$output .= t(' There is nothing to display here. Either all monitored vocabulary terms already have a Contact Webform, or no vocabularies are being monitored.');
		} else {
			$output .= theme('table', array('header' => $header, 'rows'=> $rows));
		}

	  return $output;
	}


	function campus_contact_add($form, $form_state, $id){
		// Confirm that ID is legit
		$term = taxonomy_term_load($id);
		if(!empty($term)){
			$form = array();
			$form['tid'] = array('#type' => 'value', '#markup' => $id);
			return confirm_form($form,
				t(
					'This will create a unique Contact Webform node for %name. You should ensure that the vocabulary can be associated with Contact Webform node type first.', 
					array('%name' => $term->name)
				), 

				'admin/settings/campus/contact',
				t('To undo this action, please delete the appropriate Contact Webform node.'),
				t('Continue'),  
				t('Cancel')
			);
		}
	}


		// Process add.
		function campus_contact_add_submit($form, &$form_state) {
			$term = taxonomy_term_load($form_state['values']['tid']);

			if(!empty($term)){
				$result = campus_contact_tweak_node('create', $term->tid, $term->name);
				if($result){
					drupal_set_message("Created Contact Webform node for {$term->name}.");
				} else {
					drupal_set_message("Node creation failed for {$term->name}. Perhaps this term already has a Contact Webform?", 'warning');
				}
			}
			
			$form_state['redirect'] = 'admin/settings/campus/contact';
		}
