#include "Dec.h"
#include "dec.h"
#include "sad.h"
#include <cstdlib>

Dec::Dec()
{
    SuitPolarity polarity = 1;
    for(DeckFor i = 0;i<13;i++){
        Suit *suit = new Suit(i,polarity);
        hearts[i] = suit;
    }
    polarity++;
    for(DeckFor i = 0;i<13;i++){
        Suit *suit = new Suit(i,polarity);
        cocos[i] = suit;
    }
    polarity++;
    for(DeckFor i = 0;i<13;i++){
        Suit *suit = new Suit(i,polarity);
        spades[i] = suit;
    }
    polarity++;
    for(DeckFor i = 0;i<13;i++){
        Suit *suit = new Suit(i,polarity);
        clovers[i] = suit;
    }
}

Suit * Dec::getSuitImpl(RandomNumber randomNumber, RandomPolarity randomPolarity){
    Suit *suitTemporal;
    switch(randomPolarity){
        case 0:
            suitTemporal = hearts[randomNumber - 1];
            if(suitTemporal != 0){
               hearts[randomNumber - 1] = 0;
               return suitTemporal;
            }
            break;
        case 1:
            suitTemporal = cocos[randomNumber - 1];
            if(suitTemporal != 0){
                cocos[randomNumber - 1] = 0;
                return suitTemporal;
            }
            break;
        case 2:
            suitTemporal = spades[randomNumber - 1];
            if(suitTemporal != 0){
                spades[randomNumber - 1] = 0;
                return suitTemporal;
            }
            break;
        case 3:
            suitTemporal = clovers[randomNumber - 1];
            if(suitTemporal != 0){
                clovers[randomNumber - 1] = 0;
                return suitTemporal;
            }
            break;
        default:
            return 0;
    }
    return 0;
}

Suit* Dec::getSuit(RandomNumberLimit numberLimit1, RandomNumberLimit numberLimit2, RandomNumberLimit polarityLimit1, RandomNumberLimit polarityLimit2){
    RandomNumber randomNumber = rand() % (numberLimit2 + 1) + numberLimit1;
    RandomPolarity randomPolarity = rand() % (polarityLimit2 + 1) + polarityLimit1;
    Suit* suit = getSuitImpl(randomNumber, randomPolarity);
    if(suit = 0){
        suit = getSuit(numberLimit1, numberLimit2, polarityLimit1, polarityLimit2);
    }
    return suit;
}

Suit* Dec::getSuit(RandomNumberLimit numberLimit1, RandomNumberLimit numberLimit2, RandomPolarity polarity){
    RandomNumber randomNumber = rand() % (numberLimit2 + 1) + numberLimit1;
    Suit* suit = getSuitImpl(randomNumber, polarity);
    if(suit = 0){
        suit = getSuit(numberLimit1, numberLimit2, polarity);
    }
    return suit;
}

Suit* Dec::getSuit(RandomNumber number, RandomNumberLimit polarityLimit1, RandomNumberLimit polarityLimit2, Random random){
    RandomPolarity randomPolarity = rand() % (polarityLimit2 + 1) + polarityLimit1;
    Suit* suit = getSuitImpl(number, randomPolarity);
    if(suit = 0){
        suit = getSuit(number, polarityLimit1, polarityLimit2);
    }
    return suit;
}

Suit* Dec::getSuit(RandomNumber number, RandomNumber polarity){
    Suit* suit = getSuitImpl(number, polarity);
    if(suit = 0){
        suit = getSuit(number, polarity);
    }
    return suit;
}
