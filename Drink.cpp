#include "Drink.h"

using namespace std;

Drink::Drink(string d, vector<Liquid> tempIngredients){
    name = d;
    ingredients = tempIngredients;
}
Drink::Drink(){
    name="not set";
}

string Drink::getName(){
    return name;
}

vector<Liquid> Drink::getLiquids(){
    return ingredients;
}

void Drink::pour(){
    cout << "Drink Name: " <<  name << endl;
    cout << "Pouring Drink Ingredients: " << endl;
    for(int i = 0; i < ingredients.size(); i++){
        cout << ingredients[i].getType() << endl;
    }
}
