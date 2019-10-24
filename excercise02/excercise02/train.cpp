#include "train.h"


// default constructor
train::train() {
}

// destructor
train::~train() {
}

// print function
void train::print() {
	// a print function that prints:
	// the name of the destination
	cout << "Destination: " << getDestinationName() << endl;
	// the time to destination according to the function from the engine
	cout << "Time to Destination: " << e.getTimeToDestination(getMilesToDestination(), e.getMilesPerHour()) << " hours" << endl;
}
