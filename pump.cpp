/**
 * @file pump.cpp
 * @author Connor, Ben
 * @brief File representing a pump object to pour drinks.
 * @version 0.1
 * @date 2018-11-28
 * 
 * @copyright Copyright (c) 2018
 * 
 */
#include "pump.h"
using namespace std;

/**
 * @brief Construct a new pump object.
 * 
 * @param ID is the unique identifier for the pump.
 */
pump::pump(int ID /**< [in] id of the current pump. */) {
    pumpID = ID;
}

/**
 * @brief Runs pump pumpID for amount time.
 * 
 * @param pumpID Pump ID to run.
 * @param amount Amount of time to run the pump for.
 */
void pump::runPump(int pumpID /**< [in] ID of the pump to run. */, float amount/**< [in] Amount of time for the pump to run.*/) {
    // Temporary print statement until we figure out actual peripheral commands
    cout << "This is pump: " << pumpID << " running for: " << amount << " mili seconds." << endl;

    string pump = to_string(pumpID);
    GPIOpin pin(pump);

    //exporting the pin(setting it up)
    if(pin.export_gpio()){
        cout << "export success" << endl;
        if(pin.setdir_gpio("out")){
            cout << "direction set" << endl;
            if(pin.setval_gpio("1")){
                cout << "pin on" << endl;
                sleep(amount/100);
                if(pin.setval_gpio("0")){
                    cout << "pin off" << endl;
                }
            }
        }
        if(pin.unexport_gpio()){
            cout << "unexport success" << endl;
        }
    }else{
        cout << "export not returning properly" << endl;
    }



    //setting the pin to output the power(to the pump)
    

    //sending output to the pump from the GPIO pin (pump on)
    

    //leave the pump runnig for a given amount of time(in MILIseconds)
    

    //stopping the outpup to the pump (pump off)
    

    //unexporting the pin (un setting it up??)
    
}

/**
 * @brief Returns the ID of the current pump.
 * 
 * @return int Returns the ID of the current
 */
int pump::getPumpID() {
    return pumpID;
}