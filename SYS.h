/**
 * @file SYS.h
 * @author Ben
 * @brief Header file for the SYS object.
 * @version 0.1
 * @date 2018-11-28
 * 
 * @copyright Copyright (c) 2018
 * 
 */
#ifndef SYS_H
#define SYS_H

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "Drink.h"
#include <vector>

class SYS{
public:
    SYS(std::vector<Drink> drinks);
    void ShootYourShot();
private:
    // Drink object containing a "good" drink to be poured
    Drink goodDrink;
    // Drink object containing a "bad" drink to be poured
    Drink badDrink;

};
#endif
