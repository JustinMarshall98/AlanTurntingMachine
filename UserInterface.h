/**
 * @file UserInterface.h
 * @author Justin, Connor
 * @brief Header for User Interface class.
 * @version 0.1
 * @date 2018-11-28
 * 
 * @copyright Copyright (c) 2018
 * 
 */
#ifndef USERINTERFACE_H
#define USERINTERFACE_H

#include "Menu.h"

#include <vector>
#include <unistd.h>
#include <iostream>
#include <string>

/**
 * @brief Class representing the UI for the program.
 */

class UserInterface{
public:
    UserInterface();
    void runMenu(DrinkFactory);
    void runGames(DrinkFactory);
    int main();
private:

};
#endif
