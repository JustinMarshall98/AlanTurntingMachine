#include "Drink.h"
#include "Liquid.h"

using namespace std;

Drink::Drink(string d, vector<string> tempIngredients){
    name = d;
    ingredients = tempIngredients;
}

Drink::getName(){
    return name;
}

vector<string> getLiquids(){
    return ingredients;
}

Drink::Pour(){
    Liquid::Pour(name);
}

Drink::add(string ingredient){
    
    isPresent = (std::find(ingredients.begin(), ingredients.end(), ingredient) != ingredients.end());
    if(isPresent){
        cout<<"ingredient already present"<<endl
    }
    ingredients.push_back(ingredient);
}