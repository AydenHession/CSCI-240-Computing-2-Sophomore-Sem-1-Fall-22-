//location.cpp


#include <iostream>
#include <string>
#include "location.h"

location::location()
{
	location::addressOne = "";
	location::addressTwo = "";
	location::city = "";
	location::state = "";
	location::zip = "00000";
}

location::location(std::string ADDRESSone, std::string ADDRESStwo, std::string CITY, std::string STATE, std::string ZIP)
{
	location::addressOne = ADDRESSone;
	location::addressTwo = ADDRESStwo;
	location::city = CITY;
	location::state = STATE;
	location::zip = ZIP;
}

/*-----------------------------
 * BREAK FOR ADDRESS FUNCTIONS
 * ----------------------------*/

std::string location::getAddressOne()
{
	return addressOne;
}

void location::setAddressOne(std::string ADDone)
{
	location::addressOne = ADDone;
}

std::string location::getAddressTwo()
{
	return addressTwo;
}

void location::setAddressTwo(std::string ADDtwo)
{
	location::addressTwo = ADDtwo;
}

/*--------------------------------------
 * BREAK FOR LOCAL COORDINATE FUNCTIONS
 * -------------------------------------*/

std::string location::getCity()
{
	return city;
}

void location::setCity(std::string cityName)
{
	location::city = cityName;
}

// *----END OF CITY FUNCTIONS----*

std::string location::getState()
{
	return state;
}

void location::setState(std::string stateName)
{
	location::state = stateName;
}

// *----END OF STATE FUNCTIONS ----*

std::string location::getZip()
{
	return zip;
}

void location::setZip(std::string zipNum)
{
	location::zip = zipNum;
}

/* ----------------------------------
 * BREAK FOR PRINT LOCATION FUNCTION
 * ----------------------------------*/

void location::printLocation()
{
	std::cout << addressOne << ", " << addressTwo << ", " << city << ", " << state << ", " << zip;
}
