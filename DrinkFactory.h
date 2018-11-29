/**
 * @file DrinkFactory.h
 * @author 
 * @brief Header file for the Drink Factory class.
 * @version 0.1
 * @date 2018-11-28
 * 
 * @copyright Copyright (c) 2018
 * 
 */
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
    std::vector<Drink> getDrinks();
    std::vector<Liquid> getLiquid();
    std::vector<std::string> split(std::string, std::string);
    Liquid findLiquid(std::string);
    
private:
    std::vector<Drink> drinks; ///< array to hold the drink recipes created and returned by the factory
	std::vector<Liquid> liquids; ///< array to hold the liquids created and returned by the factory
	std::string DrinkFileName; ///< file name to read the drink recipes
};

#endif
