/**
 * @file Drink.h
 * @author Jodi
 * @brief Header file for the Drink class.
 * @version 0.1
 * @date 2018-11-28
 * 
 * @copyright Copyright (c) 2018
 * 
 */
/*Jboone6 for group 28
CS 3307 Group project
Class for drink type
*/

#ifndef DRINK_H
#define DRINK_H

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "Liquid.h"
#include <vector>

/**
 * @brief The drink method represents a drink, containing multiple liquids represented
 * in the liquid class.
 * 
 */
class Drink{
public:
    Drink(std::string d, std::vector<Liquid> tempIngredients);
    Drink();
    void pour();
    std::vector<Liquid> getLiquids();
    std::string getName();

private:
    // Ingredients holds a vector list of ingredients contained in the current drink.
    std::vector<Liquid> ingredients;
    // Name holds a string name of the current drink object.
    std::string name;
    // 
    bool isPresent;
};

#endif
