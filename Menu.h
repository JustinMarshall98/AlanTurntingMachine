#ifndef MENU_H
#define MENU_H

#include <vector>

class Menu {
public:
	Menu(DrinkFactory);
	~Menu();
    void pourDrink();
    std::vector<Drink> getDrinks();
    void clean();
    void setDrinkChoice(int);
private:
    std::vector<Drink> drinkOptions;
    std::Drink drinkChoice;
};

#endif //ifndef MENU
