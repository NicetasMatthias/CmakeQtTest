#ifndef AOBJECT_H
#define AOBJECT_H

#include <ComponentA/IAObject.h>

class AObject : public IAObject
{
    Q_OBJECT

public:
    AObject (QObject *parent = nullptr);
    void foo () override;
};

#endif // AOBJECT_H
