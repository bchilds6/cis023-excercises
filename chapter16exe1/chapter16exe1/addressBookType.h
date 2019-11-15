#pragma once
#include "libraries.h"
#include "personNode.h"
#include "extPersonType.h"
class addressBookType {
public:
	void createNode(extPersonType person);
	void display();
	void insertAtStart(extPersonType personin);
	void insertAtEnd(extPersonType personin);
	void insertAtPos(int pos, extPersonType person);
	void loadDataFromFile(string filePath);
	addressBookType();
private:
	personNode* head, * tail;
	
};

