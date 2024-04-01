//main.cpp


#include <iostream>
#include <sstream>
#include <fstream>
#include "student.h"
#include "date.h"
#include "location.h"
#include "stats.h"

int main()
{
	//for parsing through "student.dat" file
	std::ifstream inFile;
	std::string currentLine;
	std::stringstream ss; //string stream, need to clear stream when parsing

	//two files
	std::ofstream fullReport;
	std::ofstream shortReport;

	//creating the files
	fullReport.open("fullReport.txt");
	shortReport.open("shortReport.txt");

	//opening in file
	inFile.open("students.dat");
	

	student *STUDENTARRAY = new student[50];
	
	std::string tempStudLine; //temporary student line to input all student data into the array
	for (int i = 0; i <50 ; i++)
	{
		getline(inFile, tempStudLine);
		STUDENTARRAY[i].setStudent(tempStudLine);
	}
	

	for (int j = 0; j < 50; j++)
	{
		fullReport << STUDENTARRAY[j].printAll() <<std::endl;
	}

	for (int k = 0; k < 50; k++)
	{
		shortReport << STUDENTARRAY[k].printNames() << std::endl;
	}

	fullReport.close();
	shortReport.close();
	inFile.close();


	delete[] STUDENTARRAY;
	return 0;
}
