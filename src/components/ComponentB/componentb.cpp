#include "componentb.h"
#include "objects/wordhello.h"
#include "objects/wordworld.h"

ComponentB::ComponentB()
{
}

ComponentB::~ComponentB()
{
    if (object_)
    {
        removeObject (object_);
        delete object_;
    }
}

bool ComponentB::init()
{
    object_ = new BObject ();
    addObject (object_);

    object_->add (std::make_shared<WordHello>());
    object_->add (std::make_shared<WordWorld>());

    return true;
}
