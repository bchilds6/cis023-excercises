#pragma once
#include "projectImports.h"
#include "car.h"
class mustang : public car
{
public:
	mustang();
	mustang(int, string, double, double);
	~mustang();
	void print();
};

