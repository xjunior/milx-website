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
<html xmlns='http://www.w3.org/1999/xhtml' xml:lang='en' lang='en'>\
<head>\
    <meta http-equiv='content-type' content='text/html; charset=utf-8' />\
    <meta http-equiv='content-language' content='en' />\
    <meta name='robots' content='all,follow' />\
    <meta name='author' lang='en' content='All: Your website name [www.your-website.com]; e-mail: info@your-website.com' />\
    <meta name='copyright' lang='en' content='webdesign: Vit Dlouhy [Nuvio - www.nuvio.cz; NuvioTemplates - www.nuviotemplates.com]; e-mail: hello@nuviotemplates.com' />\
    <meta name='description' content='...' />\
    <meta name='keywords' content='...' />\
    <link rel='stylesheet' media='screen,projection' type='text/css' href='css/main.css' />\
    <!--[if lte IE 6]><link rel='stylesheet' type='text/css' href='css/main-msie.css' /><![endif]-->\
    <link rel='stylesheet' media='screen,projection' type='text/css' href='css/scheme.css' />\
    <link rel='stylesheet' media='print' type='text/css' href='css/print.css' />\
    <title>Milx Web Application Framework</title>\
</head>\
<body>\
<div id='main'>\
    <!-- Header -->\
    <div id='header'>\
        <!-- Logo -->\
        <h1 id='logo'><a href='./' title='Your website name [Go to homepage]'>Milx <span>Web Application</span> Framework</a></h1>\
        <hr class='noscreen' />\
        <!-- RSS feeds -->\
        <div id='rss'>\
            <a href='#'>Articles</a><br />\
            <a href='#'>Comments</a>\
        </div> <!-- /rss -->\
        <hr class='noscreen' />\
    </div> <!-- /header -->\
    <!-- Body -->\
    <div id='cols' class='box'>\
        <!-- Content -->\
        <div id='content'>\
            <h1 id='title'>web development easy as web development should be</h1>\
            <div id='perex' class='box'>\
                <p><img src='tmp/image.gif' alt='' class='f-left' />\
                <span class='smaller low'>25. Nov 2008 @ 15:35 &nbsp; <a href='#' class='ico-comment'>15 comments</a></span><br />\
                Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Cras sit ametsae. Donec quis sem id risus tristique pulvinar. Integer risus massa, placeratemi consequat tincidunt, tincidunt non, quam. Morbi ac est. Duis tincidunt. Nam nec neque in nunc sagittis accumsan. <a href='#'>Donec eget erat</a>. Nulla euismod, elit nec molestie pretium, dui est tempor lectus, in fringilla dolor felis in esdolor. Donec vehicula. Nunc id libero. Quisque vel magna vitae mi tium vehicula.</p>\
            </div> <!-- /perex -->\
            <!-- 2 columns -->\
            <div class='cols5050 box'>\
                <!-- Left column -->\
                <div class='col'>\
                    <dl class='list'>\
                        <dt><a href='#'>Lorem ipsum sit amet</a></dt>\
                        <dd><span class='smaller low'>25. Nov 2008 @ 15:35 &nbsp; <a href='#' class='ico-comment'>15 comments</a></span><br />Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Cras sit amet massa. Donec quis sem risusieta tristique pulvinar. Integer risus massa. Quisna vitaes mi pretium vehicula. Suspendisse pharetra ligulame vitaesm metus. Etiam bibendum ipsum.</dd>\
                        <dt><a href='#'>Lorem ipsum sit amet</a></dt>\
                        <dd><span class='smaller low'>25. Nov 2008 @ 15:35 &nbsp; <a href='#' class='ico-comment'>15 comments</a></span><br />Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Cras sit amet massa. Donec quis sem risusieta tristique pulvinar. Integer risus massa. Quisna vitaes mi pretium vehicula. Suspendisse pharetra ligulame vitaesm metus. Etiam bibendum ipsum.</dd>\
                        <dt><a href='#'>Lorem ipsum sit amet</a></dt>\
                        <dd><span class='smaller low'>25. Nov 2008 @ 15:35 &nbsp; <a href='#' class='ico-comment'>15 comments</a></span><br />Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Cras sit amet massa. Donec quis sem risusieta tristique pulvinar. Integer risus massa. Quisna vitaes mi pretium vehicula. Suspendisse pharetra ligulame vitaesm metus. Etiam bibendum ipsum.</dd>\
                        <dt><a href='#'>Lorem ipsum sit amet</a></dt>\
                        <dd><span class='smaller low'>25. Nov 2008 @ 15:35 &nbsp; <a href='#' class='ico-comment'>15 comments</a></span><br />Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Cras sit amet massa. Donec quis sem risusieta tristique pulvinar. Integer risus massa. Quisna vitaes mi pretium vehicula. Suspendisse pharetra ligulame vitaesm metus. Etiam bibendum ipsum.</dd>\
                    </dl>\
                </div> <!-- /col -->\
                <!-- Right column -->\
                <div class='col f-right'>\
                    <dl class='list'>\
                        <dt><a href='#'>Lorem ipsum sit amet</a></dt>\
                        <dd><span class='smaller low'>25. Nov 2008 @ 15:35 &nbsp; <a href='#' class='ico-comment'>15 comments</a></span><br />Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Cras sit amet massa. Donec quis sem risusieta tristique pulvinar. Integer risus massa. Quisna vitaes mi pretium vehicula. Suspendisse pharetra ligulame vitaesm metus. Etiam bibendum ipsum.</dd>\
                        <dt><a href='#'>Lorem ipsum sit amet</a></dt>\
                        <dd><span class='smaller low'>25. Nov 2008 @ 15:35 &nbsp; <a href='#' class='ico-comment'>15 comments</a></span><br />Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Cras sit amet massa. Donec quis sem risusieta tristique pulvinar. Integer risus massa. Quisna vitaes mi pretium vehicula. Suspendisse pharetra ligulame vitaesm metus. Etiam bibendum ipsum.</dd>\
                        <dt><a href='#'>Lorem ipsum sit amet</a></dt>\
                        <dd><span class='smaller low'>25. Nov 2008 @ 15:35 &nbsp; <a href='#' class='ico-comment'>15 comments</a></span><br />Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Cras sit amet massa. Donec quis sem risusieta tristique pulvinar. Integer risus massa. Quisna vitaes mi pretium vehicula. Suspendisse pharetra ligulame vitaesm metus. Etiam bibendum ipsum.</dd>\
                        <dt><a href='#'>Lorem ipsum sit amet</a></dt>\
                        <dd><span class='smaller low'>25. Nov 2008 @ 15:35 &nbsp; <a href='#' class='ico-comment'>15 comments</a></span><br />Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Cras sit amet massa. Donec quis sem risusieta tristique pulvinar. Integer risus massa. Quisna vitaes mi pretium vehicula. Suspendisse pharetra ligulame vitaesm metus. Etiam bibendum ipsum.</dd>\
                    </dl>\
                </div> <!-- /col -->\
            </div> <!-- /cols5050 -->\
            <!-- Buttons -->\
            <div class='box'>\
                <span class='f-right'><a href='#' class='button'>Newer posts &rarr;</a></span>\
                <span class='f-left'><a href='#' class='button'>&larr; Older posts</a></span>\
            </div> <!-- /box -->\
        <hr class='noscreen' />\
        </div> <!-- /content -->\
        <!-- Sidebar -->\
        <div id='aside'>\
            <!-- About -->\
            <div id='about' class='box'>\
                <img src='tmp/image-02.gif' alt='' class='f-left' />\
                <strong class='high'>John Doe</strong><br />\
                <a href='mailto:john@doe.com'>john@doe.com</a>\
            </div> <!-- /about -->\
            <!-- Categories -->\
            <h4>Categories</h4>\
            <ul class='nav'>\
                <li><a href='#'>Lorem ipsum dolor sit amet</a></li>\
                <li><a href='#'>Lorem ipsum dolor sit amet</a></li>\
                <li class='nav-active'><a href='#'>Lorem ipsum dolor sit amet</a></li> <!-- Highlighted -->\
                <li><a href='#'>Lorem ipsum dolor sit amet</a></li>\
                <li><a href='#'>Lorem ipsum dolor sit amet</a></li>\
                <li><a href='#'>Lorem ipsum dolor sit amet</a></li>\
                <li><a href='#'>Lorem ipsum dolor sit amet</a></li>\
                <li><a href='#'>Lorem ipsum dolor sit amet</a></li>\
                <li><a href='#'>Lorem ipsum dolor sit amet</a></li>\
                <li><a href='#'>Lorem ipsum dolor sit amet</a></li>\
            </ul>\
            <!-- Calendar -->\
            <table id='calendar'>\
                <tr>\
                    <th>Mon</th>\
                    <th>Tue</th>\
                    <th>Wed</th>\
                    <th>Thu</th>\
                    <th>Fri</th>\
                    <th>Sat</th>\
                    <th>Sun</th>\
                </tr>\
                <tr>\
                    <td>1</td>\
                    <td>2</td>\
                    <td>3</td>\
                    <td>4</td>\
                    <td>5</td>\
                    <td>6</td>\
                    <td>7</td>\
                </tr>\
                <tr class='bg'>\
                    <td>8</td>\
                    <td>9</td>\
                    <td>10</td>\
                    <td>11</td>\
                    <td>12</td>\
                    <td>13</td>\
                    <td>14</td>\
                </tr>\
                <tr>\
                    <td>15</td>\
                    <td>16</td>\
                    <td>17</td>\
                    <td>18</td>\
                    <td id='calendar-active'>19</td> <!-- Highlighted -->\
                    <td>20</td>\
                    <td>21</td>\
                </tr>\
                <tr class='bg'>\
                    <td>22</td>\
                    <td>23</td>\
                    <td>24</td>\
                    <td>25</td>\
                    <td>26</td>\
                    <td>27</td>\
                    <td>28</td>\
                </tr>\
                <tr>\
                    <td>29</td>\
                    <td>30</td>\
                    <td>31</td>\
                    <td></td>\
                    <td></td>\
                    <td></td>\
                    <td></td>\
                </tr>\
            </table>\
            <!-- Archive -->\
            <h4>Archive</h4>\
            <ul class='nav'>\
                <li><span class='f-right low'>158 posts</span><a href='#'>2008</a></li>\
                <li><span class='f-right low'>322 posts</span><a href='#'>2007</a></li>\
                <li><span class='f-right low'>112 posts</span><a href='#'>2006</a></li>\
                <li><span class='f-right low'>236 posts</span><a href='#'>2005</a></li>\
                <li><span class='f-right low'>144 posts</span><a href='#'>2004</a></li>\
            </ul>\
        <hr class='noscreen' />\
        </div> <!-- /aside -->\
    </div> <!-- /cols -->\
    <!-- Footer -->\
    <div id='footer' class='box'>\
        <!-- Do you want remove this backlinks? Look at www.nuviotemplates.com/payment.php -->\
        <p class='f-right'><a href='http://www.nuviotemplates.com/'>Free web templates</a> by <a href='http://www.nuvio.cz/'>Nuvio</a>, sponsored by: <a href='http://last-minute.invia.sk' title='Last minute'>Last minute</a></p>\
        <!-- Do you want remove this backlinks? Look at www.nuviotemplates.com/payment.php -->\
        <hr class='noscreen' />\
        <p>&copy;&nbsp;2008 <a href='#'>Milx Web Application Framework</a></p>\
    </div> <!-- /footer -->\
</div> <!-- /main -->\
</body>\
</html>");

    return resp;
}

