<?php

function better_search_admin_form() {  
  $form['theme'] = array(
    '#type' => 'fieldset',
    '#title' => t('Better Search Theme Options'),
  );
  
  $options = array(
    0 => t('Background Fade'),
    1 => t('Expand on Hover'),
    2 => t('Expand Icon on Hover'),
    3 => t('Slide Icon on Hover'),
  );
  
  $form['theme']['theme'] = array(
    '#type' => 'radios',
    '#title' => t('Select Theme'),
    '#default_value' => variable_get('theme', 0),
    '#options' => $options,
    '#description' => t('Select the theme to use for the search block.'),    
  );
  return system_settings_form($form);

}