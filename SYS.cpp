/*
Ben MacGillivray

Implementation for the SYS class

Nov 7 2018
*/

#include "SYS.h"
using namespace std;
/*
constructor to initialize the possible drinks th user could recieve and the ammount of possible drinks
*/
SYS::SYS(vector<Drink> possibleDrinks){
    badDrink = possibleDrinks[0];
    goodDrink = possibleDrinks[1];
}

/*
class to select and pour a random drink 
returns nothing 
returns a drink IRL
*/

void SYS::ShootYourShot(){

    int drinkchoice = rand() % 6 + 1;
    if(drinkchoice == 6){
        badDrink.pour();
    }
    else{
        goodDrink.pour();
    }
}