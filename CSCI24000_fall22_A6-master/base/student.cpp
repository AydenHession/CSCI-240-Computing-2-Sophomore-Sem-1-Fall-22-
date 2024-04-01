//student.cpp


#include <iostream>
#include <string>
#include <sstream>
#include "student.h"
#include "location.h"
#include "stats.h"
#include "date.h"

student::student()
{
	student::firstName = "";
	student::lastName = "";
	student::studentLocation = new location();
	student::studentDates = new date();
	student::studentStats = new stats();
}

student::student(std::string StudentLineToParseThrough)
{
	//initialize the line so that we can getline() through it
	std::stringstream ss(StudentLineToParseThrough);
	

	//initialize object variables on the heap
	student::studentLocation = new location();
	student::studentDates = new date();
	student::studentStats = new stats();

	//list of temporary variables that make up every class, godbless the UML diagram
	//===================================================
	//date variables
	std::string tDOB;
	std::string tMOB;
	std::string tYOB;

	std::string tDOG;
	std::string tMOG;
	std::string tYOG;

	//location variables
	std::string tADDone;
	std::string tADDtwo;
	std::string tCity;
	std::string tState;
	std::string tZip;

	//stats variables
	std::string tGPA;
	std::string tCH;

	//====================================================
	
	/*----------STUDENTS.DAT ORDERED LIKE----------
		, , , , , , , / / , / / , , (\N)
	**----------STUDENTS.DAT ORDERED LIKE----------*/
	
	getline(ss, student::lastName, ',');
	getline(ss, student::firstName, ',');
	getline(ss, tADDone, ',');
	getline(ss, tADDtwo, ',');
	getline(ss, tCity, ',');
	getline(ss, tState, ',');
	getline(ss, tZip, ',');
	getline(ss, tDOB, '/');
	getline(ss, tMOB, '/');
	getline(ss, tYOB, ',');
	getline(ss, tDOG, '/');
	getline(ss, tMOG, '/');
	getline(ss, tYOG, ',');
	getline(ss, tGPA, ',');
	getline(ss, tCH, ',');

	
	//set the variables from getline to object variables
	//``````````````````````````````````````````````````````
	//dates
	student::studentDates -> setBirthDay(tDOB);
	student::studentDates -> setBirthMonth(tMOB);
	student::studentDates -> setBirthYear(tYOB);

	student::studentDates -> setGradDay(tDOG);
	student::studentDates -> setGradMonth(tMOG);
	student::studentDates -> setGradYear(tYOG);

	//location
	student::studentLocation -> setAddressOne(tADDone);
	student::studentLocation -> setAddressTwo(tADDtwo);
	student::studentLocation -> setCity(tCity);
	student::studentLocation -> setZip(tZip);
	student::studentLocation -> setState(tState);

	//stats
	student::studentStats -> setCreditHours(tCH);
	student::studentStats -> setGPA(tGPA);
	//```````````````````````````````````````````````````````
}//end student(stuff) 

// *---DECONSTRUCTOR---*

student::~student()
{
	delete studentLocation;
	delete studentDates;
	delete studentStats;
}

/*--------------------------
 * BREAK FOR NAME FUNCTIONS
 * -------------------------*/

std::string student::getFirstName()
{
	return student::firstName;
}

void student::setFirstName(std::string StudFirstName)
{
	student::firstName = StudFirstName;
}

std::string student::getLastName()
{
	return student::lastName;
}

void student::setLastName(std::string StudLastName)
{
	student::lastName = StudLastName;
}

/* -----------------------------
 * BREAK FOR LOCATION FUCNTIONS
 * -----------------------------*/

location student::getStudentLocation()
{
	return *student::studentLocation;	
}

void student::setStudentLocation(location * LOCAL)
{
	student::studentLocation = LOCAL;
}

/*--------------------------
 * BREAK FOR DATE FUNCTIONS
 * -------------------------*/

date student::getStudentDates()
{
	return *student::studentDates;
}
void student::setStudentDates(date * TIMES)
{
	student::studentDates = TIMES;
}

/*-------------------------------------
 * BREAK FOR STATISTICALLLLL FUCNTIONS
 * ------------------------------------*/

