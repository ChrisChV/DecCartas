#ifndef DEC_H
#define DEC_H
#include "iostream"
#include "suit.h"
#include "Vector"
#include "sad.h"

using namespace std;

class Dec
{
public:
    Dec();
    Suit* getSuit(RandomNumberLimit,RandomNumberLimit,RandomNumberLimit,RandomNumberLimit);
    Suit* getSuit(RandomNumber number,RandomNumberLimit polarityLimit1,RandomNumberLimit polarityLimit2, Random random);
    Suit* getSuit(RandomNumberLimit numberLimit1, RandomNumberLimit numberLimit2, RandomPolarity polarity);
    Suit* getSuit(RandomNumber,RandomNumber);


private:
    //vector<Suit> deck;
    Suit *hearts[13];
    Suit *cocos[13];
    Suit *spades[13];
    Suit *clovers[13];
    Suit* getSuitImpl(RandomNumber,RandomPolarity);
};

#endif // DEC_H
