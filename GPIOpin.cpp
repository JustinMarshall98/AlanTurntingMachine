/**
 * @file GPIOpin.cpp
 * @author Ben
 * @brief Class representing a pin on the Raspberry Pi controller.
 * @version 0.1
 * @date 2018-11-28
 * 
 * @copyright Copyright (c) 2018
 * 
 */
#include "GPIOpin.h"

using namespace std;

/**
 * @brief Construct a new GPIOpin object representing a pin on the Raspberry Pi with a default pin number.
 * 
 */
GPIOpin::GPIOpin()
{
    this->gpionum = "4"; //GPIO4 is default
}

/**
 * @brief Construct a new GPIOpin object representing a pin on the Raspberry Pi with a specified pin number.
 * 
 * @param gnum String representation of the pin number to create the GPIOpin object with.
 */
GPIOpin::GPIOpin(string gnum) //input is the pin you wish to modify
{
    this->gpionum = gnum;  //Instatiate GPIOClass object for GPIO pin number "gnum"
}

/**
 * @brief Method that allows access to the GPIO pin on the Raspberry Pi.
 * 
 * @return int Integer representation of the pin number to access.
 */
int GPIOpin::export_gpio()
{
    string export_str = "/sys/class/gpio/export";
    ofstream exportgpio;
    exportgpio.open(export_str.c_str()); // Open "export" file. Convert C++ string to C string. Required for all Linux pathnames
    if (exportgpio.is_open()){
        exportgpio << this->gpionum ; //write GPIO number to export
		exportgpio.close(); //close export file
		return 0;
    }
    return -1;

    
}

/**
 * @brief Method that disallows access to the GPIO pin on the Raspberry Pi.
 * 
 * @return int equivalent of a success or failure value.
 */
int GPIOpin::unexport_gpio()
{
    string unexport_str = "/sys/class/gpio/unexport";
    ofstream unexportgpio;
    unexportgpio.open(unexport_str.c_str()); //Open unexport file
    if (unexportgpio.is_open()){
        unexportgpio << this->gpionum ; //write GPIO number to unexport
		unexportgpio.close(); //close unexport file
		return 0;
    }
    cout << " OPERATION FAILED: Unable to unexport GPIO"<< this->gpionum <<" ."<< endl;
    return -1;

    
}

/**
 * @brief Method which sets the direction of the GPIO pin (in or out) always set to out for this project.
 * 
 * @param dir String representation of the direction to set the GPIO pin to.
 * @return int Integer value showing whether the direction was changed. (-1 for failed, 0 for success)
 */
int GPIOpin::setdir_gpio(string dir) //can only be "out" or "in"
{

    string setdir_str ="/sys/class/gpio/gpio" + this->gpionum + "/direction"; //creating the direction filepath using the GPIO name  
    ofstream setdirgpio; // open direction file for gpio
    setdirgpio.open(setdir_str.c_str());
    if (setdirgpio.is_open()){
		
		setdirgpio << dir; //write direction to direction file
		setdirgpio.close(); // close direction file
		return 0;
		
    }
    
    cout << " OPERATION FAILED: Unable to set direction of GPIO"<< this->gpionum <<" ."<< endl;
    return -1;

    
}

/**
 * @brief Method which sets the value of the GPIO pin.
 * 
 * @param val String representation of the value to set the value of the pin equal to.
 * @return int Integer value showing whether the value was changed. (-1 for failed, 0 for success)
 */
int GPIOpin::setval_gpio(string val)
{

    string setval_str = "/sys/class/gpio/gpio" + this->gpionum + "/value";
    ofstream setvalgpio; // open value file for gpio
    setvalgpio.open(setval_str.c_str());
    if (setvalgpio.is_open()){
        setvalgpio << val ;//write value to value file
		setvalgpio.close();// close value file
		return 0;
    }
	
	cout << " OPERATION FAILED: Unable to set the value of GPIO"<< this->gpionum <<" ."<< endl;
    return -1;
    
}

/**
 * @brief Method which retrieves and returns the value of the current GPIO pin.
 * 
 * @param val Value to store the value of the GPIO pin into.
 * @return int Integer value showing whether the direction was changed. (-1 for failed, 0 for success)
 */
int GPIOpin::getval_gpio(string& val){

    string getval_str = "/sys/class/gpio/gpio" + this->gpionum + "/value";
    ifstream getvalgpio;// open value file for gpio cant be done untill a pin has been exported and its direction has been set
    getvalgpio.open(getval_str.c_str());
    if(!getvalgpio.is_open()){
        cout << " OPERATION FAILED: Unable to get value of GPIO"<< this->gpionum <<" ."<< endl;
        return -1;
    }

    getvalgpio >> val ;  //read gpio value

    if(val != "0")
        val = "1";
    else
        val = "0";

    getvalgpio.close(); //close the value file
    return 0;
}

/**
 * @brief Method which retrieves and returns the number of the current GPIO pin.
 * 
 * @return string String representation of the number of the current GPIO pin.
 */
string GPIOpin::get_gpionum(){

return this->gpionum;

}
