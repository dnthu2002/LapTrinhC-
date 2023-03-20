#include "Coin.h"
#include <cstdlib>


Coin :: Coin(){}
void Coin::Toss(){
     int toss = rand() % 2;
    if(toss == 0){
        this->sideup = "heads";
    }else{
        this->sideup = "tails";
    }
}
string Coin::getSideup()
{
    return this->sideup;
}
