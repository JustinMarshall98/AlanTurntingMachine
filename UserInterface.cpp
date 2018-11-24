#include "UserInterface.h"

using namespace std;

void runMenu(DrinkFactory factory){
    //cout<<"SUPBITCH"<<endl;
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
        cout << "(" << i + 1 << ") " << "Exit" << endl << "Input a number: ";
        cin >> option;
        cout << endl;
        if(option == i){
            loop = false;
        }
        else{
            option -= 1;
            //cout << option << endl;
            tempMenu.pourDrink(option);
        }
    }
}

void runGames(DrinkFactory factory){
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

int main(){
    DrinkFactory factory("DrinkFile.txt");
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
                runGames(factory);
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


