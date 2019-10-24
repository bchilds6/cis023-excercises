#include "engine.h"


// default constructor
engine::engine() {
	milesPerHour = 1;
}

// constructor with values
engine::engine(double dInput):
milesPerHour(dInput)
{
}

// destructor
engine::~engine() {
}

// a function that takes the distance and speed to calculate time
double engine::getTimeToDestination(int iTotalMiles, int iMilesPerHour) {
	// divide the distance by speed
	// according to the formula d=rt rearranged to d/r = t
	return iTotalMiles * 1.0 / iMilesPerHour;
}

// getters

// miles per hour
double engine::getMilesPerHour() {
	return milesPerHour;
}


// setters

// miles per hour
void engine::setMilesPerHour(double dInput) {
	milesPerHour = dInput;
}
