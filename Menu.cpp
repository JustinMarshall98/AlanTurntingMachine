#include "Menu.h"
#include <unistd.h>
#include <iostream>
#include <string>
using namespace std;

Menu::Menu(DrinkFactory factory) {
	vector<Drink> drinkOptions; //Needs to be set to the list (vector) given by the factory
    Drink drinkChoice;
}

Menu::~Menu() {
	//Blank, nothing to destroy
}

void Menu::pourDrink(){
    drinkChoice.pour();
}

vector<Drink> Menu::getDrinks(){
    return drinkOptions;
}

void Menu::clean(){
    //Blank for now
}

void Menu::setDrinkChoice(int choice){
    drinkChoice = drinkOptions[choice];
}