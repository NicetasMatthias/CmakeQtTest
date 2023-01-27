#include "aobject.h"
#include <QtCore/QDebug>

AObject::AObject (QObject *parent)
    : IAObject (parent)
{}

void AObject::foo ()
{
    qInfo () << "WOW!!!";
}
