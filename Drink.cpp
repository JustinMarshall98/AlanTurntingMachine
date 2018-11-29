#include "Drink.h"

using namespace std;

/**
 * @brief Construct a new Drink object when passed parameters
 * 
 * @param d contains string representation of the drink name
 * @param tempIngredients contains a vector of liquids to be added to the drink object
 */
Drink::Drink(string d, vector<Liquid> tempIngredients){
    name = d;
    ingredients = tempIngredients;
}

/**
 * @brief Construct a new Drink object when no parameters passed
 * 
 */
Drink::Drink(){
    name="not set";
}

/**
 * @brief Returns the name of the current drink object.
 * 
 * @return string String representation of the name of the drink.
 */
string Drink::getName(){
    return name;
}

/**
 * @brief Returns a vector of liquids contained in the current drink.
 * 
 * @return vector<Liquid> A vector representation of liquids in the current drink.
 */
vector<Liquid> Drink::getLiquids(){
    return ingredients;
}

/**
 * @brief Method that mimics the act of pouring a drink.
 * 
 */
void Drink::pour(){
    cout << "pouring drink(in Drink)" << endl;
    
    for(int i = 0; i < ingredients.size(); i++){
        ingredients[i].pour();
    }
}
