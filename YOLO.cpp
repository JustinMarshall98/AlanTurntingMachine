/*
Ben Macgillivray

Implementation for the YOLO class

Nov 7 2018
*/

#include "YOLO.h"

/*
constructor to initialize the possible drinks th user could recieve and the ammount of possible drinks
*/
YOLO::YOLO(vector<Drink> drinks){

    possibleDrinks = drinks;
    numdrinks = possibleDrinks.size();

}

/*
class to select and pour a random drink 
returns nothing 
returns a drink IRL
*/
void YOLO::randomDrink(){

    drinkchoice = rand() % numdrinks + 1;
    Drink randomDrink = possibleDrinks[drinkchoice];
    randomDrink.pour();

}