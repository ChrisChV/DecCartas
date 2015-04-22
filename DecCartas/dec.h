#ifndef DEC_H
#define DEC_H
#include "iostream"
#include "suit.h"
#include "Vector"

using namespace std;

class Dec
{
public:
    Dec();
    Suit* getSuit(int,int);


private:
    //vector<Suit> deck;
    Suit *hearts[13];
    Suit *cocos[13];
    Suit *spades[13];
    Suit *clovers[13];
};

#endif // DEC_H
