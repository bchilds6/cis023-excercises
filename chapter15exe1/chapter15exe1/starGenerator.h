#pragma once
// add iostream and use the common functions
#include <iostream>
using std::cout;
using std::endl;


class starGenerator
{
public:
	// constructor
	starGenerator();
	//destructor
	~starGenerator();
	
	// function that will create the pattern given a number of lines
	/* input = 4
	  ****
	  ***
	  **
	  *
	  **
	  ***
	  ****
	 */
	void createPattern(int);
};

