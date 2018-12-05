/**
 * @file UserInterface.cpp
 * @author Justin
 * @brief Class representing the UI for the program.
 * @version 0.1
 * @date 2018-11-28
 * 
 * @copyright Copyright (c) 2018
 * 
 */
#include "UserInterface.h"

using namespace std;

/**
 * @brief Construct a new User Interface when no parameters are passed.
 * 
 */
UserInterface::UserInterface(){

}

/**
 * @brief Construct a new User Interface with the passed Drink Factory to populate all the possible options.
 * 
 * @param factory 
 */
void UserInterface::runMenu(DrinkFactory factory){
    Menu tempMenu(factory);
    bool loop = true;
    while(loop){
        int option;
        cout << "Drink Options:" << endl;
        int i = 0;
        //cout << "xxx" << endl;
        vector<Drink> drinks = tempMenu.getDrinks();
        //cout << "xxx" << endl;
        for(; i < drinks.size(); i++){
            cout << "(" << i + 1 << ") " << drinks[i].getName() << endl;
        }
        cout << "(" << ++i << ") " << "Exit" << endl << "Input a number: ";
        cin >> option;
        cout << endl;
        if(option == i){
            loop = false;
        }
        else{
            option -= 1;
            //cout << option << endl;
            if (option >= 0 && option < drinks.size()) {
                tempMenu.pourDrink(option);
            }
        }
    }
}

/**
 * @brief Method for running the programmed games on the program.
 * 
 * @param factory Drink Factory object containing all of the created games.
 */
void UserInterface::runGames(DrinkFactory factory){
    bool loop = true;
    while(loop){
        char option;
        cout << "(1) Shoot Your Shot" << endl << "(2) YOLO" << endl << "(3) Exit" << endl << "Input a number: ";
        cin >> option;
        cout << endl;
        switch (option) {
        case '1': { 
            SYS temp(factory.getDrinks());
            temp.ShootYourShot();
            break; }
        case '2': { 
            YOLO temp(factory.getDrinks());
            temp.randomDrink();
            break; }
        case '3': { 
            loop = false;
            break; }
        }
	}
   // delete temp;
}

/**
 * @brief Main method for the program which runs and creates all required objects to run the program.
 * 
 * @return int 
 */
int main(){
    DrinkFactory factory("DrinkFile.txt");
    UserInterface interface = UserInterface();
    //Basic text interface implemented for testing purposes
    //GUI to be implemented later on in development
    bool loop = true;
    while(loop){
        char option;
        cout << "Main Menu:" << endl << "(1) Drink Menu" << endl << "(2) Game Menu" << endl << "(3) Exit" << endl << "Input a number: ";
        cin >> option;
        cout << endl;
        switch (option) {
            case '1': { 
                interface.runMenu(factory);
                break; 
            }
            case '2': {
                interface.runGames(factory);
                break;
            }
            case '3': {
                cout << "Exiting!";
                loop = false;
                break; 
            }
        }
    }
}


