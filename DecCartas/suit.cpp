#include "suit.h"

Suit::Suit()
{
}

Suit::Suit(SuitNumber number, SuitPolarity polarity)
{
    this->number = number;
    this->polarity = polarity;
}


SuitPolarity Suit::getPolarity() const
{
    return polarity;
}

void Suit::setPolarity(const SuitPolarity &value)
{
    polarity = value;
}
SuitNumber Suit::getNumber() const
{
    return number;
}

void Suit::setNumber(const SuitNumber &value)
{
    number = value;
}


