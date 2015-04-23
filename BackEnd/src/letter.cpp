#include "letter.h"
#include "sad.h"
#include "dictionary.h"
#include <cstdlib>


letter::letter(Dec *deck)
{
    this->deck = deck;
    this->suitFirstOperatorNumber = new Suit();
    this->suitOperator = new Suit();
    this->suitSecondNumber = new Suit();
    this->suitSecondOperatorNumber = new Suit();
}


void letter::createLetter(OriginLetter originLetter){

    OriginNumber originNumber = convertOriginLetter(originLetter);
    RandomNumber randomNumber = rand() % 13;
    RandomNumber randomPolarity = rand() % 4;
    this->suitOperator = deck->getSuit(randomNumber, randomPolarity);
    switch (suitOperator->getPolarity()){
        case 0:
            if(suitOperator->getNumber() >= originNumber){
                randomPolarity = rand() % 2;
            }
    }
}


