#pragma once
#include "projectWideImports.h"
#include "car.h"
class mustang : public car
{
public:
	mustang();
	mustang(int, string, double, double);
	~mustang();
	void print();	// print function that prints:
					// the number of passengers,
					// the name of the destination,
					// the distance to the destination,
					// the speed in MPH
};

