#pragma once
#include "transportation.h"
#include "engine.h"
class plane: public transportation
{
public:
	plane();
	~plane();
protected:
	engine e;
};

