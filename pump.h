/**
 * @file pump.h
 * @author Connor
 * @brief Header file for the pump class, which represents a pump which would be pouring the liquid on the machine.
 * @version 0.1
 * @date 2018-11-28
 * 
 * @copyright Copyright (c) 2018
 * 
 */
#ifndef PUMP_HPP
#define PUMP_HPP

#include "GPIOpin.h"
#include <unistd.h>
#include <iostream>

class pump {
    public:
        pump(int) ;

        void runPump(int, float) ;

        int getPumpID() ;
    private:
        // Contains the ID of the current pump.
        int pumpID;
};

#endif