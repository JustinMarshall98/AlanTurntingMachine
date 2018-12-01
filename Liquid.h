/**
 * @file Liquid.h
 * @author Jodi
 * @brief Header file for the Liquid class.
 * @version 0.1
 * @date 2018-11-28
 * 
 * @copyright Copyright (c) 2018
 * 
 */
#ifndef LIQUID_H
#define LIQUID_H

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "pump.h"

/**
 * @brief Class representing a Liquid object.
 */

class Liquid{
public:
    Liquid();
    Liquid(std::string tempType, float tempAmount, int tempPumpID);
    void setPumpID(int tempPumpID);
    int getPumpID();
    float getAmount();
    std::string getType();
    void setType(std::string s);
    void setAmount(float t);
    void pour();

private:
    // Amount of liquid to be poured into a drink.
    float amount;
    // Name type of liquid.
    std::string type;
    // ID of pump associated with liquid.
    int pumpID;

};
#endif

