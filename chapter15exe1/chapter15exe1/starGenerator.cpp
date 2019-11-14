#include "starGenerator.h"



starGenerator::starGenerator() {
	// prompt for number if lines in the pattern
	cout << "Please input the number of lines in the pattern: ";
	// input the number of iterations
	int iterations;
	std::cin >> iterations;

	// call the pattern generator with the input
	createPattern(iterations);
}


starGenerator::~starGenerator() {
}

void starGenerator::createPattern(int iterations) {
	// rising pattern
	for (int i = iterations ;i > 0; i--) {
		// create an decreasing number of stars for every iteration 
		for (int n = 0; n < i;n++) {
			cout << "*";
		}
		// line break every iteration
		cout << endl;
	}
	
	// falling pattern
	for(int x = 2; x <= iterations;x++) {
		// create an increasing number of stars for every iteration
		for (int n = 0; n < x;n++) {
			cout << "*";
		}
		// line break every iteration
		cout << endl;
	}
}
