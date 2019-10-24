#pragma once
#include "transportation.h"
#include "engine.h"

class train: public transportation
{
public:
	train();	// constructor
	~train();	// destructor
	void print();	// a print function that prints:
	// the name of the destination
	// the time to destination according to the function from the engine
protected:
	engine e;	// protected engine class
};

