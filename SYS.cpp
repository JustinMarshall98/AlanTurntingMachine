/**
 * @file SYS.cpp
 * @author Ben
 * @brief 
 * @version 0.1
 * @date 2018-11-28
 * 
 * @copyright Copyright (c) 2018
 * 
 */
#include "SYS.h"
using namespace std;

/**
 * @brief Construct a new SYS object to initialize all possible drinks that the user could receive, and the amount of said drinks.
 * 
 * @param possibleDrinks Vector representation of a list of all possible drinks and amounts to be chosen from.
 */
SYS::SYS(vector<Drink> possibleDrinks){
    badDrink = possibleDrinks[0];
    goodDrink = possibleDrinks[1];
}

/**
 * @brief Method which randomizes the drink options and pours either a good or bad drink.
 * 
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