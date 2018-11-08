#include <fstream>
#include <vector>
#include <string>
#include Drink.h
#include Liquid.h

using namespace std;

class DrinkFactory {

	private:
		vector<Drink> drinks; ///< array to hold the drink recipes created and returned by the factory
		vector<Liquid> liquids; ///< array to hold the liquids created and returned by the factory
		string DrinkFileName; ///< file name to read the drink recipes
		vector<string> split(string, string); // function to parse lines from the tet file 
		Liquid findLiquid(string); // function to find a liquid within the vector of liquids

	public:
		DrinkFactory (string file) {
			DrinkFileName = file; // file to read the drink recipe
		}

		vector<Drink> getDrinks() {
			string drinkLine; // line from the drink file 
			ifstream DrinkFile; // file to read from
			DrinkFile.open(DrinkFileName);  // opens file for reading
			vector<Liquid> listL = getLiquid(); // list to store all liquids
			while(getline(DrinkFile, drinkLine)) { 
				vector<Liquid> recipe; // recipe for current drink
				int namePos = drinkLine.find(";"); // splits the line to get the name
				string name = drinkLine.substr(0, namePos); // gets the name of the current drink
				drinkLine.erase(0, namePos+1); // adjusts the string
				vector<string> currentD = split(drinkLine, ":"); // gets the ingredients for the current drink
			
				//
				// loops through the ingredients
				for(int i = 0; i < currentD.size(); i++)
				{
					string currentName = (string) currentD.pop_back(); // gets current ingredient
					Liquid currentIngredient = findLiquid(currentName); // finds the liquid within the created vector
					recipe.push_back(currentIngredient); // adds the liquid to the recipe
				}
				Drink tempDrink = new Drink(name, recipe); // creates drink
				drinks.push_back(tempDrink); // adds drink
			}
			
			return drinks;
		}

		vector<Liquid> getLiquid() {
			string liquidLine; // holds line from file
			ifstream LiquidFile; // file to read from
			LiquidFile.open("LiquidFile.txt"); // opens file

			while(getLine(LiquidFile, liquidLine)) {
				vector<string> currentL = split(liquidLine, ":"); // splits line
				string type; // holds type of liquid
				float amount; // holds amount of liquid
				int pump; // holds the pumpId
				type = (string) currentL.pop_back(); // gets type
				string tempAm = (string) currentL.pop_back(); // gets amount
				string tempPump = (string) currentL.pop_back(); // gets pumpId
				//
				// conversions
				amount = strtof((tempAm).c_str(),0); 
				pump = stoi(tempPump);
				Liquid tempL = new Liquid(type, amount, pump);
				liquids.push_back(tempL); // adds liquid
			}
			
			return liquids;
		}
};

vector<string> split(string line, string del) {
	vector<string> list; // vector to hold elements from line
	size_t pos = 0; // position in line
	string token; // temp holder for elements
	while((pos = line.find(del)) != string::npos) // loops through string finding the delimeter
	{
		token = line.substr(0, pos); //  gets element
		list.push_back(token); // adds element to vector
		line.erase(0, pos + del.length()); // updates the line
	}
	return list;
};

Liquid findLiquid(string id) {
	for(int j = 0; j < liquids.size(); j++) // loops through liquids
	{
		if(strcmp((liquids[j].getType()), id) // checks if liquid is found
		{
			return liquids[j]; // returns the liquid if match
		}
	}
};

