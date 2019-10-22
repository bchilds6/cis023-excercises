#pragma once
#include "projectImports.h"
class engine
{
public:
	engine();
	engine(double);
	~engine();
	double getTimeToDestination(int, int);
	double getMilesPerHour();
	void setMilesPerHour(double);
private:
	double milesPerHour;

};

