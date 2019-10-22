#pragma once
#include "projectImports.h"
class transportation {
public:
	transportation();
	~transportation();
protected:
	int getNumberOfPassengers();
	void setNumberOfPassengers(int);
	string getDestinationName();
	void setDestinationName(string);
	double getMilesToDestination();
	void setMilesToDestination();
private:
	int numberOfPassengers;
	string destinationName;
	double milesToDestination;
};

