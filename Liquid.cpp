// Skeleton for Liquid class 
// Jboone6, group 28 CS 3307
// Liquid class created through Drink Factory
#include "Liquid.h"
using namespace std;

Liquid::Liquid(){
    type = "";
    amount = 0;
}
Liquid::Liquid(string tempType, float tempAmount, int tempPumpID){
    type = tempType;
    pumpID = tempPumpID;
    amount = tempAmount;
}
string Liquid::getType(){
    return type;
}
Liquid::setPumpID(int tempPumpID){
    pumpID = tempPumpID;
}

int getPumpID(){
    return pumpID;
}

float Liquid::getAmount(){
    return amount;
}

Liquid::setType(string s){
    type = s;
}

Liquid::setAmouont(float t){
    amount = t;
}

Liquid::pour(string drinkType){
    cout<< "pouring drink" << drinkType << endl;
}