#include "transportation.h"



transportation::transportation() {

}
transportation::transportation(int iNumberOfPassengers, string sDestinationName, double dDistance) :
	numberOfPassengers(iNumberOfPassengers),
	destinationName(sDestinationName),
	milesToDestination(dDistance)
{
	
}


transportation::~transportation() {

}

int transportation::getNumberOfPassengers() {
	return numberOfPassengers;
}

void transportation::setNumberOfPassengers(int iInput) {
	numberOfPassengers = iInput;
}

string transportation::getDestinationName() {
	return destinationName;
}

void transportation::setDestinationName(string sInput) {
	destinationName = sInput;
}

double transportation::getMilesToDestination() {
	return milesToDestination;
}

void transportation::setMilesToDestination(double dInput) {
	milesToDestination = dInput;
}
