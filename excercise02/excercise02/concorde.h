#pragma once
#include "plane.h"
class concorde : public plane
{
public:
	concorde();		// default constructor
	concorde(int, string, double, double);		// constructor with values
	~concorde();	// destructor
	
	void print();	// print function that prints:
					// the number of passengers,
					// the name of the destination,
					// the distance to the destination,
					// the speed in MPH
};

