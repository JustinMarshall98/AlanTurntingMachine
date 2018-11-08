//#include "UserInterface.h"
#include "menu.cpp"
#include <vector>
#include <unistd.h>
#include <iostream>
#include <string>
using namespace std;

void runMenu(DrinkFactory factory){
    Menu temp = new Menu(factory);
    bool loop = true;
    while(loop){
        char option;
        cout << "Drink Options:" << endl;
        int i = 0;
        vector<Drink> drinks = temp.getDrinks();
        for(; i < drinks.size(); i++){
            cout << "(" << i + 1 << ") " << drinks[i].getName() << endl;
        }
        cout << "(" << i + 1 << ") " << "Exit" << endl << "Input a number: ";
        cin >> option;
        cout << endl;
        if(option = i){
            loop = false;
        }
        else{
            option -= 1;
            temp.setDrinkChoice(i);
            temp.pourDrink();
        }
    }
}

void runGames(DrinkFactory factory){
    GamesOptions temp = new GamesOptions(factory);
    bool loop = true;
    while(loop){
        char option;
        cout << "(1) Shoot Your Shot" << endl << "(2) YOLO" << endl << "(3) Exit" << endl << "Input a number: ";
        cin >> option;
        cout << endl;
        switch (option) {
        case '1': { 
            vector<Game> games = temp.getGameOptions();
            temp.setChoice(games[0]); //Assumes getters and setters
            temp.playGame(temp.getChoice());//
            break; }
        case '2': { 
            vector<Game> games = temp.getGameOptions();
            temp.setChoice(games[1]); //Assumes getters and setters
            temp.playGame(temp.getChoice());
            break; }
        case '3': { 
            loop = false;
            break; }
        }
	}
    delete temp;
}

int main(){
    DrinkFactory factory =  new DrinkFactory();
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
                runMenu(factory);
                break; 
            }
            case '2': {
                runGames();
                break;
            }
            case '3': {
                exit();
                loop = false;
                break; 
            }
        }
    }
}

void exit(){
    cout << "Exiting!";
}
