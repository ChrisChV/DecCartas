#include "dec.h"
#include "sad.h"


Dec::Dec()
{
    for(DeckFor i = 1;i<=52;i++){
        SuitPolarity polarity = 1;
        Suit suit = new Suit(i,polarity);
        deck.push_back(suit);
        if(i % 13 == 0){
            polarity++;
        }
    }
}
vector<Suit> Dec::getDeck() const
{
    return deck;
}

void Dec::setDeck(const vector<Suit> &value)
{
    deck = value;
}

