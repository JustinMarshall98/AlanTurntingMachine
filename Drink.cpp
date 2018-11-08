#include "Drink.h"
#include "Liquid.h"

using namespace std;

Drink::Drink(string d, vector<Liquid> tempIngredients){
    name = d;
    ingredients = tempIngredients;
}

Drink::getName(){
    return name;
}

vector<string> getLiquids(){
    return ingredients;
}

void Drink::Pour(){
    Liquid::Pour(name);
}

void Drink::add(string ingredient){
    
    isPresent = (find(ingredients.begin(), ingredients.end(), ingredient) != ingredients.end());
    if(isPresent){
        cout<<"ingredient already present"<<endl
    }
    ingredients.push_back(ingredient);
}