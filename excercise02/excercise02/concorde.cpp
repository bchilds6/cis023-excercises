#include "concorde.h"


// default constructor
concorde::concorde() {
	// set each of the four variables to default values
	setNumberOfPassengers(1);
	setDestinationName("");
	setMilesToDestination(0);
	e.setMilesPerHour(1);
}

// constructor with inputs
concorde::concorde(int iNumOfPassengers, string sDestinationName, double dMilesToDestination, double dMilesPerHour) {
	// set each of the four variables to the passed values
	setNumberOfPassengers(iNumOfPassengers);
	setDestinationName(sDestinationName);
	setMilesToDestination(dMilesToDestination);
	e.setMilesPerHour(dMilesPerHour);
}

// destructor
concorde::~concorde() {
}

// print function
void concorde::print() {
	// print out:
	cout << "I have " << getNumberOfPassengers() << " passengers" << endl;		// number of passengers
	cout << "I am going to " << getDestinationName() << endl;		// destination name
	cout << "I go " << e.getMilesPerHour() << " MPH" << endl;		// speed in miles per hour
	// 
	// call the engine function to calculate time to destination using the speed and distance.
	cout << "It will take me " << e.getTimeToDestination(getMilesToDestination(), e.getMilesPerHour()) << " hours to arrive" << endl;
}
