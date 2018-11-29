/**
 * @file Liquid.cpp
 * @author Jodi
 * @brief Class representing an Liquid object.
 * @version 0.1
 * @date 2018-11-28
 * 
 * @copyright Copyright (c) 2018
 * 
 */
#include "Liquid.h"
using namespace std;

/**
 * @brief Construct a new Liquid object representing a liquid that makes up a drink with no parameters passed.
 * 
 */
Liquid::Liquid(){
    type = "";
    amount = 0;
    pumpID = 0;
}

/**
 * @brief Construct a new Liquid representing a liquid that makes up a drink with the passed parameters.
 * 
 * @param tempType String representation of the type of liquid.
 * @param tempAmount Float amount of the amount of the liquid to be poured into a drink.
 * @param tempPumpID Integer amount of the ID of the liquid.
 */
Liquid::Liquid(string tempType, float tempAmount, int tempPumpID){
    type = tempType;
    pumpID = tempPumpID;
    amount = tempAmount;
}

/**
 * @brief Method which retreieves and returns the type of the current liquid.
 * 
 * @return string String representation of the type of the current liquid.
 */
string Liquid::getType(){
    return type;
}

/**
 * @brief Method which sets the ID of the current pump to the passed parameter.
 * 
 * @param tempPumpID Integer value of the new ID of the pump associated with the current liquid.
 */
void Liquid::setPumpID(int tempPumpID){
    pumpID = tempPumpID;
}

/**
 * @brief Method which retrieves and returns the ID of the pump associated with the current liquid.
 * 
 * @return int Integer representation of the ID of the pump associated with the current liquid.
 */
int Liquid::getPumpID(){
    return pumpID;
}

/**
 * @brief Method which retrieves and returns the amount of the current liquid to be poured into a drink.
 * 
 * @return float Float representation of the amount of the current liquid to be poured into a drink.
 */
float Liquid::getAmount(){
    return amount;
}

/**
 * @brief Method which sets the type of the current liquid to the passed parameter.
 * 
 * @param s String representation of the type to set the current liquid to.
 */
void Liquid::setType(string s){
    type = s;
}

/**
 * @brief Method which sets the amount of current liquid to be poured into a drink to the passed parameter.
 * 
 * @param t Float representation of the amount of current liquid to be poured into a drink.
 */
void Liquid::setAmount(float t){
    amount = t;
}

/**
 * @brief Method which activates a pump to pour the specified liquid into the drink.
 * 
 */
void Liquid::pour(){
    cout << "Pouring: " << type << endl;
    pump thispump = pump(pumpID);
    thispump.runPump(pumpID, amount);
}
