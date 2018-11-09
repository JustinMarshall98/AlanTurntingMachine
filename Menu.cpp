#include "Menu.h"
#include <unistd.h>
#include <iostream>
#include <string>
using namespace std;

Menu::Menu(DrinkFactory factory) {
    //Drink drinkChoice;
	drinkOptions = factory.getDrinks(); //Needs to be set to the list (vector) given by the factory
}

Menu::~Menu() {
	//Blank, nothing to destroy
}

void Menu::pourDrink(int choice){
    //cout << "in pour drink" << choice << endl;
    drinkChoice = drinkOptions[choice];
    //cout << drinkChoice.getName() << endl;
    drinkChoice.pour();
}

vector<Drink> Menu::getDrinks(){
    return drinkOptions;
}

void Menu::clean(){
    //Blank for now
}
