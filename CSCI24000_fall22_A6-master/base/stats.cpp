//stats.cpp


#include <iostream>
#include <string>
#include "stats.h"

stats::stats()
{
	stats::GPA = "0";
	stats::creditHours = "0";
}//end stats()

stats::stats(std::string GPA, std::string creditHours)
{
	stats::GPA = GPA;
	stats::creditHours = creditHours;
}//end stats(s,S)

std::string stats::getGPA()
{
	return stats::GPA;
}//end getGPA()

void stats::setGPA(std::string GradePointAverage)
{
	stats::GPA = GradePointAverage;
}//end setGPA()

std::string stats::getCreditHours()
{
	return stats::creditHours;
}//end getcredithours()

void stats::setCreditHours(std::string CH)
{
	stats::creditHours = CH;
}//end getcredithours()

void stats::printStats()
{

	std::cout << GPA << ", " << creditHours;
}
