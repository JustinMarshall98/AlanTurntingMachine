#ifndef LIQUID_H
#define LIQUID_H

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

//Add more includes ? 

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
    void pour(std::string drinkType);

private:
    float amount;
    std::string type;
    int pumpID;

};
#endif

