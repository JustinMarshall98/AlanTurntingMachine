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
SYS::SYS(vector<Drink> drinks){

    int numdrinks = drinks.size();
    
    for(int i = 0; i < numdrinks; i++){
        if(drinks[i].getName() == "vodka"){
            badDrink = drinks[i];
        }
        else if(drinks[i].getName() == "water"){
            goodDrink = drinks[i];
        }
    }

}

/*
class to select and pour a random drink 
returns nothing 
returns a drink IRL
*/

void YOLO::randomDrink(){

    int drinkchoice = rand() % 6 + 1;
    if(drinkchoice == 6){
        badDrink.pour();
    }else{
        goodDrink.pour();
    }
}