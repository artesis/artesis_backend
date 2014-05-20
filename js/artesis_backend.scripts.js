/**
 * @file
 *
 * Backend functionality.
 */
(function ($) {

  // Ajax responder for updating login box.
  Drupal.ajax.prototype.commands['artesis_backend_update_login'] = function (ajax, response, status) {
    $('.block-ding-username h2').html(Drupal.t("Welcome") + '<span>' + $('.block-ding-username #ding-user-name .content').text() + '</span>');
    return;
  };

  // Ajax responder for serch form update.
  Drupal.ajax.prototype.commands['artesis_backend_update_search'] = function (ajax, response, status) {
    var search_string = document.location.pathname.split('/');
    $("[name='search_block_form']").val(decodeURIComponent(search_string[3]));
    $("[id^='search-block-form']").attr('action', document.location.pathname);
  }

})(jQuery);
