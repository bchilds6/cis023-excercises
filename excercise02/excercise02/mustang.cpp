#include "mustang.h"



mustang::mustang() {
	setNumberOfPassengers(1);
	setDestinationName("");
	setMilesToDestination(0);
	e.setMilesPerHour(1);
	
}

mustang::mustang(int iNumOfPassengers, string sDestinationName, double dMilesToDestination, double dMilesPerHour) {
	setNumberOfPassengers(iNumOfPassengers);
	setDestinationName(sDestinationName);
	setMilesToDestination(dMilesToDestination);
	e.setMilesPerHour(dMilesPerHour);
}


mustang::~mustang() {
	
}

void mustang::print() {
	cout << "I have " << getNumberOfPassengers() << " passengers" << endl;
	cout << "I am going to " << getDestinationName() << endl;
	cout << "I go " << e.getMilesPerHour() << " MPH" << endl;
	cout << "It will take me " << e.getTimeToDestination(getMilesToDestination(), e.getMilesPerHour()) << " hours to arrive" << endl;
}
