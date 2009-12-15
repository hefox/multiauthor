<?php

function multiauthor_views_data() {
  $data = array();
  $data['invite']['multiauthor_mail'] = array(
  'real field' => 'mail',
  'title' => t('Invited mail'),
  'group' => t('Multiauthor'),
  'help' => t('multiauthor relationship'), // The help that appears on the UI,
  // Information for displaying the nid
  'relationship' => array(
      'handler' => 'views_handler_relationship',
      'base' => 'multiauthor',
      'base field' => 'mail',
      'label' => t('Invite to author relationship via mail'),
      'relationship field' => 'email',
    ));
      $data['invite']['multiauthor_uid'] = array(
  'real field' => 'uid',
  'title' => t('Multiauthor user '),
  'group' => t('Multiauthor'),
  'help' => t('On uid of invited user'), // The help that appears on the UI,
  // Information for displaying the nid
  'relationship' => array(
      'handler' => 'views_handler_relationship',
      'base' => 'multiauthor',
      'base field' => 'uid',
      'label' => t('Invite to author relationship via uid'),
      'relationship field' => 'uid',
    ));
 $data['multiauthor']['multiauthor_nid'] = array(
  'real field' => 'nid',
  'title' => t('Multiauthor to node '),
  'group' => t('Multiauthor'),
  'help' => t(' '), // The help that appears on the UI,
  // Information for displaying the nid
  'relationship' => array(
      'handler' => 'views_handler_relationship',
      'base' => 'node',
      'base field' => 'nid',
      'label' => t('Relationship to node'),
      'relationship field' => 'nid',
    ));
     $data['node']['multiauthor_node_nid'] = array(
  'real field' => 'nid',
  'title' => t('Node to multiauthor '),
  'group' => t('Multiauthor'),
  'help' => t(' '), // The help that appears on the UI,
  // Information for displaying the nid
  'relationship' => array(
      'handler' => 'views_handler_relationship',
      'base' => 'multiauthor',
      'base field' => 'nid',
      'label' => t('Relationship to node'),
      'relationship field' => 'nid',
    ));
      $data['multiauthor']['table']['group'] = t('Multiauthor');
 
  return $data;
}

/*function multiauthor_views_handlers() {
  return array(
    'info' => array(
      'path' => drupal_get_path('module', 'multiauthor'),
    ),
    'handlers' => array(
		'' => array(
        	'parent' => 'views_handler_field',
      ),
  );

}*/
