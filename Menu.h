#ifndef MENU_H
#define MENU_H

#include <vector>
#include "DrinkFactory.h"
#include "pump.h"
#include "SYS.h"
#include "YOLO.h"

class Menu {
public:
	Menu(DrinkFactory);
	~Menu();
    void pourDrink(int choice);
    std::vector<Drink> getDrinks();
    void clean();
private:
    std::vector<Drink> drinkOptions;
    Drink drinkChoice;
};

#endif //ifndef MENU
