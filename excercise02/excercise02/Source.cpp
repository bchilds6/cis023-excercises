#include "projectImports.h"
#include "transportation.h"
#include "car.h"
#include "mustang.h"
int main() {
	mustang must(4, "topeka", 250, 80);
	must.print();
	system("pause");
	return 0;
}