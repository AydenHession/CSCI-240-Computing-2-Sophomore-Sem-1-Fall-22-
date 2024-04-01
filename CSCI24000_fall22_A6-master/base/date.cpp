//date.cpp


#include <iostream>
#include <string>
#include "date.h"

date::date()
{
	birthDay  = "0";
	birthMonth = "0";
	birthYear = "0";

	gradDay = "0";
	gradMonth = "0";
	gradYear = "0";
	gradYear = "0";
	gradYear = "0";
}//end date()

date::date(std::string BDAY, std::string BMONTH, std::string BYEAR, std::string GDAY, std::string GMONTH, std::string GYEAR)
{
	date::birthDay = BDAY;
	date::birthMonth = BMONTH;
	date::birthYear = BYEAR;

	date::gradDay = GDAY;
	date::gradMonth = GMONTH;
	date::gradYear = GYEAR;
}//end date(stuff)

/*------------------------------
 * BREAK FOR BIRTHDAY FUNCTIONS
 * -----------------------------*/

std::string date::getBirthDay()
{
	return birthDay;
}

void date::setBirthDay(std::string bDay)
{
	date::birthDay = bDay;
}

std::string date::getBirthMonth()
{
	return birthMonth;
}

void date::setBirthMonth(std::string bMon)
{
	date::birthMonth = bMon;
}

std::string date::getBirthYear()
{
	return birthYear;
}

void date::setBirthYear(std::string bYear)
{
	date::birthYear = bYear;
}

/*-------------------------------------
 * BREAK FOR GRADUATION DATE FUNCTIONS
 * ------------------------------------*/

std::string date::getGradDay()
{
	return gradDay;
}

void date::setGradDay(std::string gDay)
{
	date::gradDay = gDay;
}

std::string date::getGradMonth()
{
	return gradMonth;
}

void date::setGradMonth(std::string gMon)
{
	date::gradDay = gMon;
}

std::string date::getGradYear()
{
	return gradYear;
}

void date::setGradYear(std::string gYear)
{
	date::gradYear = gYear;
}

/*--------------------------
 * BREAK FOR PRINT FUNCTION
 * -------------------------*/

void date::printDates()
{

	std::cout << birthMonth << "/" << birthDay << "/" << birthYear << "," << gradMonth << "/" << gradDay << "/" << gradYear;
}




