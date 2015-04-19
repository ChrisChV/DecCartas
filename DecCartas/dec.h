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
    vector<Suit> getDeck() const;
    void setDeck(const vector<Suit> &value);

private:
    vector<Suit> deck;
};

#endif // DEC_H
