#include "projectWideImports.h"
// the 3 high level objects
#include "mustang.h"
#include "bulletTrain.h"
#include "concorde.h"
int main() {
	// initialize each object with values
	mustang mustang1(4, "Saint George", 680, 70);
	bulletTrain bulletTrain1(50, "Los Angeles", 386, 80);
	concorde concorde1(20, "New York City", 2816.5, 1341);
	
	// call the print function for each object type
	mustang1.print();
	bulletTrain1.print();
	concorde1.print();

	// pause before exiting
	system("pause");
	return 0;
}