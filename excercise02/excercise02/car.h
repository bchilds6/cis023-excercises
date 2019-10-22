#pragma once
//#include "projectImports.h"
#include "transportation.h"
#include "engine.h"
class car: public transportation
{
public:
	car();
	~car();
	void print();
protected:
	engine e;
private:
};

