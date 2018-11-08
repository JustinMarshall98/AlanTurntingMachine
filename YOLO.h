/*
Ben Macgillivray

Headder file for the yolo class to pour a random drink from the menue

Nov 7 2018
*/
#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <vector>
#include "Drink.h"

class YOLO{
    private:
        std::vector<Drink> possibleDrinks;
        int numDrinks;
    public:
        YOLO(std::vector<Drink> drinks);
        void randomDrink();
};