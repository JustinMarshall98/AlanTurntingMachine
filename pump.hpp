#ifndef PUMP_HPP
#define PUMP_HPP

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