/**
 * @file Menu.h
 * @author Justin
 * @brief Header file for the Menu class.
 * @version 0.1
 * @date 2018-11-28
 * 
 * @copyright Copyright (c) 2018
 * 
 */
#ifndef MENU_H
#define MENU_H

#include <vector>
#include "DrinkFactory.h"
#include "pump.h"
#include "SYS.h"
#include "YOLO.h"

/**
 * @brief Class representing the menu to select options of the program from.
 */

class Menu {
public:
	Menu(DrinkFactory);
	~Menu();
    void pourDrink(int choice);
    std::vector<Drink> getDrinks();
    void clean();
private:
    // Vector containing all of the possible drinks that can be created.
    std::vector<Drink> drinkOptions;
    // Drink chosen for creating based on the menu selection.
    Drink drinkChoice;
};

#endif //ifndef MENU
