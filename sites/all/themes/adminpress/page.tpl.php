<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml"  dir="ltr" lang="en-US">
  <head>
    <?php print $head ?>
    <?php print $styles ?>
    <?php print $scripts ?>
    <title><?php print $head_title ?></title>
  </head>
  <body class="wp-admin js  edit-tags-php">
    <div id="wpwrap">
      <div id="wpcontent">
        <div id="wphead">

          <img id="header-logo" src="http://wordpress.vm/wp-includes/images/blank.gif" alt="" width="32" height="32" />
          <h1 id="site-heading" >
            <a href="http://wordpress.vm/" title="Visit Site">
              <span id="site-title">Worple</span>
            </a>
            <a id="privacy-on-link" href="options-privacy.php" title="Your site is asking search engines not to index its content">Search Engines Blocked</a>

          </h1>


          <div id="wphead-info">
            <div id="user_info">
              <p>Howdy, <a href="profile.php" title="Edit your profile">admin</a> | <a href="http://wordpress.vm/wp-login.php?action=logout&amp;_wpnonce=cb404b9cc0" title="Log Out">Log Out</a></p>
            </div>

            <div id="favorite-actions"><div id="favorite-first"><a href="post-new.php">New Post</a></div><div id="favorite-toggle"><br /></div><div id="favorite-inside"><div class='favorite-action'><a href='edit.php?post_status=draft'>Drafts</a></div>
                <div class='favorite-action'><a href='post-new.php?post_type=page'>New Page</a></div>

                <div class='favorite-action'><a href='media-new.php'>Upload</a></div>
                <div class='favorite-action'><a href='edit-comments.php'>Comments</a></div>
              </div></div>
          </div>
        </div>

        <div id="wpbody">
          <?php if (isset($adminmenu)) : ?>
          <div id="left_sidebar">
          <?php print $adminmenu; ?>
          </div>
          <?php endif; ?>
          <div id="wpbody-content">
            <div id="screen-meta">
              <div id="screen-options-wrap" class="hidden">
                <form id="adv-settings" action="" method="post">
                  <h5>Show on screen</h5>
                  <div class="metabox-prefs">
                    <label for="description-hide"><input class="hide-column-tog" name="description-hide" type="checkbox" id="description-hide" value="description" checked="checked" />Description</label>
                    <label for="slug-hide"><input class="hide-column-tog" name="slug-hide" type="checkbox" id="slug-hide" value="slug" checked="checked" />Slug</label>

                    <label for="posts-hide"><input class="hide-column-tog" name="posts-hide" type="checkbox" id="posts-hide" value="posts" checked="checked" />Posts</label>
                    <br class="clear" />
                  </div>
                  <h5>Show on screen</h5>
                  <div class='screen-options'>
                    <input type='text' class='screen-per-page' name='wp_screen_options[value]' id='edit_category_per_page' maxlength='3' value='20' /> <label for='edit_category_per_page'>Categories</label>
                    <input type='submit' class='button' value='Apply' /><input type='hidden' name='wp_screen_options[option]' value='edit_category_per_page' /></div>
                  <div><input type="hidden" id="screenoptionnonce" name="screenoptionnonce" value="1be083bde3" /></div>
                </form>

              </div>

              <div id="contextual-help-wrap" class="hidden">
                <div class="metabox-prefs"><p>You can use categories to define sections of your site and group related posts. The default category is &#8220;Uncategorized&#8221; until you change it in your <a href="options-writing.php">writing settings</a>.</p><p>What&#8217;s the difference between categories and tags? Normally, tags are ad-hoc keywords that identify important information in your post (names, subjects, etc) that may or may not recur in other posts, while categories are pre-determined sections. If you think of your site like a book, the categories are like the Table of Contents and the tags are like the terms in the index.</p><p>When adding a new category on this screen, you&#8217;ll fill in the following fields:</p><ul><li><strong>Name</strong> - The name is how it appears on your site.</li><li><strong>Slug</strong> - The &#8220;slug&#8221; is the URL-friendly version of the name. It is usually all lowercase and contains only letters, numbers, and hyphens.</li><li><strong>Parent</strong> - Categories, unlike tags, can have a hierarchy. You might have a Jazz category, and under that have children categories for Bebop and Big Band. Totally optional. To create a subcategory, just choose another category from the Parent dropdown.</li><li><strong>Description</strong> - The description is not prominent by default; however, some themes may display it.</li></ul><p>You can change the display of this screen using the Screen Options tab to set how many items are displayed per screen and to display/hide columns in the table.</p><p><strong>For more information:</strong></p><p><a href="http://codex.wordpress.org/Manage_Categories_SubPanel" target="_blank">Categories Documentation</a></p><p><a href="http://wordpress.org/support/" target="_blank">Support Forums</a></p></div>

              </div>

              <div id="screen-meta-links">
                <div id="contextual-help-link-wrap" class="hide-if-no-js screen-meta-toggle">
                  <a href="#contextual-help" id="contextual-help-link" class="show-settings">Help</a>
                </div>
                <div id="screen-options-link-wrap" class="hide-if-no-js screen-meta-toggle">
                  <a href="#screen-options" id="show-settings-link" class="show-settings">Screen Options</a>
                </div>
              </div>
            </div>

            <div class="wrap nosubsub">
              <div id="icon-edit" class="icon32"><br /></div>

              <?php if (isset($title)) : ?>
              <h2><?php print $title ?></h2>
              <?php endif; ?>

              <div id="ajax-response"></div>

              <form class="search-form" action="" method="get">
                <input type="hidden" name="taxonomy" value="category" />
                <input type="hidden" name="post_type" value="post" />
                <p class="search-box">
                  <label class="screen-reader-text" for="tag-search-input">Search Categories:</label>
                  <input type="text" id="tag-search-input" name="s" value="" />
                  <input type="submit" value="Search Categories" class="button" />
                </p>

              </form>
              <br class="clear" />

              <div id="col-container">

                <div id="col-right">
                  <div class="col-wrap">
                    <?php print $content ?>
                  </div>
                </div><!-- /col-right -->
                <?php if (isset($content_left)) : ?>
                <div id="col-left">
                  <div class="col-wrap">
                    <?php print $content_left ?>
                  </div>
                </div><!-- /col-left -->
                <?php endif; ?>

              </div><!-- /col-container -->
            </div><!-- /wrap -->
            <div class="clear"></div></div><!-- wpbody-content -->
          <div class="clear"></div></div><!-- wpbody -->
        <div class="clear"></div></div><!-- wpcontent -->
    </div><!-- wpwrap -->

    <div id="footer">
      <p id="footer-left" class="alignleft"><span id="footer-thankyou">Thank you for creating with <a href="http://wordpress.org/">WordPress</a>.</span> | <a href="http://codex.wordpress.org/">Documentation</a> | <a href="http://wordpress.org/support/forum/4">Feedback</a></p>

      <p id="footer-upgrade" class="alignright">Version 3.0.1</p>
      <div class="clear"></div>
    </div>


    <?php print $closure ?>

  </body>
</html>
