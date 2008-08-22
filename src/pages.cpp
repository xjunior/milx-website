#include <string>
#include <boost/bind.hpp>
#include "pages.h"

PagesController::PagesController()
{
    registerAction(boost::bind(&PagesController::index, this, _1), "index");
}

Milx::Response* PagesController::index(Milx::Request* req)
{
    Milx::Response* resp = new Milx::Response();
    resp->setContent("<!DOCTYPE html PUBLIC '-//W3C//DTD XHTML 1.0 Strict//EN' 'http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd'>\
<html xmlns='http://www.w3.org/1999/xhtml' xml:lang='cs' lang='cs'>\
  <head>\
    <meta http-equiv='content-type' content='text/html; charset=utf-8' />\
    <meta http-equiv='content-language' content='cs' />\
    <meta name='author' lang='cs' content='David Kohout; http://www.davidkohout.cz' />\
    <meta name='copyright' lang='cs' content='David Kohout; http://www.davidkohout.cz' />\
    <meta name='description' content='...' />\
    <meta name='keywords' content='...' />\
    <meta name='robots' content='all,follow' />\
    <link href='css/screen.css' type='text/css' rel='stylesheet' media='screen,projection' />\
    <title>Redfire &ndash; Free CSS template</title>\
  </head>\
  <body>\
    <div id='layout'>\
      <div id='header'>\
        <h1 id='logo'><a href='http://milxhq.org' title='Milx Web Application Framework'>Milx <span>Web Application</span> Framework</a></h1>\
        <hr class='noscreen' />\
        <div id='navigation'>\
        <ul>\
          <li><a href='#' title='#'>HOME</a></li>\
          <li><a href='#' title='#'>ABOUT US</a></li>\
          <li><a href='#' title='#'>PRODUCTS</a></li>\
          <li><a href='#' title='#'>CONTACT</a></li>\
        </ul>\
        </div>\
        <hr class='noscreen' />\
      </div>\
        <div class='rbroundbox'>\
	    <div class='rbtop'><div></div></div>\
            <div class='rbcontent'>\
                <div class='content'>\
                    <h2>Lorem ipsum</h2>\
                    <p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incidi dunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercita tion ullamco laboris nisi ut aliquip ex ea commodo. </p>\
                    <a href='/' class='light'>More about us</a>\
                </div>\
                <div id='panel-right'><div id='panel-right-inside'>\
                <p><span>21. July 2008</span><br />Lorem ipsum dolor sit amet, consectetur adipisicing elit sed.</p>\
                <p><span>21. July 2008</span><br />Lorem ipsum dolor sit amet, consectetur adipisicing elit sed.</p>\
            </div></div>\
        </div>\
	<div class='rbbot'><div></div></div>\
    </div>\
        <div id='main'>\
        <h2>Lorem ipsum dolor sit amet</h2>");
/*        <p>Lorem ipsum dolor sit amet, <a href='/'>consectetur</a> adipisicing elit, sed do eiusmod tempor incidi dunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercita tion ullamco laboris nisi ut aliquip ex ea commodo. cidi dunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercita tion ullamco laboris nisi ut aliquip ex ea <a href='/'>commodo</a>. Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incidi dunt ut labore et dolore magna aliqua.</p>\
        <h3>LOREM IPSUM DOLOR SIT AMET</h3>\
        <p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incidi dunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercita tion ullamco laboris nisi ut aliquip ex ea commodo. cidi dunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercita tion ullamco laboris nisi ut aliquip ex ea commodo. Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incidi dunt ut labore et dolore magna aliqua.</p>\
        <table>\
          <tr class='table-top'>\
            <td>Sample table</td>\
            <td>Sample table</td>\
            <td>Sample table</td>\
            <td>Sample table</td>\
          </tr>\
          <tr>\
            <td>Lorem ipsum</td>\
            <td>Lorem ipsum</td>\
            <td>Lorem ipsum</td>\
            <td>Lorem ipsum</td>\
          </tr>\
          <tr>\
            <td>Lorem ipsum</td>\
            <td>Lorem ipsum</td>\
            <td>Lorem ipsum</td>\
            <td>Lorem ipsum</td>\
          </tr>\
          <tr>\
            <td>Lorem ipsum</td>\
            <td>Lorem ipsum</td>\
            <td>Lorem ipsum</td>\
            <td>Lorem ipsum</td>\
          </tr>\
          </table>\
          <p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incidi dunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercita tion ullamco laboris nisi ut aliquip ex ea commodo. cidi dunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercita tion ullamco laboris nisi ut aliquip ex ea commodo. Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incidi dunt ut labore et dolore magna aliqua.</p>\
        </div>\
        </div>\
        <div id='footer'>\
        <div id='footer-inside'>\
        <p id='copyright'>&copy; 2008 - <a href='/'>Milx Web Application Framework</a></p>\
        <p id='dont-delete-this'>Design by <a href='http://www.davidkohout.cz'>David Kohout</a> | Our tip: <a href='http://www.goodmood.cz' title='Absinthe, Becherovka, Slivovitz store'>Absinthe Store</a></p>\
        </div><div style='clear: both;'></div></div>\
  </body>\
</html>");*/

    return resp;
}

