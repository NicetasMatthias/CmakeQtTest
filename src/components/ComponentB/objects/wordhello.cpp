#include "wordhello.h"

WordHello::WordHello ()
    : text_ ("Hello")
{}

WordHello::~WordHello () {}

QString WordHello::text() const
{
    return text_;
}
