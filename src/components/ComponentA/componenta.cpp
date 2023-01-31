#include "componenta.h"

ComponentA::ComponentA ()
{}

ComponentA::~ComponentA ()
{
    if (object_)
    {
        removeObject (object_);
        delete object_;
    }
}

bool ComponentA::init ()
{
    object_ = new AObject ();
    addObject (object_);

    return true;
}
