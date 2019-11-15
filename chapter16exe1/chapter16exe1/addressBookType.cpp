#include "addressBookType.h"

addressBookType::addressBookType() {
	head = NULL;
	tail = NULL;
}

void addressBookType::createNode(extPersonType personin) {
	personNode* temp = new personNode;
	temp->person = personin;
	temp->next = NULL;
	if(head==NULL) {
		head = temp;
		tail = temp;
		temp = NULL;
	}
	else {
		tail->next = temp;
		tail = temp;
	}
}

void addressBookType::display() {
	personNode* temp = new personNode;
	temp = head;
	while (temp != NULL) {
		temp->person.print();
		temp = temp->next;
	}
}

void addressBookType::insertAtStart(extPersonType personin) {
	personNode* temp = new personNode;
	temp->person = personin;
	temp->next = head;
	head = temp;
}

void addressBookType::insertAtEnd(extPersonType personin) {
	personNode* temp = new personNode;
	temp->person = personin;
	temp->next = NULL;
	if (head == NULL) {
		head = temp;
		tail = temp;
		temp = NULL;
	}
	else {
		tail->next = temp;
		tail = temp;
	}
}

void addressBookType::insertAtPos(int pos, extPersonType person) {
	personNode* pre = new personNode;
	personNode* cur = new personNode;
	personNode* temp = new personNode;
	cur = head;
	for(int i =0; i<pos;i++) {
		pre = cur;
		cur = cur->next;
	}
	temp->person = person;
	pre->next = temp;
	temp->next = cur;
}

void addressBookType::loadDataFromFile(string filePath) {
	ifstream inFile;
	string tempLine;
	string first, last, address, city, state, strzip, phone, relation, strday, strmonth, stryear;
	int zip, day, month, year;
	inFile.open(filePath);

	do {
		std::getline(inFile, tempLine);
		std::stringstream lineStream;
		lineStream << tempLine;
		getline(lineStream, first, ' ');
		getline(lineStream, last, ' ');
		getline(lineStream, address, ' ');
		getline(lineStream, city, ' ');
		getline(lineStream, state, ' ');
		getline(lineStream, strzip, ' ');
		zip = atoi(strzip.c_str());
		getline(lineStream, phone, ' ');
		getline(lineStream, relation, ' ');

		getline(lineStream, strday, ' ');
		day = atoi(strday.c_str());
		getline(lineStream, strmonth, ' ');
		month = atoi(strmonth.c_str());
		getline(lineStream, stryear, ' ');
		year = atoi(stryear.c_str());
		
		extPersonType temp(first, last, address, city, state, zip, phone, relation, day, month, year);
		createNode(temp);
		} while (!inFile.eof());
}
