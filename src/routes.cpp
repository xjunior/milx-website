#include <milx/routing.h>
#include "pages.h"

void routing(Milx::Routing& routes)
{
    routes.controller(new PagesController(), "pages");
}
