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
private:
    vector<Suit> deck;
};

#endif // DEC_H
