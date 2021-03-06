/**
 * @file GPIOpin.h
 * @author Ben
 * @brief Header file for the class representing a GPIO pin.
 * @version 0.1
 * @date 2018-11-28
 * 
 * @copyright Copyright (c) 2018
 * 
 */
#ifndef GPIO_CLASS_H
#define GPIO_CLASS_H

#include <string>
#include <fstream>
#include <string>
#include <iostream>
#include <sstream>

/**
 * @brief Class representing a pin on the Raspberry Pi controller.
 */

class GPIOpin
{
public:
    GPIOpin();  // create a GPIO object that controls GPIO4 (default
    GPIOpin(std::string x); // create a GPIO object that controls GPIOx, where x is passed to this constructor
    int export_gpio(); // exports GPIO
    int unexport_gpio(); // unexport GPIO
    int setdir_gpio(std::string dir); // Set GPIO Direction
    int setval_gpio(std::string val); // Set GPIO Value (putput pins)
    int getval_gpio(std::string& val); // Get GPIO Value (input/ output pins)
    std::string get_gpionum(); // return the GPIO number associated with the instance of an object
private:
    std::string gpionum; // GPIO number associated with the instance of an object
};

#endif