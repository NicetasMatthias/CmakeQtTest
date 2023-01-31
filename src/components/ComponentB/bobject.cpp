#include "bobject.h"

#include <QtCore/QDebug>

BObject::BObject(QObject *parent)
    : IBObject{parent}
{

}

void BObject::add(IWord::ptr_t ptr)
{
    if (ptr)
        words_.push_back (ptr);
    else
        qWarning () << "[BObject][add] invalid pointer";
}

QString BObject::foo() const
{
    QString tmp = "There's my words: \"";
    for (const auto &iter : words_)
    {
        tmp.append(" ");
        tmp.append(iter->text());
    }
    tmp.append ("\"");

    return tmp;
}
