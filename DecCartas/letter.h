#ifndef LETTER_H
#define LETTER_H
#include "sad.h"
#include "suit.h"

class letter
{
public:
    letter();
    void createLetter(OriginLetter originLetter);
private:
    Sentence sentence;
    Suit *suitOperator;
    Suit *suitSecondNumber;
    Suit *suitFirstOperatorNumber;
    Suit *suitSecondOperatorNumber;
};

#endif // LETTER_H
