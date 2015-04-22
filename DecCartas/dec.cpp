#include "dec.h"
#include "sad.h"


Dec::Dec()
{
    SuitPolarity polarity = 1;
    for(DeckFor i = 0;i<13;i++){
        Suit suit = new Suit(i,polarity);
        hearts[i] = suit;
    }
    polarity++;
    for(DeckFor i = 0;i<13;i++){
        Suit suit = new Suit(i,polarity);
        cocos[i] = suit;
    }
    polarity++;
    for(DeckFor i = 0;i<13;i++){
        Suit suit = new Suit(i,polarity);
        spades[i] = suit;
    }
    polarity++;
    for(DeckFor i = 0;i<13;i++){
        Suit suit = new Suit(i,polarity);
        clovers[i] = suit;
    }
}

Suit* Dec::getSuit(int number, int polarity){
    Suit *suitTemporal;
    switch(polarity){
        case 1:
            suitTemporal = hearts[number - 1];
            if(suitTemporal != 0){
               hearts[number - 1] = 0;
               return suitTemporal;
            }
            break;
        case 2:
            suitTemporal = cocos[number - 1];
            if(suitTemporal != 0){
                cocos[number - 1] = 0;
                return suitTemporal;
            }
            break;
        case 3:
            suitTemporal = spades[number - 1];
            if(suitTemporal != 0){
                spades[number - 1] = 0;
                return suitTemporal;
            }
            break;
        case 4:
            suitTemporal = clovers[number - 1];
            if(suitTemporal != 0){
                clovers[number - 1] = 0;
                return suitTemporal;
            }
            break;
        default:
            return 0;
    }
    return 0;
}