stats student::getStudentStatistics()
{
	return *student::studentStats;
}

void student::setStudentStatistics(stats * DATAS)
{
	student::studentStats = DATAS;
}


/****************************************
 ----------------------------------------
 BREAK IN THE CODE FOR MY PRINT FUNCTIONS
 ----------------------------------------
 ****************************************/

std::string student::printAll()
{
	std::string THERETURN;
	
//	std::string tempDates;
//	std::string tempLocations;
//	std::string tempStats;

//	tempLocations = studentLocation.getStudentLocation().getAddressOne();
	

	THERETURN = lastName + "," + firstName + "," + student::studentLocation->getAddressOne() + "," + student::studentLocation->getAddressTwo() + "," + student::studentLocation->getCity() + "," + student::studentLocation->getState() + "," + student::studentLocation->getZip() + "," + student::studentDates->getBirthMonth() + "/" + student::studentDates->getBirthDay() + "/" + student::studentDates->getBirthYear() + "," + student::studentDates->getGradMonth() + "/" + student::studentDates->getGradDay() + "/" +student::studentDates->getGradYear() + "," + student::studentStats->getGPA()+ "," + student::studentStats->getCreditHours();

	return THERETURN;

	/*
	std::cout << firstName << " " << lastName;
	std::cout << ", ";
	studentLocation -> printLocation();
	std::cout << ", ";
	studentDates -> printDates();
	std::cout << ", ";
	studentStats -> printStats();*/

}

std::string student::printNames()
{
	std::string NAMERETURN;

	NAMERETURN = firstName + " " + lastName;

	return NAMERETURN;

	//std::cout << firstName << " " << lastName;
}


void student::setStudent(std::string StudentLineToParseThrough)
{
	//initialize the line so that we can getline() through it
	std::stringstream ss(StudentLineToParseThrough);
	

	//initialize object variables on the heap
	student::studentLocation = new location();
	student::studentDates = new date();
	student::studentStats = new stats();

	//list of temporary variables that make up every class, godbless the UML diagram
	//===================================================
	//date variables
	std::string tDOB;
	std::string tMOB;
	std::string tYOB;

	std::string tDOG;
	std::string tMOG;
	std::string tYOG;

	//location variables
	std::string tADDone;
	std::string tADDtwo;
	std::string tCity;
	std::string tState;
	std::string tZip;

	//stats variables
	std::string tGPA;
	std::string tCH;

	//====================================================
	
	/*----------STUDENTS.DAT ORDERED LIKE----------
		, , , , , , , / / , / / , , (\N)
	**----------STUDENTS.DAT ORDERED LIKE----------*/
	
	getline(ss, student::lastName, ',');
	getline(ss, student::firstName, ',');
	getline(ss, tADDone, ',');
	getline(ss, tADDtwo, ',');
	getline(ss, tCity, ',');
	getline(ss, tState, ',');
	getline(ss, tZip, ',');
	getline(ss, tDOB, '/');
	getline(ss, tMOB, '/');
	getline(ss, tYOB, ',');
	getline(ss, tDOG, '/');
	getline(ss, tMOG, '/');
	getline(ss, tYOG, ',');
	getline(ss, tGPA, ',');
	getline(ss, tCH, ',');

	
	//set the variables from getline to object variables
	//``````````````````````````````````````````````````````
	//dates
	student::studentDates -> setBirthDay(tDOB);
	student::studentDates -> setBirthMonth(tMOB);
	student::studentDates -> setBirthYear(tYOB);

	student::studentDates -> setGradDay(tDOG);
	student::studentDates -> setGradMonth(tMOG);
	student::studentDates -> setGradYear(tYOG);

	//location
	student::studentLocation -> setAddressOne(tADDone);
	student::studentLocation -> setAddressTwo(tADDtwo);
	student::studentLocation -> setCity(tCity);
	student::studentLocation -> setZip(tZip);
	student::studentLocation -> setState(tState);

	//stats
	student::studentStats -> setCreditHours(tCH);
	student::studentStats -> setGPA(tGPA);
	//```````````````````````````````````````````````````````
}//end student(stuff) 

