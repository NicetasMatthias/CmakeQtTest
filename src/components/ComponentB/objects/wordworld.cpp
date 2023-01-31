#include "wordworld.h"

WordWorld::WordWorld ()
    : text_ ("world!")
{}

WordWorld::~WordWorld () {}

QString WordWorld::text() const
{
    return text_;
}
