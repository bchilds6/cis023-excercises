#include "car.h"



car::car() {

}


car::~car() {

}

void car::print() {
	cout << "Destination: " << getDestinationName() << endl;
	cout << "Time to Destination: " << e.getTimeToDestination(getMilesToDestination(), e.getMilesPerHour()) << " hours" << endl;
}
