#ifndef USERINTERFACE_H
#define USERINTERFACE_H

#include "Menu.h"

#include <vector>
#include <unistd.h>
#include <iostream>
#include <string>

class UserInterface{
public:
    void runMenu(DrinkFactory);
    void runGames(DrinkFactory);
    int main();
private:

};
#endif
