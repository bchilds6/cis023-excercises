#pragma once
#include "projectWideImports.h"
class engine
{
public:
	engine();			// default constructor
	engine(double);		// constructor with values
	~engine();			// destructor
	
	double getTimeToDestination(int, int);
	// a function that takes in distance and the speed and calculates the time

	// getters
	double getMilesPerHour();		// miles per hour

	// setters
	void setMilesPerHour(double);	// miles per hour
private:
	double milesPerHour;	// private double for miles per hour

};

