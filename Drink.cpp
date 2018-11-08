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
    cout << "Pouring Drink: " << name << endl;
    cout << "With Ingredients: "  << name << endl;
    for(int i = 0; i < ingredients.size(); i++){
        ingredients[i].Pour();
    }
}

void Drink::add(string ingredient){
    
    isPresent = (find(ingredients.begin(), ingredients.end(), ingredient) != ingredients.end());
    if(isPresent){
        cout<<"ingredient already present"<<endl;
    }
    ingredients.push_back(ingredient);
    
}
