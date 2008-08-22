#ifndef PAGES_H
#define PAGES_H

#include <milx/response.h>
#include <milx/request.h>
#include <milx/controller.h>

class PagesController : public Milx::Controller
{
public:
    PagesController();
    Milx::Response* index(Milx::Request*);
};

#endif
