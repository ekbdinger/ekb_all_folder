<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function ekb_menu_links_all_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-ekb-forum:forum
  $menu_links['menu-ekb-forum:forum'] = array(
    'menu_name' => 'menu-ekb-forum',
    'link_path' => 'forum',
    'router_path' => 'forum',
    'link_title' => 'Forum',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '0',
  );
  // Exported menu link: menu-meaningful-use:forum
  $menu_links['menu-meaningful-use:forum'] = array(
    'menu_name' => 'menu-meaningful-use',
    'link_path' => 'forum',
    'router_path' => 'forum',
    'link_title' => 'MU Forum',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-42',
  );
  // Exported menu link: menu-meaningful-use:node/2604
  $menu_links['menu-meaningful-use:node/2604'] = array(
    'menu_name' => 'menu-meaningful-use',
    'link_path' => 'node/2604',
    'router_path' => 'node/%',
    'link_title' => 'Meaningful Use Webinar',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-43',
  );
  // Exported menu link: menu-navigation-bar-2:<front>
  $menu_links['menu-navigation-bar-2:<front>'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Development Videos',
    'options' => array(
      'attributes' => array(
        'title' => 'A Development Video for each Weekly Presentation',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-43',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:devices/primary
  $menu_links['menu-navigation-bar-2:devices/primary'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'devices/primary',
    'router_path' => 'devices/primary',
    'link_title' => 'Devices',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-34',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:devvidbyviddate
  $menu_links['menu-navigation-bar-2:devvidbyviddate'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'devvidbyviddate',
    'router_path' => 'devvidbyviddate',
    'link_title' => 'All Segments, By Week',
    'options' => array(
      'attributes' => array(
        'title' => 'Entire video segment listing by week',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:devvidfeature
  $menu_links['menu-navigation-bar-2:devvidfeature'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'devvidfeature',
    'router_path' => 'devvidfeature',
    'link_title' => 'Video Segments by Feature',
    'options' => array(
      'attributes' => array(
        'title' => 'A segment of the full video, organized by eCW Feature',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:http://ecwknowledgebase.com/node/6452
  $menu_links['menu-navigation-bar-2:http://ecwknowledgebase.com/node/6452'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'http://ecwknowledgebase.com/node/6452',
    'router_path' => '',
    'link_title' => 'Patient Documents',
    'options' => array(
      'attributes' => array(
        'title' => 'Workflow for Patient Documents',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/163
  $menu_links['menu-navigation-bar-2:node/163'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/163',
    'router_path' => 'node/%',
    'link_title' => 'Assigning and Reviewing Progress Notes - Details',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/2761
  $menu_links['menu-navigation-bar-2:node/2761'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/2761',
    'router_path' => 'node/%',
    'link_title' => 'Things that Lock-Unlock, etc.',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-39',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3222
  $menu_links['menu-navigation-bar-2:node/3222'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3222',
    'router_path' => 'node/%',
    'link_title' => 'eClinicalWorks Remote Services (eRS)',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-38',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3652
  $menu_links['menu-navigation-bar-2:node/3652'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3652',
    'router_path' => 'node/%',
    'link_title' => 'ROS',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-43',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3667
  $menu_links['menu-navigation-bar-2:node/3667'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3667',
    'router_path' => 'node/%',
    'link_title' => 'Examination',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-50',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3668
  $menu_links['menu-navigation-bar-2:node/3668'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3668',
    'router_path' => 'node/%',
    'link_title' => 'OB and GYN History',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-44',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3669
  $menu_links['menu-navigation-bar-2:node/3669'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3669',
    'router_path' => 'node/%',
    'link_title' => 'Lookup Encounters',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-35',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3670
  $menu_links['menu-navigation-bar-2:node/3670'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3670',
    'router_path' => 'node/%',
    'link_title' => 'Vitals',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-42',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3671
  $menu_links['menu-navigation-bar-2:node/3671'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3671',
    'router_path' => 'node/%',
    'link_title' => 'Case - Case Manager',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-33',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3672
  $menu_links['menu-navigation-bar-2:node/3672'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3672',
    'router_path' => 'node/%',
    'link_title' => 'Patient Recalls',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-34',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3673
  $menu_links['menu-navigation-bar-2:node/3673'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3673',
    'router_path' => 'node/%',
    'link_title' => 'Chief Complaint',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-49',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3674
  $menu_links['menu-navigation-bar-2:node/3674'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3674',
    'router_path' => 'node/%',
    'link_title' => 'HPI',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3675
  $menu_links['menu-navigation-bar-2:node/3675'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3675',
    'router_path' => 'node/%',
    'link_title' => 'Medical History',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-50',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3676
  $menu_links['menu-navigation-bar-2:node/3676'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3676',
    'router_path' => 'node/%',
    'link_title' => 'Bubble Sheets',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-36',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3677
  $menu_links['menu-navigation-bar-2:node/3677'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3677',
    'router_path' => 'node/%',
    'link_title' => 'Surgical History',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3678
  $menu_links['menu-navigation-bar-2:node/3678'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3678',
    'router_path' => 'node/%',
    'link_title' => 'Current Medication',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-47',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3679
  $menu_links['menu-navigation-bar-2:node/3679'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3679',
    'router_path' => 'node/%',
    'link_title' => 'Hospitalization',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-48',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3680
  $menu_links['menu-navigation-bar-2:node/3680'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3680',
    'router_path' => 'node/%',
    'link_title' => 'Telephone/Web Encounters',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-41',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3681
  $menu_links['menu-navigation-bar-2:node/3681'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3681',
    'router_path' => 'node/%',
    'link_title' => 'Patient Documents',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-37',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3682
  $menu_links['menu-navigation-bar-2:node/3682'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3682',
    'router_path' => 'node/%',
    'link_title' => 'Allergies/Intolerance',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3683
  $menu_links['menu-navigation-bar-2:node/3683'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3683',
    'router_path' => 'node/%',
    'link_title' => 'Social History',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3686
  $menu_links['menu-navigation-bar-2:node/3686'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3686',
    'router_path' => 'node/%',
    'link_title' => 'Resource Schedule',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-50',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3687
  $menu_links['menu-navigation-bar-2:node/3687'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3687',
    'router_path' => 'node/%',
    'link_title' => 'Patient Appointments',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3688
  $menu_links['menu-navigation-bar-2:node/3688'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3688',
    'router_path' => 'node/%',
    'link_title' => 'Global Scheduling',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3689
  $menu_links['menu-navigation-bar-2:node/3689'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3689',
    'router_path' => 'node/%',
    'link_title' => 'Appt Reminder Systems',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3690
  $menu_links['menu-navigation-bar-2:node/3690'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3690',
    'router_path' => 'node/%',
    'link_title' => 'Check In - Check Out',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3691
  $menu_links['menu-navigation-bar-2:node/3691'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3691',
    'router_path' => 'node/%',
    'link_title' => 'Patient Insurance Eligibility',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3692
  $menu_links['menu-navigation-bar-2:node/3692'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3692',
    'router_path' => 'node/%',
    'link_title' => 'Fax Inbox',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3693
  $menu_links['menu-navigation-bar-2:node/3693'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3693',
    'router_path' => 'node/%',
    'link_title' => 'Fax Outbox',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3694
  $menu_links['menu-navigation-bar-2:node/3694'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3694',
    'router_path' => 'node/%',
    'link_title' => 'Letters',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-43',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3696
  $menu_links['menu-navigation-bar-2:node/3696'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3696',
    'router_path' => 'node/%',
    'link_title' => 'Labels',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-42',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3697
  $menu_links['menu-navigation-bar-2:node/3697'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3697',
    'router_path' => 'node/%',
    'link_title' => 'Physical Examination',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-49',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3698
  $menu_links['menu-navigation-bar-2:node/3698'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3698',
    'router_path' => 'node/%',
    'link_title' => 'Family History',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3703
  $menu_links['menu-navigation-bar-2:node/3703'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3703',
    'router_path' => 'node/%',
    'link_title' => 'Create/Manage Claims',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-47',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3704
  $menu_links['menu-navigation-bar-2:node/3704'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3704',
    'router_path' => 'node/%',
    'link_title' => 'Incoming Referrals',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-40',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3705
  $menu_links['menu-navigation-bar-2:node/3705'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3705',
    'router_path' => 'node/%',
    'link_title' => 'Messages',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-39',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3707
  $menu_links['menu-navigation-bar-2:node/3707'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3707',
    'router_path' => 'node/%',
    'link_title' => 'Past Results',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-41',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3712
  $menu_links['menu-navigation-bar-2:node/3712'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3712',
    'router_path' => 'node/%',
    'link_title' => 'Assessment',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-39',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3713
  $menu_links['menu-navigation-bar-2:node/3713'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3713',
    'router_path' => 'node/%',
    'link_title' => 'About Progress Notes',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3714
  $menu_links['menu-navigation-bar-2:node/3714'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3714',
    'router_path' => 'node/%',
    'link_title' => 'Rx',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3715
  $menu_links['menu-navigation-bar-2:node/3715'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3715',
    'router_path' => 'node/%',
    'link_title' => 'Medical Summary',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-49',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3716
  $menu_links['menu-navigation-bar-2:node/3716'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3716',
    'router_path' => 'node/%',
    'link_title' => 'e-Prescriptions',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-49',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3717
  $menu_links['menu-navigation-bar-2:node/3717'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3717',
    'router_path' => 'node/%',
    'link_title' => 'Dosage Calculator',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3719
  $menu_links['menu-navigation-bar-2:node/3719'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3719',
    'router_path' => 'node/%',
    'link_title' => 'Diagnostic Imaging',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3720
  $menu_links['menu-navigation-bar-2:node/3720'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3720',
    'router_path' => 'node/%',
    'link_title' => 'Procedures (Treatment)',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3721
  $menu_links['menu-navigation-bar-2:node/3721'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3721',
    'router_path' => 'node/%',
    'link_title' => 'Order Sets',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3726
  $menu_links['menu-navigation-bar-2:node/3726'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3726',
    'router_path' => 'node/%',
    'link_title' => 'Patient Education',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-42',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3727
  $menu_links['menu-navigation-bar-2:node/3727'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3727',
    'router_path' => 'node/%',
    'link_title' => 'Procedures (Progress Note)',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-37',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3728
  $menu_links['menu-navigation-bar-2:node/3728'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3728',
    'router_path' => 'node/%',
    'link_title' => 'Immunizations/Injections',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-36',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3729
  $menu_links['menu-navigation-bar-2:node/3729'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3729',
    'router_path' => 'node/%',
    'link_title' => 'Preventative Medicine',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-35',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3730
  $menu_links['menu-navigation-bar-2:node/3730'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3730',
    'router_path' => 'node/%',
    'link_title' => 'Billing - Progress Note',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-34',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3731
  $menu_links['menu-navigation-bar-2:node/3731'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3731',
    'router_path' => 'node/%',
    'link_title' => 'About Patient Dashboard',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-50',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3733
  $menu_links['menu-navigation-bar-2:node/3733'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3733',
    'router_path' => 'node/%',
    'link_title' => 'Process Claims',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3735
  $menu_links['menu-navigation-bar-2:node/3735'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3735',
    'router_path' => 'node/%',
    'link_title' => 'Submit Claims',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-45',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3736
  $menu_links['menu-navigation-bar-2:node/3736'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3736',
    'router_path' => 'node/%',
    'link_title' => 'Claims Batch Management',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-49',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3737
  $menu_links['menu-navigation-bar-2:node/3737'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3737',
    'router_path' => 'node/%',
    'link_title' => 'Clearinghouses',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3738
  $menu_links['menu-navigation-bar-2:node/3738'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3738',
    'router_path' => 'node/%',
    'link_title' => 'ERA',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-47',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3740
  $menu_links['menu-navigation-bar-2:node/3740'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3740',
    'router_path' => 'node/%',
    'link_title' => 'Patient Payments',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-48',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3741
  $menu_links['menu-navigation-bar-2:node/3741'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3741',
    'router_path' => 'node/%',
    'link_title' => 'Insurance Payments',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-47',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3745
  $menu_links['menu-navigation-bar-2:node/3745'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3745',
    'router_path' => 'node/%',
    'link_title' => 'Payment Batches',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-43',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3746
  $menu_links['menu-navigation-bar-2:node/3746'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3746',
    'router_path' => 'node/%',
    'link_title' => 'Accounts Lookup',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-45',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3748
  $menu_links['menu-navigation-bar-2:node/3748'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3748',
    'router_path' => 'node/%',
    'link_title' => 'Refunds',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-44',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3749
  $menu_links['menu-navigation-bar-2:node/3749'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3749',
    'router_path' => 'node/%',
    'link_title' => 'Billing Alerts',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-43',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3750
  $menu_links['menu-navigation-bar-2:node/3750'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3750',
    'router_path' => 'node/%',
    'link_title' => 'Collection Management',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-42',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3751
  $menu_links['menu-navigation-bar-2:node/3751'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3751',
    'router_path' => 'node/%',
    'link_title' => 'Hard Close',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-41',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3752
  $menu_links['menu-navigation-bar-2:node/3752'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3752',
    'router_path' => 'node/%',
    'link_title' => 'Quality Measures and CDSS',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-48',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3753
  $menu_links['menu-navigation-bar-2:node/3753'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3753',
    'router_path' => 'node/%',
    'link_title' => 'Alerts',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-47',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3754
  $menu_links['menu-navigation-bar-2:node/3754'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3754',
    'router_path' => 'node/%',
    'link_title' => 'FQHC',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3755
  $menu_links['menu-navigation-bar-2:node/3755'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3755',
    'router_path' => 'node/%',
    'link_title' => 'Capitation',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3756
  $menu_links['menu-navigation-bar-2:node/3756'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3756',
    'router_path' => 'node/%',
    'link_title' => 'Occupational Medicine Billing',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3757
  $menu_links['menu-navigation-bar-2:node/3757'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3757',
    'router_path' => 'node/%',
    'link_title' => 'Ryan White HIV/AIDS Program',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3758
  $menu_links['menu-navigation-bar-2:node/3758'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3758',
    'router_path' => 'node/%',
    'link_title' => 'Flowsheets',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-46',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3759
  $menu_links['menu-navigation-bar-2:node/3759'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3759',
    'router_path' => 'node/%',
    'link_title' => 'Smart Forms',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-44',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3760
  $menu_links['menu-navigation-bar-2:node/3760'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3760',
    'router_path' => 'node/%',
    'link_title' => 'Growth Chart',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-43',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3761
  $menu_links['menu-navigation-bar-2:node/3761'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3761',
    'router_path' => 'node/%',
    'link_title' => 'Problem List',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'node/4331',
  );
  // Exported menu link: menu-navigation-bar-2:node/3762
  $menu_links['menu-navigation-bar-2:node/3762'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3762',
    'router_path' => 'node/%',
    'link_title' => 'Printing/Faxing Progress Notes',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-50',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3763
  $menu_links['menu-navigation-bar-2:node/3763'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3763',
    'router_path' => 'node/%',
    'link_title' => 'Super Bill - Details',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3764
  $menu_links['menu-navigation-bar-2:node/3764'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3764',
    'router_path' => 'node/%',
    'link_title' => 'Locking - Unlocking Progress Notes',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3765
  $menu_links['menu-navigation-bar-2:node/3765'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3765',
    'router_path' => 'node/%',
    'link_title' => 'Progress Note Template',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-45',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3766
  $menu_links['menu-navigation-bar-2:node/3766'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3766',
    'router_path' => 'node/%',
    'link_title' => 'Specialty Forms',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-45',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3767
  $menu_links['menu-navigation-bar-2:node/3767'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3767',
    'router_path' => 'node/%',
    'link_title' => 'Anti-Coagulant Flowsheet',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3768
  $menu_links['menu-navigation-bar-2:node/3768'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3768',
    'router_path' => 'node/%',
    'link_title' => 'Office Visits',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-43',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3769
  $menu_links['menu-navigation-bar-2:node/3769'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3769',
    'router_path' => 'node/%',
    'link_title' => 'Out of Office Visits',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-38',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3770
  $menu_links['menu-navigation-bar-2:node/3770'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3770',
    'router_path' => 'node/%',
    'link_title' => 'Registry',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-42',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3771
  $menu_links['menu-navigation-bar-2:node/3771'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3771',
    'router_path' => 'node/%',
    'link_title' => 'Structured Data',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-41',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3772
  $menu_links['menu-navigation-bar-2:node/3772'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3772',
    'router_path' => 'node/%',
    'link_title' => 'Progress Note Customization',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-40',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3773
  $menu_links['menu-navigation-bar-2:node/3773'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3773',
    'router_path' => 'node/%',
    'link_title' => 'Chronic Care',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-36',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3779
  $menu_links['menu-navigation-bar-2:node/3779'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3779',
    'router_path' => 'node/%',
    'link_title' => 'Accounts Receivable Management',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3780
  $menu_links['menu-navigation-bar-2:node/3780'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3780',
    'router_path' => 'node/%',
    'link_title' => 'P.S.A.C.',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-49',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3782
  $menu_links['menu-navigation-bar-2:node/3782'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3782',
    'router_path' => 'node/%',
    'link_title' => 'Facility',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3783
  $menu_links['menu-navigation-bar-2:node/3783'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3783',
    'router_path' => 'node/%',
    'link_title' => 'Provider Setup',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-49',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3784
  $menu_links['menu-navigation-bar-2:node/3784'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3784',
    'router_path' => 'node/%',
    'link_title' => 'My Settings',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3785
  $menu_links['menu-navigation-bar-2:node/3785'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3785',
    'router_path' => 'node/%',
    'link_title' => 'Staff Setup',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-48',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3786
  $menu_links['menu-navigation-bar-2:node/3786'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3786',
    'router_path' => 'node/%',
    'link_title' => 'Referring Physicians',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-47',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3787
  $menu_links['menu-navigation-bar-2:node/3787'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3787',
    'router_path' => 'node/%',
    'link_title' => 'Provider/Resource Schedules',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3788
  $menu_links['menu-navigation-bar-2:node/3788'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3788',
    'router_path' => 'node/%',
    'link_title' => 'Resource Setup',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-45',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3789
  $menu_links['menu-navigation-bar-2:node/3789'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3789',
    'router_path' => 'node/%',
    'link_title' => 'Misc Configuration Options',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-38',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3790
  $menu_links['menu-navigation-bar-2:node/3790'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3790',
    'router_path' => 'node/%',
    'link_title' => 'Immunization Registry',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-44',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3791
  $menu_links['menu-navigation-bar-2:node/3791'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3791',
    'router_path' => 'node/%',
    'link_title' => 'Department',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-43',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3792
  $menu_links['menu-navigation-bar-2:node/3792'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3792',
    'router_path' => 'node/%',
    'link_title' => 'CPT Codes',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-37',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3793
  $menu_links['menu-navigation-bar-2:node/3793'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3793',
    'router_path' => 'node/%',
    'link_title' => 'Attorneys',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-42',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3794
  $menu_links['menu-navigation-bar-2:node/3794'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3794',
    'router_path' => 'node/%',
    'link_title' => 'Dragon Naturally Speaking',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-41',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3795
  $menu_links['menu-navigation-bar-2:node/3795'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3795',
    'router_path' => 'node/%',
    'link_title' => 'Employers',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-40',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3796
  $menu_links['menu-navigation-bar-2:node/3796'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3796',
    'router_path' => 'node/%',
    'link_title' => 'Front Office Tab',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-50',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3797
  $menu_links['menu-navigation-bar-2:node/3797'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3797',
    'router_path' => 'node/%',
    'link_title' => 'Visit Rules',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-37',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3798
  $menu_links['menu-navigation-bar-2:node/3798'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3798',
    'router_path' => 'node/%',
    'link_title' => 'Mid Office Tab',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-49',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3799
  $menu_links['menu-navigation-bar-2:node/3799'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3799',
    'router_path' => 'node/%',
    'link_title' => 'Visit Types',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-36',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3800
  $menu_links['menu-navigation-bar-2:node/3800'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3800',
    'router_path' => 'node/%',
    'link_title' => 'UpToDate Setup',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-35',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3801
  $menu_links['menu-navigation-bar-2:node/3801'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3801',
    'router_path' => 'node/%',
    'link_title' => 'Actions',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3802
  $menu_links['menu-navigation-bar-2:node/3802'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3802',
    'router_path' => 'node/%',
    'link_title' => 'Interface Tab',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-48',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3804
  $menu_links['menu-navigation-bar-2:node/3804'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3804',
    'router_path' => 'node/%',
    'link_title' => 'General Tab',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-47',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3805
  $menu_links['menu-navigation-bar-2:node/3805'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3805',
    'router_path' => 'node/%',
    'link_title' => 'eClinicalMessenger',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-46',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3806
  $menu_links['menu-navigation-bar-2:node/3806'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3806',
    'router_path' => 'node/%',
    'link_title' => 'eClinicalMobile',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3807
  $menu_links['menu-navigation-bar-2:node/3807'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3807',
    'router_path' => 'node/%',
    'link_title' => 'eBO',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3808
  $menu_links['menu-navigation-bar-2:node/3808'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3808',
    'router_path' => 'node/%',
    'link_title' => 'Fee Schedules',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-36',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3809
  $menu_links['menu-navigation-bar-2:node/3809'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3809',
    'router_path' => 'node/%',
    'link_title' => 'UDS Reports',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-49',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3810
  $menu_links['menu-navigation-bar-2:node/3810'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3810',
    'router_path' => 'node/%',
    'link_title' => 'OSHPD Reporting',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-50',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3811
  $menu_links['menu-navigation-bar-2:node/3811'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3811',
    'router_path' => 'node/%',
    'link_title' => 'Enterprise Directory',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-44',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3812
  $menu_links['menu-navigation-bar-2:node/3812'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3812',
    'router_path' => 'node/%',
    'link_title' => 'Patient Portal',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-43',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3813
  $menu_links['menu-navigation-bar-2:node/3813'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3813',
    'router_path' => 'node/%',
    'link_title' => 'ICD Codes',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-35',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3814
  $menu_links['menu-navigation-bar-2:node/3814'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3814',
    'router_path' => 'node/%',
    'link_title' => 'P2P',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-42',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3815
  $menu_links['menu-navigation-bar-2:node/3815'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3815',
    'router_path' => 'node/%',
    'link_title' => 'eEHX',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-41',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3816
  $menu_links['menu-navigation-bar-2:node/3816'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3816',
    'router_path' => 'node/%',
    'link_title' => 'Labs Tab',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-46',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3817
  $menu_links['menu-navigation-bar-2:node/3817'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3817',
    'router_path' => 'node/%',
    'link_title' => 'Styles Tab',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-45',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3818
  $menu_links['menu-navigation-bar-2:node/3818'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3818',
    'router_path' => 'node/%',
    'link_title' => 'Performance Tab',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-44',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3819
  $menu_links['menu-navigation-bar-2:node/3819'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3819',
    'router_path' => 'node/%',
    'link_title' => 'Portal Tab',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-43',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3820
  $menu_links['menu-navigation-bar-2:node/3820'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3820',
    'router_path' => 'node/%',
    'link_title' => 'Options Tab',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-42',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3821
  $menu_links['menu-navigation-bar-2:node/3821'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3821',
    'router_path' => 'node/%',
    'link_title' => 'Scanning/Printing Tab',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-41',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3822
  $menu_links['menu-navigation-bar-2:node/3822'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3822',
    'router_path' => 'node/%',
    'link_title' => 'Local Settings',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-47',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3823
  $menu_links['menu-navigation-bar-2:node/3823'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3823',
    'router_path' => 'node/%',
    'link_title' => 'Export to Outlook',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-46',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3824
  $menu_links['menu-navigation-bar-2:node/3824'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3824',
    'router_path' => 'node/%',
    'link_title' => 'Code Correct',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-34',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3825
  $menu_links['menu-navigation-bar-2:node/3825'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3825',
    'router_path' => 'node/%',
    'link_title' => 'Rule Engine',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-33',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3927
  $menu_links['menu-navigation-bar-2:node/3927'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3927',
    'router_path' => 'node/%',
    'link_title' => 'Insurance',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-38',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/3929
  $menu_links['menu-navigation-bar-2:node/3929'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/3929',
    'router_path' => 'node/%',
    'link_title' => 'eCliniForms',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/4329
  $menu_links['menu-navigation-bar-2:node/4329'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/4329',
    'router_path' => 'node/%',
    'link_title' => 'Medication Summary',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-48',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/4330
  $menu_links['menu-navigation-bar-2:node/4330'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/4330',
    'router_path' => 'node/%',
    'link_title' => 'Transcriptions',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-35',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/4331
  $menu_links['menu-navigation-bar-2:node/4331'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/4331',
    'router_path' => 'node/%',
    'link_title' => 'Chart Panel',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'node/4331',
  );
  // Exported menu link: menu-navigation-bar-2:node/5462
  $menu_links['menu-navigation-bar-2:node/5462'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/5462',
    'router_path' => 'node/%',
    'link_title' => 'Using IPE - Encounters',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-49',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/5464
  $menu_links['menu-navigation-bar-2:node/5464'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/5464',
    'router_path' => 'node/%',
    'link_title' => 'Using the Claims Window',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-48',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/5468
  $menu_links['menu-navigation-bar-2:node/5468'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/5468',
    'router_path' => 'node/%',
    'link_title' => 'About Claims',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-50',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/5469
  $menu_links['menu-navigation-bar-2:node/5469'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/5469',
    'router_path' => 'node/%',
    'link_title' => 'APL and Daysheet Reports',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-50',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/5471
  $menu_links['menu-navigation-bar-2:node/5471'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/5471',
    'router_path' => 'node/%',
    'link_title' => 'PQRS (Formerly PQRI)',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-46',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/5472
  $menu_links['menu-navigation-bar-2:node/5472'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/5472',
    'router_path' => 'node/%',
    'link_title' => 'Care Plan',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-39',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/5473
  $menu_links['menu-navigation-bar-2:node/5473'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/5473',
    'router_path' => 'node/%',
    'link_title' => 'Ahlers Family Planning',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-50',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/5534
  $menu_links['menu-navigation-bar-2:node/5534'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/5534',
    'router_path' => 'node/%',
    'link_title' => 'ePayments',
    'options' => array(
      'attributes' => array(
        'title' => 'Make payments using electronic processing.',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-42',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/5535
  $menu_links['menu-navigation-bar-2:node/5535'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/5535',
    'router_path' => 'node/%',
    'link_title' => 'About Payments',
    'options' => array(
      'attributes' => array(
        'title' => 'Overview of a Payment',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-50',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/5537
  $menu_links['menu-navigation-bar-2:node/5537'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/5537',
    'router_path' => 'node/%',
    'link_title' => 'Payments',
    'options' => array(
      'attributes' => array(
        'title' => 'General information about Payments',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-49',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/5539
  $menu_links['menu-navigation-bar-2:node/5539'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/5539',
    'router_path' => 'node/%',
    'link_title' => 'Data Export - Maine Virginia Pennsylvania North Carolina',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/5557
  $menu_links['menu-navigation-bar-2:node/5557'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/5557',
    'router_path' => 'node/%',
    'link_title' => 'Interface Dashboard',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-44',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/5572
  $menu_links['menu-navigation-bar-2:node/5572'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/5572',
    'router_path' => 'node/%',
    'link_title' => 'Macros',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-33',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/5582
  $menu_links['menu-navigation-bar-2:node/5582'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/5582',
    'router_path' => 'node/%',
    'link_title' => 'Scheduled Jobs',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/5601
  $menu_links['menu-navigation-bar-2:node/5601'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/5601',
    'router_path' => 'node/%',
    'link_title' => 'Outgoing Referrals',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/5645
  $menu_links['menu-navigation-bar-2:node/5645'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/5645',
    'router_path' => 'node/%',
    'link_title' => 'Labs',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-48',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/5653
  $menu_links['menu-navigation-bar-2:node/5653'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/5653',
    'router_path' => 'node/%',
    'link_title' => 'Kiosk',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/5999
  $menu_links['menu-navigation-bar-2:node/5999'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/5999',
    'router_path' => 'node/%',
    'link_title' => 'CPSP',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/6001
  $menu_links['menu-navigation-bar-2:node/6001'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/6001',
    'router_path' => 'node/%',
    'link_title' => 'eCliniSense',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-43',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/6006
  $menu_links['menu-navigation-bar-2:node/6006'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/6006',
    'router_path' => 'node/%',
    'link_title' => 'Outgoing Referrals',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-44',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/6008
  $menu_links['menu-navigation-bar-2:node/6008'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/6008',
    'router_path' => 'node/%',
    'link_title' => 'Labs',
    'options' => array(
      'attributes' => array(
        'title' => 'Complete Workflow of Labs, including Electronic Interface',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/6025
  $menu_links['menu-navigation-bar-2:node/6025'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/6025',
    'router_path' => 'node/%',
    'link_title' => 'Security',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/6034
  $menu_links['menu-navigation-bar-2:node/6034'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/6034',
    'router_path' => 'node/%',
    'link_title' => 'Adjust IE Print Margins',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-34',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/6044
  $menu_links['menu-navigation-bar-2:node/6044'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/6044',
    'router_path' => 'node/%',
    'link_title' => 'Product Activation',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-33',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/6143
  $menu_links['menu-navigation-bar-2:node/6143'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/6143',
    'router_path' => 'node/%',
    'link_title' => 'Overview - WorkFlows',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/6149
  $menu_links['menu-navigation-bar-2:node/6149'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/6149',
    'router_path' => 'node/%',
    'link_title' => 'All Primary Pages - Alphabetically',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/6161
  $menu_links['menu-navigation-bar-2:node/6161'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/6161',
    'router_path' => 'node/%',
    'link_title' => 'Patient Information',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-50',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/6174
  $menu_links['menu-navigation-bar-2:node/6174'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/6174',
    'router_path' => 'node/%',
    'link_title' => 'All Primary Pages - Folding',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/6186
  $menu_links['menu-navigation-bar-2:node/6186'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/6186',
    'router_path' => 'node/%',
    'link_title' => 'Pharmacy',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-39',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/6194
  $menu_links['menu-navigation-bar-2:node/6194'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/6194',
    'router_path' => 'node/%',
    'link_title' => 'Logs',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-40',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/6226
  $menu_links['menu-navigation-bar-2:node/6226'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/6226',
    'router_path' => 'node/%',
    'link_title' => 'Fax Inbox',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/6434
  $menu_links['menu-navigation-bar-2:node/6434'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/6434',
    'router_path' => 'node/%',
    'link_title' => 'Transworld',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/6469
  $menu_links['menu-navigation-bar-2:node/6469'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/6469',
    'router_path' => 'node/%',
    'link_title' => 'Patient Hub',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-49',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/6476
  $menu_links['menu-navigation-bar-2:node/6476'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/6476',
    'router_path' => 'node/%',
    'link_title' => 'Patient Lookup',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/6487
  $menu_links['menu-navigation-bar-2:node/6487'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/6487',
    'router_path' => 'node/%',
    'link_title' => 'Cardiology WorkFlow',
    'options' => array(
      'attributes' => array(
        'title' => 'A partial WorkFlow to show the process of documenting a procedure. (ecg, holter, etc)',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/6498
  $menu_links['menu-navigation-bar-2:node/6498'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/6498',
    'router_path' => 'node/%',
    'link_title' => '5010 Form',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/6499
  $menu_links['menu-navigation-bar-2:node/6499'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/6499',
    'router_path' => 'node/%',
    'link_title' => 'PCMH',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-38',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/6500
  $menu_links['menu-navigation-bar-2:node/6500'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/6500',
    'router_path' => 'node/%',
    'link_title' => 'Accountable Care Org (ACO)',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-37',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/6531
  $menu_links['menu-navigation-bar-2:node/6531'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/6531',
    'router_path' => 'node/%',
    'link_title' => 'Anesthesiology',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/6532
  $menu_links['menu-navigation-bar-2:node/6532'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/6532',
    'router_path' => 'node/%',
    'link_title' => 'Cardiology',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/6533
  $menu_links['menu-navigation-bar-2:node/6533'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/6533',
    'router_path' => 'node/%',
    'link_title' => 'Dental',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/6534
  $menu_links['menu-navigation-bar-2:node/6534'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/6534',
    'router_path' => 'node/%',
    'link_title' => 'Dermatology',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/6536
  $menu_links['menu-navigation-bar-2:node/6536'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/6536',
    'router_path' => 'node/%',
    'link_title' => 'ENT Ear, Nose and Throat',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/6537
  $menu_links['menu-navigation-bar-2:node/6537'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/6537',
    'router_path' => 'node/%',
    'link_title' => 'Family Practice',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/6538
  $menu_links['menu-navigation-bar-2:node/6538'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/6538',
    'router_path' => 'node/%',
    'link_title' => 'General Surgery',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/6539
  $menu_links['menu-navigation-bar-2:node/6539'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/6539',
    'router_path' => 'node/%',
    'link_title' => 'Health and Wellness',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/6540
  $menu_links['menu-navigation-bar-2:node/6540'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/6540',
    'router_path' => 'node/%',
    'link_title' => 'Nephrology',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/6541
  $menu_links['menu-navigation-bar-2:node/6541'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/6541',
    'router_path' => 'node/%',
    'link_title' => 'Obstetrics/Gynecology',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/6542
  $menu_links['menu-navigation-bar-2:node/6542'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/6542',
    'router_path' => 'node/%',
    'link_title' => 'Oncology',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/6543
  $menu_links['menu-navigation-bar-2:node/6543'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/6543',
    'router_path' => 'node/%',
    'link_title' => 'Opthalmology and Optometry',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/6544
  $menu_links['menu-navigation-bar-2:node/6544'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/6544',
    'router_path' => 'node/%',
    'link_title' => 'Orthopedics',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/6545
  $menu_links['menu-navigation-bar-2:node/6545'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/6545',
    'router_path' => 'node/%',
    'link_title' => 'Pain Management',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/6546
  $menu_links['menu-navigation-bar-2:node/6546'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/6546',
    'router_path' => 'node/%',
    'link_title' => 'Pediatrics',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/6547
  $menu_links['menu-navigation-bar-2:node/6547'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/6547',
    'router_path' => 'node/%',
    'link_title' => 'Podiatry',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/6548
  $menu_links['menu-navigation-bar-2:node/6548'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/6548',
    'router_path' => 'node/%',
    'link_title' => 'Rheumatology',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/6828
  $menu_links['menu-navigation-bar-2:node/6828'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/6828',
    'router_path' => 'node/%',
    'link_title' => 'Physician Reference',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-41',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/7094
  $menu_links['menu-navigation-bar-2:node/7094'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/7094',
    'router_path' => 'node/%',
    'link_title' => 'Neurology',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/7184
  $menu_links['menu-navigation-bar-2:node/7184'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/7184',
    'router_path' => 'node/%',
    'link_title' => 'Intellidose',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/7611
  $menu_links['menu-navigation-bar-2:node/7611'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/7611',
    'router_path' => 'node/%',
    'link_title' => 'About Treatment Window',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:node/7615
  $menu_links['menu-navigation-bar-2:node/7615'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'node/7615',
    'router_path' => 'node/%',
    'link_title' => 'Authentication Settings',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-navigation-bar-2:show_all_attributes
  $menu_links['menu-navigation-bar-2:show_all_attributes'] = array(
    'menu_name' => 'menu-navigation-bar-2',
    'link_path' => 'show_all_attributes',
    'router_path' => 'show_all_attributes',
    'link_title' => 'All Security Attributes by Role',
    'options' => array(
      'attributes' => array(
        'title' => 'A list of all Security Attributes by Suggested Role',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-newadmin:node/add
  $menu_links['menu-newadmin:node/add'] = array(
    'menu_name' => 'menu-newadmin',
    'link_path' => 'node/add',
    'router_path' => 'node/add',
    'link_title' => 'Create content',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: menu-newadmin:node/add/addit-content
  $menu_links['menu-newadmin:node/add/addit-content'] = array(
    'menu_name' => 'menu-newadmin',
    'link_path' => 'node/add/addit-content',
    'router_path' => 'node/add/addit-content',
    'link_title' => 'Additional Content',
    'options' => array(
      'attributes' => array(
        'title' => 'Content generated by the KB group',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: menu-newadmin:node/add/admin-content
  $menu_links['menu-newadmin:node/add/admin-content'] = array(
    'menu_name' => 'menu-newadmin',
    'link_path' => 'node/add/admin-content',
    'router_path' => 'node/add/admin-content',
    'link_title' => 'Admin Content',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: menu-newadmin:node/add/blog
  $menu_links['menu-newadmin:node/add/blog'] = array(
    'menu_name' => 'menu-newadmin',
    'link_path' => 'node/add/blog',
    'router_path' => 'node/add/blog',
    'link_title' => 'Blog entry',
    'options' => array(
      'attributes' => array(
        'title' => 'A <em>blog entry</em> is a single post to an online journal, or <em>blog</em>.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: menu-newadmin:node/add/dv
  $menu_links['menu-newadmin:node/add/dv'] = array(
    'menu_name' => 'menu-newadmin',
    'link_path' => 'node/add/dv',
    'router_path' => 'node/add/dv',
    'link_title' => 'Development Video',
    'options' => array(
      'attributes' => array(
        'title' => 'For Video segment information',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: menu-newadmin:node/add/forum
  $menu_links['menu-newadmin:node/add/forum'] = array(
    'menu_name' => 'menu-newadmin',
    'link_path' => 'node/add/forum',
    'router_path' => 'node/add/forum',
    'link_title' => 'Forum topic',
    'options' => array(
      'attributes' => array(
        'title' => 'A <em>forum topic</em> is the initial post to a new discussion thread within a forum.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: menu-newadmin:node/add/internal
  $menu_links['menu-newadmin:node/add/internal'] = array(
    'menu_name' => 'menu-newadmin',
    'link_path' => 'node/add/internal',
    'router_path' => 'node/add/internal',
    'link_title' => 'Internal',
    'options' => array(
      'attributes' => array(
        'title' => 'For Internal ECW use only',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: menu-newadmin:node/add/internal-documentation
  $menu_links['menu-newadmin:node/add/internal-documentation'] = array(
    'menu_name' => 'menu-newadmin',
    'link_path' => 'node/add/internal-documentation',
    'router_path' => 'node/add/internal-documentation',
    'link_title' => 'Internal Documentation',
    'options' => array(
      'attributes' => array(
        'title' => 'Used for the Documentation group.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: menu-newadmin:node/add/item-key
  $menu_links['menu-newadmin:node/add/item-key'] = array(
    'menu_name' => 'menu-newadmin',
    'link_path' => 'node/add/item-key',
    'router_path' => 'node/add/item-key',
    'link_title' => 'Item Key',
    'options' => array(
      'attributes' => array(
        'title' => 'List of Item Keys that can be created into a view to sort and search.  Could also create a node-reference field that might pull these in dynamically.  ',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: menu-newadmin:node/add/kb-partner-pages
  $menu_links['menu-newadmin:node/add/kb-partner-pages'] = array(
    'menu_name' => 'menu-newadmin',
    'link_path' => 'node/add/kb-partner-pages',
    'router_path' => 'node/add/kb-partner-pages',
    'link_title' => 'Partner Page',
    'options' => array(
      'attributes' => array(
        'title' => 'To replace the SAP Pages:  http://www.ecwknowledgebase.com/node/2404',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: menu-newadmin:node/add/link-content-type
  $menu_links['menu-newadmin:node/add/link-content-type'] = array(
    'menu_name' => 'menu-newadmin',
    'link_path' => 'node/add/link-content-type',
    'router_path' => 'node/add/link-content-type',
    'link_title' => 'Link Content Type',
    'options' => array(
      'attributes' => array(
        'title' => 'Contains a Text Field and a Link Field',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: menu-newadmin:node/add/multichoice
  $menu_links['menu-newadmin:node/add/multichoice'] = array(
    'menu_name' => 'menu-newadmin',
    'link_path' => 'node/add/multichoice',
    'router_path' => 'node/add/multichoice',
    'link_title' => 'Multiple choice question',
    'options' => array(
      'attributes' => array(
        'title' => 'This provides multiple choice questions for use by the Quiz module.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: menu-newadmin:node/add/node_export
  $menu_links['menu-newadmin:node/add/node_export'] = array(
    'menu_name' => 'menu-newadmin',
    'link_path' => 'node/add/node_export',
    'router_path' => 'node/add/node_export',
    'link_title' => 'Node export: import',
    'options' => array(
      'attributes' => array(
        'title' => 'Import content using <em>Node export</em>.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: menu-newadmin:node/add/page
  $menu_links['menu-newadmin:node/add/page'] = array(
    'menu_name' => 'menu-newadmin',
    'link_path' => 'node/add/page',
    'router_path' => 'node/add/page',
    'link_title' => 'Page',
    'options' => array(
      'attributes' => array(
        'title' => '<p>A <em>page</em>, similar in form to a <em>story</em>, is a simple method for creating and displaying information that rarely changes, such as an &quot;About us&quot; section of a website. By default, a <em>page</em> entry does not allow visitor comments and is not featured on the site\'s initial home page.</p>',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: menu-newadmin:node/add/panel
  $menu_links['menu-newadmin:node/add/panel'] = array(
    'menu_name' => 'menu-newadmin',
    'link_path' => 'node/add/panel',
    'router_path' => 'node/add/panel',
    'link_title' => 'Panel',
    'options' => array(
      'attributes' => array(
        'title' => 'A panel layout broken up into rows and columns.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: menu-newadmin:node/add/primary-page-content
  $menu_links['menu-newadmin:node/add/primary-page-content'] = array(
    'menu_name' => 'menu-newadmin',
    'link_path' => 'node/add/primary-page-content',
    'router_path' => 'node/add/primary-page-content',
    'link_title' => 'Primary Page',
    'options' => array(
      'attributes' => array(
        'title' => 'A  new content type created on February 22, 2011 to use specifically for primary pages',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: menu-newadmin:node/add/quiz
  $menu_links['menu-newadmin:node/add/quiz'] = array(
    'menu_name' => 'menu-newadmin',
    'link_path' => 'node/add/quiz',
    'router_path' => 'node/add/quiz',
    'link_title' => 'Quiz',
    'options' => array(
      'attributes' => array(
        'title' => 'Create interactive quizzes for site visitors',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: menu-newadmin:node/add/story
  $menu_links['menu-newadmin:node/add/story'] = array(
    'menu_name' => 'menu-newadmin',
    'link_path' => 'node/add/story',
    'router_path' => 'node/add/story',
    'link_title' => 'Story',
    'options' => array(
      'attributes' => array(
        'title' => 'A <em>story</em>, similar in form to a <em>page</em>, is ideal for creating and displaying content that informs or engages website visitors. Press releases, site announcements, and informal blog-like entries may all be created with a <em>story</em> entry. By default, a <em>story</em> entry is automatically featured on the site\'s initial home page, and provides the ability to post comments.',
      ),
    ),
    'module' => 'system',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: menu-newadmin:node/add/to-be-reviewed
  $menu_links['menu-newadmin:node/add/to-be-reviewed'] = array(
    'menu_name' => 'menu-newadmin',
    'link_path' => 'node/add/to-be-reviewed',
    'router_path' => 'node/add/to-be-reviewed',
    'link_title' => 'To Be Reviewed',
    'options' => array(
      'attributes' => array(
        'title' => 'Nodes that need a review before publishing',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: menu-newadmin:node/add/truefalse
  $menu_links['menu-newadmin:node/add/truefalse'] = array(
    'menu_name' => 'menu-newadmin',
    'link_path' => 'node/add/truefalse',
    'router_path' => 'node/add/truefalse',
    'link_title' => 'True/false question',
    'options' => array(
      'attributes' => array(
        'title' => 'Quiz questions that allow a user to select "true" or "false" as his response to a statement.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: menu-newadmin:node/add/video-embed
  $menu_links['menu-newadmin:node/add/video-embed'] = array(
    'menu_name' => 'menu-newadmin',
    'link_path' => 'node/add/video-embed',
    'router_path' => 'node/add/video-embed',
    'link_title' => 'Video',
    'options' => array(
      'attributes' => array(
        'title' => 'Content type used for adding videos from sites, such as Vimeo and Youtube',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: menu-newadmin:node/add/webform
  $menu_links['menu-newadmin:node/add/webform'] = array(
    'menu_name' => 'menu-newadmin',
    'link_path' => 'node/add/webform',
    'router_path' => 'node/add/webform',
    'link_title' => 'Webform',
    'options' => array(
      'attributes' => array(
        'title' => 'Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: menu-newsmenu:contact
  $menu_links['menu-newsmenu:contact'] = array(
    'menu_name' => 'menu-newsmenu',
    'link_path' => 'contact',
    'router_path' => 'contact',
    'link_title' => 'eMail to Administrator',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-newsmenu:node/1304
  $menu_links['menu-newsmenu:node/1304'] = array(
    'menu_name' => 'menu-newsmenu',
    'link_path' => 'node/1304',
    'router_path' => 'node/%',
    'link_title' => 'Site Orientation',
    'options' => array(
      'attributes' => array(
        'title' => 'How to use your KnowledgeBase',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-quizzes-nav:<front>
  $menu_links['menu-quizzes-nav:<front>'] = array(
    'menu_name' => 'menu-quizzes-nav',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Quizzes',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: menu-quizzes-nav:node/7407
  $menu_links['menu-quizzes-nav:node/7407'] = array(
    'menu_name' => 'menu-quizzes-nav',
    'link_path' => 'node/7407',
    'router_path' => 'node/%',
    'link_title' => 'Meaningful Use',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-49',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-quizzes-nav:node/7433
  $menu_links['menu-quizzes-nav:node/7433'] = array(
    'menu_name' => 'menu-quizzes-nav',
    'link_path' => 'node/7433',
    'router_path' => 'node/%',
    'link_title' => 'Sexual Harassment Quiz',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-48',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-quizzes-nav:node/7584
  $menu_links['menu-quizzes-nav:node/7584'] = array(
    'menu_name' => 'menu-quizzes-nav',
    'link_path' => 'node/7584',
    'router_path' => 'node/%',
    'link_title' => 'HIPAA Certification Quiz',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-50',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-suckerfish-department:<front>
  $menu_links['menu-suckerfish-department:<front>'] = array(
    'menu_name' => 'menu-suckerfish-department',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'HIPAA Privacy Team',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-48',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-suckerfish-department:blog/21918
  $menu_links['menu-suckerfish-department:blog/21918'] = array(
    'menu_name' => 'menu-suckerfish-department',
    'link_path' => 'blog/21918',
    'router_path' => 'blog/%',
    'link_title' => 'HIPAA Blog',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-suckerfish-department:http://ecwknowledgebase.com/node/7070
  $menu_links['menu-suckerfish-department:http://ecwknowledgebase.com/node/7070'] = array(
    'menu_name' => 'menu-suckerfish-department',
    'link_path' => 'http://ecwknowledgebase.com/node/7070',
    'router_path' => '',
    'link_title' => 'HIPAA Annual Training Video',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-suckerfish-department:http://www.ecwknowledgebase.com/hipaa/quiz
  $menu_links['menu-suckerfish-department:http://www.ecwknowledgebase.com/hipaa/quiz'] = array(
    'menu_name' => 'menu-suckerfish-department',
    'link_path' => 'http://www.ecwknowledgebase.com/hipaa/quiz',
    'router_path' => '',
    'link_title' => 'HIPAA Certification Exam (2011)',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-suckerfish-department:node/1691
  $menu_links['menu-suckerfish-department:node/1691'] = array(
    'menu_name' => 'menu-suckerfish-department',
    'link_path' => 'node/1691',
    'router_path' => 'node/%',
    'link_title' => 'Interface Team (Private)',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-49',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-suckerfish-department:node/1767
  $menu_links['menu-suckerfish-department:node/1767'] = array(
    'menu_name' => 'menu-suckerfish-department',
    'link_path' => 'node/1767',
    'router_path' => 'node/%',
    'link_title' => 'HIPAA HITECH Overview',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-suckerfish-department:node/1768
  $menu_links['menu-suckerfish-department:node/1768'] = array(
    'menu_name' => 'menu-suckerfish-department',
    'link_path' => 'node/1768',
    'router_path' => 'node/%',
    'link_title' => 'HIPAA Documents',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-50',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-suckerfish-department:node/2404
  $menu_links['menu-suckerfish-department:node/2404'] = array(
    'menu_name' => 'menu-suckerfish-department',
    'link_path' => 'node/2404',
    'router_path' => 'node/%',
    'link_title' => 'Partners and Alliances',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-49',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-suckerfish-department:node/6017
  $menu_links['menu-suckerfish-department:node/6017'] = array(
    'menu_name' => 'menu-suckerfish-department',
    'link_path' => 'node/6017',
    'router_path' => 'node/%',
    'link_title' => 'Contact Center',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-suckerfish-department:node/7161
  $menu_links['menu-suckerfish-department:node/7161'] = array(
    'menu_name' => 'menu-suckerfish-department',
    'link_path' => 'node/7161',
    'router_path' => 'node/%',
    'link_title' => '2012 Sexual Harassment Course/ Quiz',
    'options' => array(
      'attributes' => array(
        'title' => 'Sexual Harassment 2012',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-suckerfish-department:node/7819
  $menu_links['menu-suckerfish-department:node/7819'] = array(
    'menu_name' => 'menu-suckerfish-department',
    'link_path' => 'node/7819',
    'router_path' => 'node/%',
    'link_title' => 'eCW Film Club',
    'options' => array(
      'attributes' => array(
        'title' => 'A film watcher\'s utopia.',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-suckerfish-logout:logout
  $menu_links['menu-suckerfish-logout:logout'] = array(
    'menu_name' => 'menu-suckerfish-logout',
    'link_path' => 'logout',
    'router_path' => 'logout',
    'link_title' => 'Log out',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-suckerfish-meaningful-use:<front>
  $menu_links['menu-suckerfish-meaningful-use:<front>'] = array(
    'menu_name' => 'menu-suckerfish-meaningful-use',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Meaningful Use',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '0',
  );
  // Exported menu link: menu-suckerfish-meaningful-use:node/7407
  $menu_links['menu-suckerfish-meaningful-use:node/7407'] = array(
    'menu_name' => 'menu-suckerfish-meaningful-use',
    'link_path' => 'node/7407',
    'router_path' => 'node/%',
    'link_title' => 'MU at eClinicalWorks',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-suckerfish-myaccount:user/%
  $menu_links['menu-suckerfish-myaccount:user/%'] = array(
    'menu_name' => 'menu-suckerfish-myaccount',
    'link_path' => 'user/%',
    'router_path' => 'user/%',
    'link_title' => 'My Account',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-suckerfish-resources:<front>
  $menu_links['menu-suckerfish-resources:<front>'] = array(
    'menu_name' => 'menu-suckerfish-resources',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Resources',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-49',
  );
  // Exported menu link: menu-suckerfish-resources:node/13
  $menu_links['menu-suckerfish-resources:node/13'] = array(
    'menu_name' => 'menu-suckerfish-resources',
    'link_path' => 'node/13',
    'router_path' => 'node/%',
    'link_title' => 'Current Guides/ Manuals',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-suckerfish-resources:node/1643
  $menu_links['menu-suckerfish-resources:node/1643'] = array(
    'menu_name' => 'menu-suckerfish-resources',
    'link_path' => 'node/1643',
    'router_path' => 'node/%',
    'link_title' => 'Rapid Deployment Training',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-37',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-suckerfish-resources:node/1688
  $menu_links['menu-suckerfish-resources:node/1688'] = array(
    'menu_name' => 'menu-suckerfish-resources',
    'link_path' => 'node/1688',
    'router_path' => 'node/%',
    'link_title' => 'EMR System Setup Call Agenda',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-38',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-suckerfish-resources:node/1693
  $menu_links['menu-suckerfish-resources:node/1693'] = array(
    'menu_name' => 'menu-suckerfish-resources',
    'link_path' => 'node/1693',
    'router_path' => 'node/%',
    'link_title' => 'Overview of eCW Software',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-50',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-suckerfish-resources:node/1788
  $menu_links['menu-suckerfish-resources:node/1788'] = array(
    'menu_name' => 'menu-suckerfish-resources',
    'link_path' => 'node/1788',
    'router_path' => 'node/%',
    'link_title' => 'Future Specialities',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-suckerfish-resources:node/33
  $menu_links['menu-suckerfish-resources:node/33'] = array(
    'menu_name' => 'menu-suckerfish-resources',
    'link_path' => 'node/33',
    'router_path' => 'node/%',
    'link_title' => 'Front Office',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-49',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-suckerfish-resources:node/34
  $menu_links['menu-suckerfish-resources:node/34'] = array(
    'menu_name' => 'menu-suckerfish-resources',
    'link_path' => 'node/34',
    'router_path' => 'node/%',
    'link_title' => 'Electronic Medical Record (EMR)',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-48',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-suckerfish-resources:node/42
  $menu_links['menu-suckerfish-resources:node/42'] = array(
    'menu_name' => 'menu-suckerfish-resources',
    'link_path' => 'node/42',
    'router_path' => 'node/%',
    'link_title' => 'Videos',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-44',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-suckerfish-resources:node/5995
  $menu_links['menu-suckerfish-resources:node/5995'] = array(
    'menu_name' => 'menu-suckerfish-resources',
    'link_path' => 'node/5995',
    'router_path' => 'node/%',
    'link_title' => 'Medical Terminology',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-suckerfish-resources:node/6167
  $menu_links['menu-suckerfish-resources:node/6167'] = array(
    'menu_name' => 'menu-suckerfish-resources',
    'link_path' => 'node/6167',
    'router_path' => 'node/%',
    'link_title' => '2011 National Users Conference',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-suckerfish-resources:node/778
  $menu_links['menu-suckerfish-resources:node/778'] = array(
    'menu_name' => 'menu-suckerfish-resources',
    'link_path' => 'node/778',
    'router_path' => 'node/%',
    'link_title' => 'Pediatrics',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-35',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-suckerfish-resources:show_all_attributes_roles_pp
  $menu_links['menu-suckerfish-resources:show_all_attributes_roles_pp'] = array(
    'menu_name' => 'menu-suckerfish-resources',
    'link_path' => 'show_all_attributes_roles_pp',
    'router_path' => 'show_all_attributes_roles_pp',
    'link_title' => 'Security Attributes',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-suckerfish-resources:tracker
  $menu_links['menu-suckerfish-resources:tracker'] = array(
    'menu_name' => 'menu-suckerfish-resources',
    'link_path' => 'tracker',
    'router_path' => 'tracker',
    'link_title' => 'Recent Posts',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-36',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-suckerfish-training:<front>
  $menu_links['menu-suckerfish-training:<front>'] = array(
    'menu_name' => 'menu-suckerfish-training',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Training',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-50',
  );
  // Exported menu link: menu-suckerfish-training:node/1285
  $menu_links['menu-suckerfish-training:node/1285'] = array(
    'menu_name' => 'menu-suckerfish-training',
    'link_path' => 'node/1285',
    'router_path' => 'node/%',
    'link_title' => 'Prep to go Onsite',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-suckerfish-training:node/1306
  $menu_links['menu-suckerfish-training:node/1306'] = array(
    'menu_name' => 'menu-suckerfish-training',
    'link_path' => 'node/1306',
    'router_path' => 'node/%',
    'link_title' => 'Quarterly Meetings',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-suckerfish-training:node/1395
  $menu_links['menu-suckerfish-training:node/1395'] = array(
    'menu_name' => 'menu-suckerfish-training',
    'link_path' => 'node/1395',
    'router_path' => 'node/%',
    'link_title' => 'Submitting Checklists',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-45',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-suckerfish-training:node/1415
  $menu_links['menu-suckerfish-training:node/1415'] = array(
    'menu_name' => 'menu-suckerfish-training',
    'link_path' => 'node/1415',
    'router_path' => 'node/%',
    'link_title' => 'Training Documents',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-suckerfish-training:node/5992
  $menu_links['menu-suckerfish-training:node/5992'] = array(
    'menu_name' => 'menu-suckerfish-training',
    'link_path' => 'node/5992',
    'router_path' => 'node/%',
    'link_title' => 'Trainers Pictures',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-44',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-suckerfish-training:node/7690
  $menu_links['menu-suckerfish-training:node/7690'] = array(
    'menu_name' => 'menu-suckerfish-training',
    'link_path' => 'node/7690',
    'router_path' => 'node/%',
    'link_title' => 'Job Postings',
    'options' => array(
      'attributes' => array(
        'title' => 'Internal Job Postings requiring training experience',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '0',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-suckerfish-training:taxonomy/term/129
  $menu_links['menu-suckerfish-training:taxonomy/term/129'] = array(
    'menu_name' => 'menu-suckerfish-training',
    'link_path' => 'taxonomy/term/129',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Training Dept News',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-temporarymenu:<front>
  $menu_links['menu-temporarymenu:<front>'] = array(
    'menu_name' => 'menu-temporarymenu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Futures',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '48',
  );
  // Exported menu link: menu-trainersmenu:blog/21918
  $menu_links['menu-trainersmenu:blog/21918'] = array(
    'menu_name' => 'menu-trainersmenu',
    'link_path' => 'blog/21918',
    'router_path' => 'blog/%',
    'link_title' => 'HIPAA HITECH Blog',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-trainersmenu:devices/primary
  $menu_links['menu-trainersmenu:devices/primary'] = array(
    'menu_name' => 'menu-trainersmenu',
    'link_path' => 'devices/primary',
    'router_path' => 'devices/primary',
    'link_title' => 'Devices',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-trainersmenu:forum
  $menu_links['menu-trainersmenu:forum'] = array(
    'menu_name' => 'menu-trainersmenu',
    'link_path' => 'forum',
    'router_path' => 'forum',
    'link_title' => 'Forum',
    'options' => array(
      'attributes' => array(
        'title' => 'eKB Forum',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: menu-trainersmenu:forum/207
  $menu_links['menu-trainersmenu:forum/207'] = array(
    'menu_name' => 'menu-trainersmenu',
    'link_path' => 'forum/207',
    'router_path' => 'forum',
    'link_title' => 'MU Forum',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-trainersmenu:http://ecwknowledgebase.com/ehx
  $menu_links['menu-trainersmenu:http://ecwknowledgebase.com/ehx'] = array(
    'menu_name' => 'menu-trainersmenu',
    'link_path' => 'http://ecwknowledgebase.com/ehx',
    'router_path' => '',
    'link_title' => 'eEHX',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-39',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-trainersmenu:http://ecwknowledgebase.com/logs
  $menu_links['menu-trainersmenu:http://ecwknowledgebase.com/logs'] = array(
    'menu_name' => 'menu-trainersmenu',
    'link_path' => 'http://ecwknowledgebase.com/logs',
    'router_path' => '',
    'link_title' => 'Logs',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-trainersmenu:http://ecwknowledgebase.com/node/8
  $menu_links['menu-trainersmenu:http://ecwknowledgebase.com/node/8'] = array(
    'menu_name' => 'menu-trainersmenu',
    'link_path' => 'http://ecwknowledgebase.com/node/8',
    'router_path' => '',
    'link_title' => 'Immunization Registry',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-43',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-trainersmenu:http://helpdesk/node/270
  $menu_links['menu-trainersmenu:http://helpdesk/node/270'] = array(
    'menu_name' => 'menu-trainersmenu',
    'link_path' => 'http://helpdesk/node/270',
    'router_path' => '',
    'link_title' => 'Incident Report Form  (Internal Only)',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-trainersmenu:http://www.ecwknowledgebase.com/training/
  $menu_links['menu-trainersmenu:http://www.ecwknowledgebase.com/training/'] = array(
    'menu_name' => 'menu-trainersmenu',
    'link_path' => 'http://www.ecwknowledgebase.com/training/',
    'router_path' => '',
    'link_title' => 'eCW University',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-trainersmenu:logout
  $menu_links['menu-trainersmenu:logout'] = array(
    'menu_name' => 'menu-trainersmenu',
    'link_path' => 'logout',
    'router_path' => 'logout',
    'link_title' => 'Log out',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-39',
  );
  // Exported menu link: menu-trainersmenu:node/11
  $menu_links['menu-trainersmenu:node/11'] = array(
    'menu_name' => 'menu-trainersmenu',
    'link_path' => 'node/11',
    'router_path' => 'node/%',
    'link_title' => 'Vision Examination',
    'options' => array(
      'attributes' => array(
        'title' => 'Vision Examination',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-45',
    'parent_path' => 'viewstableupdate',
  );
  // Exported menu link: menu-trainersmenu:node/1285
  $menu_links['menu-trainersmenu:node/1285'] = array(
    'menu_name' => 'menu-trainersmenu',
    'link_path' => 'node/1285',
    'router_path' => 'node/%',
    'link_title' => 'Prep to go Onsite',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-49',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-trainersmenu:node/13
  $menu_links['menu-trainersmenu:node/13'] = array(
    'menu_name' => 'menu-trainersmenu',
    'link_path' => 'node/13',
    'router_path' => 'node/%',
    'link_title' => 'Current Guides/Manuals',
    'options' => array(
      'attributes' => array(
        'title' => 'These are all the current published Manuals and Release Notes from the Documentation Department.',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-50',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-trainersmenu:node/1306
  $menu_links['menu-trainersmenu:node/1306'] = array(
    'menu_name' => 'menu-trainersmenu',
    'link_path' => 'node/1306',
    'router_path' => 'node/%',
    'link_title' => 'Quarterly Meetings',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-trainersmenu:node/1343
  $menu_links['menu-trainersmenu:node/1343'] = array(
    'menu_name' => 'menu-trainersmenu',
    'link_path' => 'node/1343',
    'router_path' => 'node/%',
    'link_title' => 'Authentication Settings',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-trainersmenu:node/1351
  $menu_links['menu-trainersmenu:node/1351'] = array(
    'menu_name' => 'menu-trainersmenu',
    'link_path' => 'node/1351',
    'router_path' => 'node/%',
    'link_title' => 'My Favorites',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-trainersmenu:node/1352
  $menu_links['menu-trainersmenu:node/1352'] = array(
    'menu_name' => 'menu-trainersmenu',
    'link_path' => 'node/1352',
    'router_path' => 'node/%',
    'link_title' => 'Local Settings',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-trainersmenu:node/1353
  $menu_links['menu-trainersmenu:node/1353'] = array(
    'menu_name' => 'menu-trainersmenu',
    'link_path' => 'node/1353',
    'router_path' => 'node/%',
    'link_title' => 'Front Office Tab',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-trainersmenu:node/1354
  $menu_links['menu-trainersmenu:node/1354'] = array(
    'menu_name' => 'menu-trainersmenu',
    'link_path' => 'node/1354',
    'router_path' => 'node/%',
    'link_title' => 'Mid Office Tab',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-trainersmenu:node/1355
  $menu_links['menu-trainersmenu:node/1355'] = array(
    'menu_name' => 'menu-trainersmenu',
    'link_path' => 'node/1355',
    'router_path' => 'node/%',
    'link_title' => 'Interface Tab',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-trainersmenu:node/1357
  $menu_links['menu-trainersmenu:node/1357'] = array(
    'menu_name' => 'menu-trainersmenu',
    'link_path' => 'node/1357',
    'router_path' => 'node/%',
    'link_title' => 'General Tab',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-trainersmenu:node/1358
  $menu_links['menu-trainersmenu:node/1358'] = array(
    'menu_name' => 'menu-trainersmenu',
    'link_path' => 'node/1358',
    'router_path' => 'node/%',
    'link_title' => 'Labs Tab',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-trainersmenu:node/1359
  $menu_links['menu-trainersmenu:node/1359'] = array(
    'menu_name' => 'menu-trainersmenu',
    'link_path' => 'node/1359',
    'router_path' => 'node/%',
    'link_title' => 'Styles Tab',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-trainersmenu:node/1360
  $menu_links['menu-trainersmenu:node/1360'] = array(
    'menu_name' => 'menu-trainersmenu',
    'link_path' => 'node/1360',
    'router_path' => 'node/%',
    'link_title' => 'Performance Tab',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-44',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-trainersmenu:node/1361
  $menu_links['menu-trainersmenu:node/1361'] = array(
    'menu_name' => 'menu-trainersmenu',
    'link_path' => 'node/1361',
    'router_path' => 'node/%',
    'link_title' => 'Portal Tab',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-43',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-trainersmenu:node/1362
  $menu_links['menu-trainersmenu:node/1362'] = array(
    'menu_name' => 'menu-trainersmenu',
    'link_path' => 'node/1362',
    'router_path' => 'node/%',
    'link_title' => 'Scanning/Printing Tab',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-41',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-trainersmenu:node/1363
  $menu_links['menu-trainersmenu:node/1363'] = array(
    'menu_name' => 'menu-trainersmenu',
    'link_path' => 'node/1363',
    'router_path' => 'node/%',
    'link_title' => 'Options Tab',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-42',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-trainersmenu:node/1395
  $menu_links['menu-trainersmenu:node/1395'] = array(
    'menu_name' => 'menu-trainersmenu',
    'link_path' => 'node/1395',
    'router_path' => 'node/%',
    'link_title' => 'Submitting Checklists',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-trainersmenu:node/1415
  $menu_links['menu-trainersmenu:node/1415'] = array(
    'menu_name' => 'menu-trainersmenu',
    'link_path' => 'node/1415',
    'router_path' => 'node/%',
    'link_title' => 'Training Documents',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-trainersmenu:node/163
  $menu_links['menu-trainersmenu:node/163'] = array(
    'menu_name' => 'menu-trainersmenu',
    'link_path' => 'node/163',
    'router_path' => 'node/%',
    'link_title' => 'Assigning and Reviewing Progress Notes',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-trainersmenu:node/1643
  $menu_links['menu-trainersmenu:node/1643'] = array(
    'menu_name' => 'menu-trainersmenu',
    'link_path' => 'node/1643',
    'router_path' => 'node/%',
    'link_title' => 'Rapid Deployment Training',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-35',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-trainersmenu:node/1688
  $menu_links['menu-trainersmenu:node/1688'] = array(
    'menu_name' => 'menu-trainersmenu',
    'link_path' => 'node/1688',
    'router_path' => 'node/%',
    'link_title' => 'EMR System Build Agenda and Content',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-36',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-trainersmenu:node/1691
  $menu_links['menu-trainersmenu:node/1691'] = array(
    'menu_name' => 'menu-trainersmenu',
    'link_path' => 'node/1691',
    'router_path' => 'node/%',
    'link_title' => 'Interface Team',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-trainersmenu:node/1693
  $menu_links['menu-trainersmenu:node/1693'] = array(
    'menu_name' => 'menu-trainersmenu',
    'link_path' => 'node/1693',
    'router_path' => 'node/%',
    'link_title' => 'Overview of eCW Software',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-trainersmenu:node/1767
  $menu_links['menu-trainersmenu:node/1767'] = array(
    'menu_name' => 'menu-trainersmenu',
    'link_path' => 'node/1767',
    'router_path' => 'node/%',
    'link_title' => 'HIPAA HITECH Overview',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-trainersmenu:node/1768
  $menu_links['menu-trainersmenu:node/1768'] = array(
    'menu_name' => 'menu-trainersmenu',
    'link_path' => 'node/1768',
    'router_path' => 'node/%',
    'link_title' => 'HIPAA HITECH Documents',
    'options' => array(
      'attributes' => array(
        'title' => 'A',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-trainersmenu:node/1788
  $menu_links['menu-trainersmenu:node/1788'] = array(
    'menu_name' => 'menu-trainersmenu',
    'link_path' => 'node/1788',
    'router_path' => 'node/%',
    'link_title' => 'Future Specialties',
    'options' => array(
      'attributes' => array(
        'title' => 'Future Specialties in PDF or Word Formats',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-31',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-trainersmenu:node/2404
  $menu_links['menu-trainersmenu:node/2404'] = array(
    'menu_name' => 'menu-trainersmenu',
    'link_path' => 'node/2404',
    'router_path' => 'node/%',
    'link_title' => 'Partners & Alliances',
    'options' => array(
      'attributes' => array(
        'title' => 'Partners & Alliances',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-trainersmenu:node/2761
  $menu_links['menu-trainersmenu:node/2761'] = array(
    'menu_name' => 'menu-trainersmenu',
    'link_path' => 'node/2761',
    'router_path' => 'node/%',
    'link_title' => 'Things that Lock-Unlock, etc.',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-38',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-trainersmenu:node/3222
  $menu_links['menu-trainersmenu:node/3222'] = array(
    'menu_name' => 'menu-trainersmenu',
    'link_path' => 'node/3222',
    'router_path' => 'node/%',
    'link_title' => 'eCW Remote Services (eRS)',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-36',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-trainersmenu:node/33
  $menu_links['menu-trainersmenu:node/33'] = array(
    'menu_name' => 'menu-trainersmenu',
    'link_path' => 'node/33',
    'router_path' => 'node/%',
    'link_title' => 'Front Office',
    'options' => array(
      'attributes' => array(
        'title' => 'Front Office',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-49',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-trainersmenu:node/34
  $menu_links['menu-trainersmenu:node/34'] = array(
    'menu_name' => 'menu-trainersmenu',
    'link_path' => 'node/34',
    'router_path' => 'node/%',
    'link_title' => 'Electronic Medical Record (EMR)',
    'options' => array(
      'attributes' => array(
        'title' => 'Electronic Medical Record (EMR)',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-48',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-trainersmenu:node/42
  $menu_links['menu-trainersmenu:node/42'] = array(
    'menu_name' => 'menu-trainersmenu',
    'link_path' => 'node/42',
    'router_path' => 'node/%',
    'link_title' => 'Videos',
    'options' => array(
      'attributes' => array(
        'title' => 'Videos',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-46',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-trainersmenu:node/7094
  $menu_links['menu-trainersmenu:node/7094'] = array(
    'menu_name' => 'menu-trainersmenu',
    'link_path' => 'node/7094',
    'router_path' => 'node/%',
    'link_title' => 'Neurology',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-trainersmenu:node/778
  $menu_links['menu-trainersmenu:node/778'] = array(
    'menu_name' => 'menu-trainersmenu',
    'link_path' => 'node/778',
    'router_path' => 'node/%',
    'link_title' => 'Pediatrics',
    'options' => array(
      'attributes' => array(
        'title' => 'Pediatrics  (Draft Version)',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-33',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-trainersmenu:taxonomy/term/129
  $menu_links['menu-trainersmenu:taxonomy/term/129'] = array(
    'menu_name' => 'menu-trainersmenu',
    'link_path' => 'taxonomy/term/129',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Training Dept News',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-50',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-trainersmenu:tracker
  $menu_links['menu-trainersmenu:tracker'] = array(
    'menu_name' => 'menu-trainersmenu',
    'link_path' => 'tracker',
    'router_path' => 'tracker',
    'link_title' => 'Recent posts',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-37',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-trainersmenu:user/%
  $menu_links['menu-trainersmenu:user/%'] = array(
    'menu_name' => 'menu-trainersmenu',
    'link_path' => 'user/%',
    'router_path' => 'user/%',
    'link_title' => 'My account',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-41',
  );
  // Exported menu link: menu-trainersmenu:viewstableupdate
  $menu_links['menu-trainersmenu:viewstableupdate'] = array(
    'menu_name' => 'menu-trainersmenu',
    'link_path' => 'viewstableupdate',
    'router_path' => 'viewstableupdate',
    'link_title' => 'New Features 8.0.100',
    'options' => array(
      'attributes' => array(
        'title' => 'eClinicalWorks is current installing version 8.0.47. Plans are to release a new version shortly. This is a series of training modules to teach the new features and enhancements that will be included. ',
      ),
    ),
    'module' => 'system',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-40',
  );
  // Exported menu link: menu-training-help:node/1093
  $menu_links['menu-training-help:node/1093'] = array(
    'menu_name' => 'menu-training-help',
    'link_path' => 'node/1093',
    'router_path' => 'node/%',
    'link_title' => 'Registering Providers with Surescripts',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
  );
  // Exported menu link: menu-training-help:node/2406
  $menu_links['menu-training-help:node/2406'] = array(
    'menu_name' => 'menu-training-help',
    'link_path' => 'node/2406',
    'router_path' => 'node/%',
    'link_title' => 'Common Training Issues with Solutions',
    'options' => array(
      'attributes' => array(
        'title' => 'Try and think of a better name for this',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Exported menu link: menu-training-help:node/2447
  $menu_links['menu-training-help:node/2447'] = array(
    'menu_name' => 'menu-training-help',
    'link_path' => 'node/2447',
    'router_path' => 'node/%',
    'link_title' => 'Documents Created by Trainers, for Trainers',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: menu-training-help:node/2605
  $menu_links['menu-training-help:node/2605'] = array(
    'menu_name' => 'menu-training-help',
    'link_path' => 'node/2605',
    'router_path' => 'node/%',
    'link_title' => 'Common Billing Live Chat Questions',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: menu-training-help:node/2692
  $menu_links['menu-training-help:node/2692'] = array(
    'menu_name' => 'menu-training-help',
    'link_path' => 'node/2692',
    'router_path' => 'node/%',
    'link_title' => 'Common Front Office Live Chat Questions',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: menu-training-help:node/2693
  $menu_links['menu-training-help:node/2693'] = array(
    'menu_name' => 'menu-training-help',
    'link_path' => 'node/2693',
    'router_path' => 'node/%',
    'link_title' => 'Common EMR Live Chat Questions',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: navigation:admin
  $menu_links['navigation:admin'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'admin',
    'router_path' => 'admin',
    'link_title' => 'Administer',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '9',
  );
  // Exported menu link: navigation:admin/content
  $menu_links['navigation:admin/content'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'admin/content',
    'router_path' => 'admin/content',
    'link_title' => 'Content management',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage your site\'s content.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-10',
    'parent_path' => 'admin',
  );
  // Exported menu link: navigation:admin/content/backup_migrate
  $menu_links['navigation:admin/content/backup_migrate'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'admin/content/backup_migrate',
    'router_path' => 'admin/content/backup_migrate',
    'link_title' => 'Backup and Migrate',
    'options' => array(
      'attributes' => array(
        'title' => 'Backup/restore your database or migrate data to or from another Drupal site.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/content',
  );
  // Exported menu link: navigation:blog
  $menu_links['navigation:blog'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'blog',
    'router_path' => 'blog',
    'link_title' => 'Blogs',
    'options' => array(),
    'module' => 'system',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: navigation:blog/%
  $menu_links['navigation:blog/%'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'blog/%',
    'router_path' => 'blog/%',
    'link_title' => 'My blog',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'blog',
  );
  // Exported menu link: navigation:ctools_ajax_sample
  $menu_links['navigation:ctools_ajax_sample'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'ctools_ajax_sample',
    'router_path' => 'ctools_ajax_sample',
    'link_title' => 'Chaos Tools AJAX Demo',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: navigation:forum
  $menu_links['navigation:forum'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'forum',
    'router_path' => 'forum',
    'link_title' => 'Forums',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: navigation:search
  $menu_links['navigation:search'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'search',
    'router_path' => 'search',
    'link_title' => 'Search',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-4',
  );
  // Exported menu link: navigation:top-posters
  $menu_links['navigation:top-posters'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'top-posters',
    'router_path' => 'top-posters',
    'link_title' => 'Top posters',
    'options' => array(
      'attributes' => array(
        'title' => 'Site users ordered by post count',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: navigation:user/watcher
  $menu_links['navigation:user/watcher'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'user/watcher',
    'router_path' => 'user/watcher',
    'link_title' => 'My Watched Posts',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: primary-links:bookmarks
  $menu_links['primary-links:bookmarks'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'bookmarks',
    'router_path' => 'bookmarks',
    'link_title' => 'My bookmarks',
    'options' => array(),
    'module' => 'system',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: primary-links:findrecentpagesmodded
  $menu_links['primary-links:findrecentpagesmodded'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'findrecentpagesmodded',
    'router_path' => 'findrecentpagesmodded',
    'link_title' => 'findrecentpagesmodded',
    'options' => array(),
    'module' => 'system',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: primary-links:link-content-type
  $menu_links['primary-links:link-content-type'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'link-content-type',
    'router_path' => 'link-content-type',
    'link_title' => 'Link Content Type content',
    'options' => array(),
    'module' => 'system',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('2011 National Users Conference');
  t('2012 Sexual Harassment Course/ Quiz');
  t('5010 Form');
  t('APL and Daysheet Reports');
  t('About Claims');
  t('About Patient Dashboard');
  t('About Payments');
  t('About Progress Notes');
  t('About Treatment Window');
  t('Accountable Care Org (ACO)');
  t('Accounts Lookup');
  t('Accounts Receivable Management');
  t('Actions');
  t('Additional Content');
  t('Adjust IE Print Margins');
  t('Admin Content');
  t('Administer');
  t('Ahlers Family Planning');
  t('Alerts');
  t('All Primary Pages - Alphabetically');
  t('All Primary Pages - Folding');
  t('All Security Attributes by Role');
  t('All Segments, By Week');
  t('Allergies/Intolerance');
  t('Anesthesiology');
  t('Anti-Coagulant Flowsheet');
  t('Appt Reminder Systems');
  t('Assessment');
  t('Assigning and Reviewing Progress Notes');
  t('Assigning and Reviewing Progress Notes - Details');
  t('Attorneys');
  t('Authentication Settings');
  t('Backup and Migrate');
  t('Billing - Progress Note');
  t('Billing Alerts');
  t('Blog entry');
  t('Blogs');
  t('Bubble Sheets');
  t('CPSP');
  t('CPT Codes');
  t('Capitation');
  t('Cardiology');
  t('Cardiology WorkFlow');
  t('Care Plan');
  t('Case - Case Manager');
  t('Chaos Tools AJAX Demo');
  t('Chart Panel');
  t('Check In - Check Out');
  t('Chief Complaint');
  t('Chronic Care');
  t('Claims Batch Management');
  t('Clearinghouses');
  t('Code Correct');
  t('Collection Management');
  t('Common Billing Live Chat Questions');
  t('Common EMR Live Chat Questions');
  t('Common Front Office Live Chat Questions');
  t('Common Training Issues with Solutions');
  t('Contact Center');
  t('Content management');
  t('Create content');
  t('Create/Manage Claims');
  t('Current Guides/ Manuals');
  t('Current Guides/Manuals');
  t('Current Medication');
  t('Data Export - Maine Virginia Pennsylvania North Carolina');
  t('Dental');
  t('Department');
  t('Dermatology');
  t('Development Video');
  t('Development Videos');
  t('Devices');
  t('Diagnostic Imaging');
  t('Documents Created by Trainers, for Trainers');
  t('Dosage Calculator');
  t('Dragon Naturally Speaking');
  t('EMR System Build Agenda and Content');
  t('EMR System Setup Call Agenda');
  t('ENT Ear, Nose and Throat');
  t('ERA');
  t('Electronic Medical Record (EMR)');
  t('Employers');
  t('Enterprise Directory');
  t('Examination');
  t('Export to Outlook');
  t('FQHC');
  t('Facility');
  t('Family History');
  t('Family Practice');
  t('Fax Inbox');
  t('Fax Outbox');
  t('Fee Schedules');
  t('Flowsheets');
  t('Forum');
  t('Forum topic');
  t('Forums');
  t('Front Office');
  t('Front Office Tab');
  t('Future Specialities');
  t('Future Specialties');
  t('Futures');
  t('General Surgery');
  t('General Tab');
  t('Global Scheduling');
  t('Growth Chart');
  t('HIPAA Annual Training Video');
  t('HIPAA Blog');
  t('HIPAA Certification Exam (2011)');
  t('HIPAA Certification Quiz');
  t('HIPAA Documents');
  t('HIPAA HITECH Blog');
  t('HIPAA HITECH Documents');
  t('HIPAA HITECH Overview');
  t('HIPAA Privacy Team');
  t('HPI');
  t('Hard Close');
  t('Health and Wellness');
  t('Hospitalization');
  t('ICD Codes');
  t('Immunization Registry');
  t('Immunizations/Injections');
  t('Incident Report Form  (Internal Only)');
  t('Incoming Referrals');
  t('Insurance');
  t('Insurance Payments');
  t('Intellidose');
  t('Interface Dashboard');
  t('Interface Tab');
  t('Interface Team');
  t('Interface Team (Private)');
  t('Internal');
  t('Internal Documentation');
  t('Item Key');
  t('Job Postings');
  t('Kiosk');
  t('Labels');
  t('Labs');
  t('Labs Tab');
  t('Letters');
  t('Link Content Type');
  t('Link Content Type content');
  t('Local Settings');
  t('Locking - Unlocking Progress Notes');
  t('Log out');
  t('Logs');
  t('Lookup Encounters');
  t('MU Forum');
  t('MU at eClinicalWorks');
  t('Macros');
  t('Meaningful Use');
  t('Meaningful Use Webinar');
  t('Medical History');
  t('Medical Summary');
  t('Medical Terminology');
  t('Medication Summary');
  t('Messages');
  t('Mid Office Tab');
  t('Misc Configuration Options');
  t('Multiple choice question');
  t('My Account');
  t('My Favorites');
  t('My Settings');
  t('My Watched Posts');
  t('My account');
  t('My blog');
  t('My bookmarks');
  t('Nephrology');
  t('Neurology');
  t('New Features 8.0.100');
  t('Node export: import');
  t('OB and GYN History');
  t('OSHPD Reporting');
  t('Obstetrics/Gynecology');
  t('Occupational Medicine Billing');
  t('Office Visits');
  t('Oncology');
  t('Opthalmology and Optometry');
  t('Options Tab');
  t('Order Sets');
  t('Orthopedics');
  t('Out of Office Visits');
  t('Outgoing Referrals');
  t('Overview - WorkFlows');
  t('Overview of eCW Software');
  t('P.S.A.C.');
  t('P2P');
  t('PCMH');
  t('PQRS (Formerly PQRI)');
  t('Page');
  t('Pain Management');
  t('Panel');
  t('Partner Page');
  t('Partners & Alliances');
  t('Partners and Alliances');
  t('Past Results');
  t('Patient Appointments');
  t('Patient Documents');
  t('Patient Education');
  t('Patient Hub');
  t('Patient Information');
  t('Patient Insurance Eligibility');
  t('Patient Lookup');
  t('Patient Payments');
  t('Patient Portal');
  t('Patient Recalls');
  t('Payment Batches');
  t('Payments');
  t('Pediatrics');
  t('Performance Tab');
  t('Pharmacy');
  t('Physical Examination');
  t('Physician Reference');
  t('Podiatry');
  t('Portal Tab');
  t('Prep to go Onsite');
  t('Preventative Medicine');
  t('Primary Page');
  t('Printing/Faxing Progress Notes');
  t('Problem List');
  t('Procedures (Progress Note)');
  t('Procedures (Treatment)');
  t('Process Claims');
  t('Product Activation');
  t('Progress Note Customization');
  t('Progress Note Template');
  t('Provider Setup');
  t('Provider/Resource Schedules');
  t('Quality Measures and CDSS');
  t('Quarterly Meetings');
  t('Quiz');
  t('Quizzes');
  t('ROS');
  t('Rapid Deployment Training');
  t('Recent Posts');
  t('Recent posts');
  t('Referring Physicians');
  t('Refunds');
  t('Registering Providers with Surescripts');
  t('Registry');
  t('Resource Schedule');
  t('Resource Setup');
  t('Resources');
  t('Rheumatology');
  t('Rule Engine');
  t('Rx');
  t('Ryan White HIV/AIDS Program');
  t('Scanning/Printing Tab');
  t('Scheduled Jobs');
  t('Search');
  t('Security');
  t('Security Attributes');
  t('Sexual Harassment Quiz');
  t('Site Orientation');
  t('Smart Forms');
  t('Social History');
  t('Specialty Forms');
  t('Staff Setup');
  t('Story');
  t('Structured Data');
  t('Styles Tab');
  t('Submit Claims');
  t('Submitting Checklists');
  t('Super Bill - Details');
  t('Surgical History');
  t('Telephone/Web Encounters');
  t('Things that Lock-Unlock, etc.');
  t('To Be Reviewed');
  t('Top posters');
  t('Trainers Pictures');
  t('Training');
  t('Training Dept News');
  t('Training Documents');
  t('Transcriptions');
  t('Transworld');
  t('True/false question');
  t('UDS Reports');
  t('UpToDate Setup');
  t('Using IPE - Encounters');
  t('Using the Claims Window');
  t('Video');
  t('Video Segments by Feature');
  t('Videos');
  t('Vision Examination');
  t('Visit Rules');
  t('Visit Types');
  t('Vitals');
  t('Webform');
  t('e-Prescriptions');
  t('eBO');
  t('eCW Film Club');
  t('eCW Remote Services (eRS)');
  t('eCW University');
  t('eCliniForms');
  t('eCliniSense');
  t('eClinicalMessenger');
  t('eClinicalMobile');
  t('eClinicalWorks Remote Services (eRS)');
  t('eEHX');
  t('eMail to Administrator');
  t('ePayments');
  t('findrecentpagesmodded');


  return $menu_links;
}
