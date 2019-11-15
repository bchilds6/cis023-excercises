#include "extPersonType.h"

void extPersonType::print() const {
	personType::print();
	addressType::print();
	printf(" %s %s ", phoneNumber.c_str(), relation.c_str());
	Date::print();
	cout << endl;
}

string extPersonType::getPhoneNumber() const {
	return phoneNumber;
}

void extPersonType::setPhoneNumber(string phone) {
	phoneNumber = phone;
}

string extPersonType::getRelation() const {
	return relation;
}

void extPersonType::setRelation(string relationIn) {
	relation = relationIn;
}

extPersonType::extPersonType(string first, string last, string addressin, string cityin, string statein, int zip,
	string phone, string relationin, int day, int month, int year):
phoneNumber(phone),
relation(relationin)
{
	setName(first, last);
	setAddress(addressin, cityin, statein, zip);
	setDay(day);
	setMonth(month);
	setYear(year);
}
