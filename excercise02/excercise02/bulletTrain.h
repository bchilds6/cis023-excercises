#pragma once
#include "train.h"

class bulletTrain : public train
{
public:
	bulletTrain();		// default constructor
	bulletTrain(int, string, double, double);		// constructor with values
	~bulletTrain();		// destructor
	void print();	// print function that prints:
	// the number of passengers,
	// the name of the destination,
	// the distance to the destination,
	// the speed in MPH
};

