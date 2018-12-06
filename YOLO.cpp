/**
 * @file YOLO.cpp
 * @author Ben
 * @brief Class representing the YOLO game for randomizing drinks.
 * @version 0.1
 * @date 2018-11-28
 * 
 * @copyright Copyright (c) 2018
 * 
 */

#include "YOLO.h"
using namespace std;

/**
 * @brief Construct a new YOLO object and populates it with all possible drinks, and amounts of drinks.
 * 
 * @param drinks 
 */
YOLO::YOLO(vector<Drink> drinks){

    possibleDrinks = drinks;
    numDrinks = possibleDrinks.size() - 3;

}

/**
 * @brief Method that selects and pours a random drinks.
 * 
 */
void YOLO::randomDrink(){

    int drinkchoice = rand() % numDrinks + 1;
    Drink randomDrink = possibleDrinks[drinkchoice];
    randomDrink.pour();

}