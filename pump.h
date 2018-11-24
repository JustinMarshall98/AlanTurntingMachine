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
        int pumpID;
};

#endif