#include "libraries.h"
#include "extPersonType.h"
#include "addressBookType.h"
int main() {
	addressBookType addressBook;
	extPersonType person7("first7", "last7", "house_address7", "city7", "state7", 77777, "phone_number7", "relation7", 7, 7, 2007),person8("first8", "last8", "house_address8", "city8", "state8", 88888, "phone_number8", "relation8", 8, 8, 2008), person9("first9", "last9", "house_address9", "city9", "state9", 99999, "phone_number9", "relation9", 9, 9, 2009);
	
	addressBook.loadDataFromFile("data.txt");
	addressBook.insertAtStart(person7);
	addressBook.insertAtEnd(person8);
	addressBook.insertAtPos(2, person9);
	addressBook.display();
	system("pause");
	return 0;
}