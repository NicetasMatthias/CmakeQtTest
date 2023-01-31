#ifndef WORDWORLD_H
#define WORDWORLD_H

#include <ComponentB/IWord.h>
#include <QObject>

class WordWorld : public IWord
{
public:
    WordWorld();
    ~WordWorld();

    QString text () const override;
protected:
    QString text_;
};

#endif // WORDWORLD_H
