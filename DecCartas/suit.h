#ifndef SUIT_H
#define SUIT_H
#include "sad.h"

class Suit
{
public:
    Suit();
    Suit(SuitNumber number, SuitPolarity polarity);

    SuitPolarity getPolarity() const;
    void setPolarity(const SuitPolarity &value);

    SuitNumber getNumber() const;
    void setNumber(const SuitNumber &value);

private:
    SuitNumber number;
    SuitPolarity polarity;
};

#endif // SUIT_H
