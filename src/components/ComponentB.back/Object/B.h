#ifndef B_H
#define B_H

#include <QtCore/QObject>
class B : public QObject
{
    Q_OBJECT

public:
    B(QObject* parent = 0x00);
    virtual ~B();
};

#endif // B_H