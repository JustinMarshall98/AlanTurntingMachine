/**
 * @file Menu.cpp
 * @author 
 * @brief Class representing the menu to select options of the program from.
 * @version 0.1
 * @date 2018-11-28
 * 
 * @copyright Copyright (c) 2018
 * 
 */
#include "Menu.h"
#include <unistd.h>
#include <iostream>
#include <string>
using namespace std;

/**
 * @brief Construct a new Menu object with drinks created from the Drink Factory.
 * 
 * @param factory Drink Factory containing all pre-programmed and saved drinks and liquids to be selected from the menu.
 */
Menu::Menu(DrinkFactory factory) {
    //Drink drinkChoice;
	drinkOptions = factory.getDrinks(); //Needs to be set to the list (vector) given by the factory
}

/**
 * @brief Destroy the Menu object.
 * 
 */
Menu::~Menu() {
	//Blank, nothing to destroy
}

/**
 * @brief Method for pouring a drink from the selected choice from the menu.
 * 
 * @param choice Integer representation of the choice chosen from the menu.
 */
void Menu::pourDrink(int choice){
    //cout << "in pour drink" << choice << endl;
    drinkChoice = drinkOptions[choice];
    //cout << drinkChoice.getName() << endl;
    drinkChoice.pour();
}

/**
 * @brief Method for retrieving and returning a list of all available drinks.
 * 
 * @return vector<Drink> Vector representation of a list of drinks available for creation.
 */
vector<Drink> Menu::getDrinks(){
    return drinkOptions;
}

/**
 * @brief Method for cleaning out the pipes of the machine using water to prevent cross drink contamination.
 * 
 */
void Menu::clean(){
    //Blank for now
}
