#include "addressType.h"

void addressType::print() const {
	printf("%s %s, %s %i ", streetAddress.c_str(), city.c_str(), state.c_str(), zipCode);
}

void addressType::setAddress(string addressin, string cityin, string statein, int zip) {
	streetAddress = addressin;
	city = cityin;
	state = statein;
	zipCode = zip;
}

string addressType::getAddress() const {
	return streetAddress;
}

string addressType::getCity() const {
	return city;
}

string addressType::getState() const {
	return state;
}

int addressType::getZipCode() const {
	return zipCode;
}

addressType::addressType(string addressin, string cityin, string statein, int zip):
	streetAddress(addressin),
city(cityin),
state(statein),
zipCode(zip)
{
	
}
