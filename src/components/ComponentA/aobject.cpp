#include "aobject.h"
#include <QtCore/QDebug>
#include <ComponentB/IBObject.h>
#include <ComponentsCore5alpha/ComponentManager>


AObject::AObject (QObject *parent)
    : IAObject (parent)
{}

void AObject::foo ()
{
    auto object = ComponentsCore::ComponentManager::instance ()->getObject<IBObject> ();
    if (!object)
    {
        qCritical () << "[AObject][foo] Could not find IBObject";
        return;
    }
    qInfo () << object->foo ();
}
