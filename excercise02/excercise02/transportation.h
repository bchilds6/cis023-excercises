#pragma once
#include "projectWideImports.h"
class transportation {
public:
	transportation();	// default constructor
	transportation(int, string, double);	// constructor with values
	~transportation();	// destructor

	// getters
	
	int getNumberOfPassengers();		// number of passengers
	std::string getDestinationName();	// destination name
	double getMilesToDestination();		// miles to destination
		
	
	// setters
	
	void setNumberOfPassengers(int);		// number of passengers
	void setDestinationName(string);		// destination name
	void setMilesToDestination(double);		//  miles to destination


private:
	// class variables:
	int numberOfPassengers;	// an int to store the number of people that can fit on a vehicle
	string destinationName;	// a string to store the name of the target destination
	int milesToDestination;	// an int to hold the distance to the destination
};

