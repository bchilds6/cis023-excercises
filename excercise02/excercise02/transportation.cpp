#include "transportation.h"


// default constructor
transportation::transportation() {

}

// constructor with values
transportation::transportation(int iNumberOfPassengers, string sDestinationName, double dDistance) :
	// initialize the class variables
	numberOfPassengers(iNumberOfPassengers),
	destinationName(sDestinationName),
	milesToDestination(dDistance)
{
	
}

// destructor
transportation::~transportation() {

}

// getters

// number of passengers
int transportation::getNumberOfPassengers() {
	return numberOfPassengers;		
}

// distance to destination
double transportation::getMilesToDestination() {
	return milesToDestination;
}

// destination name
string transportation::getDestinationName() {
	return destinationName;
}


// setters

// destination name
void transportation::setDestinationName(string sInput) {
	destinationName = sInput;
}

// number of passengers
void transportation::setNumberOfPassengers(int iInput) {
	numberOfPassengers = iInput;
}

// distance to destination
void transportation::setMilesToDestination(double dInput) {
	milesToDestination = dInput;
}
