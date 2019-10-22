#pragma once
#include "projectImports.h"
class transportation {
public:
	transportation();
	transportation(int, string, double);
	~transportation();
	int getNumberOfPassengers();
	void setNumberOfPassengers(int);
	std::string getDestinationName();
	void setDestinationName(string);
	double getMilesToDestination();
	void setMilesToDestination(double);

private:
	int numberOfPassengers;
	string destinationName;
	int milesToDestination;
};

