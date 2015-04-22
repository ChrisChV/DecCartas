#ifndef LETTER_H
#define LETTER_H
#include "sad.h"
#include "suit.h"
#include "dec.h"

class letter
{
public:
    letter(Dec *deck);
    void createLetter(OriginLetter originLetter);
private:
    Dec *deck;
    SentenceCod sentence;
    Suit *suitOperator;
    Suit *suitSecondNumber;
    Suit *suitFirstOperatorNumber;
    Suit *suitSecondOperatorNumber;
};

#endif // LETTER_H

