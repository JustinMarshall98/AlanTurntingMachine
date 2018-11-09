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

class Drink{
public:
    Drink(std::string d, std::vector<Liquid> tempIngredients);
    Drink();
    void pour();
    std::vector<Liquid> getLiquids();
    std::string getName();

private:
    std::vector<Liquid> ingredients;
    std::string name;
    bool isPresent;
};

#endif
