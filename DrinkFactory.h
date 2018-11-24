#ifndef DRINKFACTORY_H
#define DRINKFACTORY_H

#include "Drink.h"
#include "Liquid.h"

#include <fstream>
#include <vector>
#include <string>

class DrinkFactory{
public:
    DrinkFactory(std::string);
    std::vector<drink> getDrinks();
    std::vector<Liquid> getLiquid();
    std::vector<std::string> split(string, string);
    Liquid findLiquid(string);
    
private:
    vector<Drink> drinks; ///< array to hold the drink recipes created and returned by the factory
	vector<Liquid> liquids; ///< array to hold the liquids created and returned by the factory
	string DrinkFileName; ///< file name to read the drink recipes
};
#endif
