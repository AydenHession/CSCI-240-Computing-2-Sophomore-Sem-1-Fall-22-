//Manager.cpp


#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include "Member.h"
#include "MemberStats.h"
#include "MemberLocker.h"
#include "MemberPriority.h"
#include "Manager.h"


Manager::Manager()
{
	ManagerPassword = "2222";
}//END CONSTRUCTOR

Manager::Manager(std::string pass)
{
	Manager::ManagerPassword = "22222";
}//end constructor


void Manager::OutingCarts()
{
	std::ifstream inFile;
	std::ofstream outFile;

	std::string EventName;

	EventName = "Event Name";

	inFile.open("ExampleOutingName.csv");
	outFile.open("tempFile.txt",std::ofstream::out);

	std::string currentLine;
	std::stringstream converter;
	std::stringstream ss;
	
	std::string firstNameOne;
       	std::string lastNameOne;	
	
	std::string firstNameTwo;
	std::string lastNameTwo;

	int counter;
	int hole = 0;
	counter = 0;

		while(getline(inFile, currentLine))
		{

			if ((counter % 18) != 0)
			{
				hole = counter%18;
			}
			else
			{
				hole = 18;
			}

			ss.clear();
			ss.str("");

			ss.str(currentLine);
			if (counter <= 18)
			{
			getline(ss,firstNameOne,',');
			getline(ss,lastNameOne);

			counter++;
				outFile << "Country Club of Indianapolis\n" << EventName << "\nHole: " << hole << "\n" << firstNameOne << " " << lastNameOne << "\n" << firstNameTwo << " " << lastNameTwo << "\n";

			}
			else
			{
				getline(ss,firstNameOne,',');
				getline(ss,lastNameOne);
			counter++;	
			outFile << "Country Club of Indianapolis\n" << EventName << "\nHole: " << hole << "\n" << firstNameOne << " " << lastNameOne << "\n" << firstNameTwo << " " << lastNameTwo << std::endl;
			}
		}

		inFile.close();
		outFile.close();	

}//end outing carts()
