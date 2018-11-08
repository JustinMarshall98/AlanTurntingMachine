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
    Drink(std::string d, vector<Liquid> tempIngredients);
    void pour(std::string dType);
    void add(std::string ingredient);
    vector<Liquid> getLiquids();
    std::string getName();

private:
    vector<Liquid> ingredients;
    std::string name;
    bool isPresent;
};

#endif
