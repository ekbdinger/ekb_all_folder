<?php
// $Id: advf-forum-submitted.tpl.php,v 1.9 2008/06/06 02:57:04 michellec Exp $

/**
 * @file advf-forum-submitted.tpl.php
 * Default theme implementation to format a simple string indicated when and
 * by whom a topic was submitted.
 *
 * Available variables:
 *
 * - $topic_link: On the forum overview page, this is the title of the last
 *   updated topic.
 * - $topic_link: On the forum overview page, this is the title of the last
 *   comment.
 * - $author: The author of the post.
 * - $time: How long ago the post was created.
 * - $topic: An object with the raw data of the thread. Unsafe, be sure
 *   to clean this data before printing.
 *
 * @see template_preprocess_forum_submitted()
 * @see advanced_forum_preprocess_forum_submitted()
 * @see theme_forum_submitted()
 */
?>

<?php if ($time): ?>
  <?php if ($reply_link): ?>
    <?php print t(
      '!rtitle<br />@time ago<br />by !author<br /> in !ttitle', array(
        '!rtitle' => $reply_link,
        '@time' => $time,
        '!author' => $author,
        '!ttitle' => $topic_link,
      )); ?>   
  <?php elseif ($topic_link): ?>
    <?php print t(
      '!title<br />@time ago<br />by !author', array(
        '!title' => $topic_link,
        '@time' => $time,
        '!author' => $author,
      )); ?>
  <?php else: ?>
    <?php print t(
      '@time ago<br />by !author', array(
        '@time' => $time,
        '!author' => $author,
       )); ?>  
  <?php endif; ?>      
<?php else: ?>
  <?php print t('n/a'); ?>
<?php endif; ?>
