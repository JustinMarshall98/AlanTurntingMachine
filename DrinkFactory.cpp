/**
 * @file DrinkFactory.cpp
 * @author Shawn
 * @brief Class the contains the factory for creating drinks from a file.
 * @version 0.1
 * @date 2018-11-28
 * 
 * @copyright Copyright (c) 2018
 * 
 */
#include "DrinkFactory.h"

using namespace std;

/**
 * @brief Construct a new Drink Factory object.
 * 
 * @param filename Contains a string representation of the name of the file containing a list of drinks.
 */
DrinkFactory::DrinkFactory(string filename)
{
	DrinkFileName = filename; // file to read the drink recipe
}

/**
 * @brief Method which reads through the provided and creates all of the drinks in the file.
 * 
 * @return vector<Drink> Vector representation of a list of drinks contained in the file.
 */
vector<Drink> DrinkFactory::getDrinks()
{
	string drinkLine;			   // line from the drink file
	ifstream DrinkFile;			   // file to read from
	DrinkFile.open(DrinkFileName); // opens file for reading
	//cout << "test" << endl;
	vector<Liquid> listL = getLiquid(); // list to store all liquids
	//cout << "test" << endl;
	//getline(DrinkFile, drinkLine);
	//cout << drinkLine << endl;
	while (getline(DrinkFile, drinkLine))
	{
		//cout << drinkLine << endl;
		vector<Liquid> recipe;						// recipe for current drink
		int namePos = drinkLine.find(";");			// splits the line to get the name
		string name = drinkLine.substr(0, namePos); // gets the name of the current drink
		//cout << drinkLine << endl;
		drinkLine.erase(0, namePos + 1);				 // adjusts the string
		vector<string> currentD = split(drinkLine, ":"); // gets the ingredients for the current drink

		// loops through the ingredients
		for (int i = 0; i < currentD.size(); i++)
		{
			Liquid currentIngredient = findLiquid(currentD[i]); // finds the liquid within the created vector
			recipe.push_back(currentIngredient);				// adds the liquid to the recipe
		}
		Drink tempDrink(name, recipe); // creates drink
		drinks.push_back(tempDrink);   // adds drink
	}
	return drinks;
}

/**
 * @brief Method that goes through the file containing a list of liquids, creating Liquid objects for each.
 * 
 * @return vector<Liquid> Returns a vector representation of a list containing all of the liquids contained in the file.
 */
vector<Liquid> DrinkFactory::getLiquid()
{
	string liquidLine;				   // holds line from file
	ifstream LiquidFile;			   // file to read from
	LiquidFile.open("LiquidFile.txt"); // opens file

	while (getline(LiquidFile, liquidLine))
	{
		vector<string> currentL = split(liquidLine, ":"); // splits line
		string type;									  // holds type of liquid
		float amount;									  // holds amount of liquid
		int pump;										  // holds the pumpId
		//type = currentL.back();//gets type
		//cout << currentL.size() << "this is" << endl;
		type = currentL[2];
		string tempAm = currentL[0];
		string tempPump = currentL[1];

		amount = strtof((tempAm).c_str(), 0);
		pump = stoi(tempPump);
		Liquid tempL(type, amount, pump);
		//export the gpio pin for the given liquid
		string pumpS = to_string(pump);
		GPIOpin pin(pumpS);
		
		if(pin.export_gpio() == 0){
			cout << "export success" << endl;
		}
		
		liquids.push_back(tempL); // adds liquid
	}
	return liquids;
}

/**
 * @brief Method for splitting a line in a text file.
 * 
 * @param line A string representation of a line that we want to split.
 * @param del A string representation of the delimiter to split at.
 * @return vector<string> A vector representation of a list containing the list of drinks or liquids in a file.
 */
vector<string> DrinkFactory::split(string line, string del)
{
	vector<string> list;						   // vector to hold elements from line
	size_t pos = 0;								   // position in line
	string token;								   // temp holder for elements
	while ((pos = line.find(del)) != string::npos) // loops through string finding the delimeter
	{
		token = line.substr(0, pos);	   //  gets element
		list.push_back(token);			   // adds element to vector
		line.erase(0, pos + del.length()); // updates the line
	}
	return list;
}

/**
 * @brief A method for going through the list of liquids, and finding the Liquid class based on an ID.
 * 
 * @param id A string representation of the ID representing a Liquid object.
 * @return Liquid Returns a Liquid object found using its ID.
 */
Liquid DrinkFactory::findLiquid(string id)
{
	for (int j = 0; j < liquids.size(); j++) // loops through liquids
	{
		//cout << "Liquids Test: "<< liquids[j].getType() << " " << id << liquids[j].getType().compare(id) << endl;
		if (!(liquids[j].getType()).compare(id)) // checks if liquid is found
		{
			return liquids[j]; // returns the liquid if match
		}
	}
}
