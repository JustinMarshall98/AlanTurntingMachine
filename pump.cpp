#include "pump.hpp"
using namespace std;

// Initializer function for a pipe object.
pump::pump(int ID) {
    pumpID = ID;
}

// Function that runs a pump with the specified ID (pumpID) for a certain amount of time (amount)
void pump::runPump(int pumpID, float amount) {
    cout << "This is pipe: " << pumpID << " running for: " << amount << " seconds." << endl;
}

// Function that gets ID of the current pump
int pump::getPumpID() {
    return pumpID;
}