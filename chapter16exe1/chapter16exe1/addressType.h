#pragma once
#include "libraries.h"
class addressType {
public:
	void print() const;
	void setAddress(string addressin, string cityin, string statein, int zip);
	string getAddress() const;
	string getCity() const;
	string getState() const;
	int getZipCode() const;
	addressType(string addressin = "", string cityin = "", string statein = "", int zip = 0);
private:
	string streetAddress, city, state;
	int zipCode;
};

