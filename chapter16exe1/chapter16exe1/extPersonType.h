#pragma once
#include "personType.h"
#include "Date.h"
#include "addressType.h"
class extPersonType :
	public personType, public addressType, public Date
{
public:
	void print() const;
	string getPhoneNumber() const;
	void setPhoneNumber(string phone);
	string getRelation() const;
	void setRelation(string relationIn = "");
	extPersonType(string first = "", string last = "", string addressin = "", string cityin ="", string statein = "", int zip = 0, string phone = "", string relationin = "", int day = 1, int month = 1, int year = 2011);
private:
	string phoneNumber;
	string relation;
};

