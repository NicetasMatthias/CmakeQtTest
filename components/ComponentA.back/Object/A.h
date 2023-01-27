#ifndef A_H
#define A_H

#include <QtCore/QObject>
class A : public QObject
{
    Q_OBJECT

public:
    A(QObject* parent = 0x00);
    virtual ~A();
};

#endif // A_H