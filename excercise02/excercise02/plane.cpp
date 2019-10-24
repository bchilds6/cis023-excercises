#include "plane.h"


// constructor
plane::plane() {
}

// destructor
plane::~plane() {
}

// print out:
void plane::print() {
	// a print function that prints:
	// the name of the destination
	cout << "Destination: " << getDestinationName() << endl;
	// the time to destination according to the function from the engine
	cout << "Time to Destination: " << e.getTimeToDestination(getMilesToDestination(), e.getMilesPerHour()) << " hours" << endl;
}