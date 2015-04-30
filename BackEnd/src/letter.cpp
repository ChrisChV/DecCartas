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
    RandomPolarity randomPolarity;
    RandomNumber randomNumber;
    this->suitOperator = deck->getSuit(0,13,0,4);
    switch (suitOperator->getPolarity()){
        case 0:
            if(suitOperator->getNumber() >= originNumber){
                randomPolarity = rand() % 2;
                switch(randomPolarity){
                    case 0:
                        this->suitFirstOperatorNumber = deck->getSuit(suitOperator->getNumber() - 1, originNumber, randomPolarity);
                }
            }
    }
}


