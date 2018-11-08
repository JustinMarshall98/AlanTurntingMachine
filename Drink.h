/*Jboone6 for group 28
CS 3307 Group project
Class for drink type
*/

#ifndef DRINK_H
#define DRINK_H

#include <iostream>
#include <stdlib.h>
#include <stdio.h>


class Drink{
public:
    Drink(std::string d, vector<std::string> tempIngredients);
    pour();
    add(std::string ingredient);
    vector<std::string> getLiquids();
    std::string getName();

private:
    vector<std::string> ingredients;
    std::string name;
    bool isPresent;
};

#endif




