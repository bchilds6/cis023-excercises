#include "engine.h"



engine::engine() {
	milesPerHour = 1;
}
engine::engine(double dInput):
milesPerHour(dInput)
{
}

engine::~engine() {
}

double engine::getTimeToDestination(int iTotalMiles, int iMilesPerHour) {
	return iTotalMiles * 1.0 / iMilesPerHour;
}

double engine::getMilesPerHour() {
	return milesPerHour;
}

void engine::setMilesPerHour(double dInput) {
	milesPerHour = dInput;
}
