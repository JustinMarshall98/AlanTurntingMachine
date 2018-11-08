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
    cout << "This is pipe: " << pumpID << " running for: " << amount << " seconds." << endl;
}

/**
 * @brief Returns the ID of the current pump.
 * 
 * @return int Returns the ID of the current
 */
int pump::getPumpID() {
    return pumpID;
}