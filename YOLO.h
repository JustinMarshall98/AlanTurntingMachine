/**
 * @file YOLO.h
 * @author Ben
 * @brief Header file for the YOLO class.
 * @version 0.1
 * @date 2018-11-28
 * 
 * @copyright Copyright (c) 2018
 * 
 */

#ifndef YOLO_H
#define YOLO_H

#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <vector>
#include "Drink.h"

/**
 * @brief Class representing the YOLO game for randomizing drinks.
 */

class YOLO{
private:
    // Vector list containing all possible drinks that can be used in the game.
    std::vector<Drink> possibleDrinks;
    // Integer value selecting the number of drinks to be made.
    int numDrinks;
public:
    YOLO(std::vector<Drink> drinks);
    void randomDrink();
};

#endif