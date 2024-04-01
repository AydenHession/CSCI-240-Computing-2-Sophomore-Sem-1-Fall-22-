//worker.cpp

#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include "Member.h"
#include "Worker.h"
#include "MemberLocker.h"
#include "MemberPriority.h"
#include "MemberStats.h"
#include <array>
#include <string.h>

Worker::Worker()
{
	Worker::WorkerPassword = "11111";
}//end constructor

Worker::Worker(std::string password)
{
	Worker::WorkerPassword = "11111";
}//end constructor


void Worker::splitTips()
{

	std::string date;
	std::string names;
	int workers; 
	float hours;
	float hourlydistribution;
	float tips;

	std::ofstream WorkerTipsAndHours;
	std::string currentLine;
	std::stringstream ss;
	

	WorkerTipsAndHours.open("WorkerTipsAndHours.dat");


	
	std::cout << "How many people worked today?: ";
	std::cin >> workers;
	std::cout << "\n" << workers << " workers worked today\n";

	std::cout << "What is todays date? (Month,day,year)\n";
	std::cin >> date;
	std::cout << "\nYou said todays date was " << date << "\n";

	std::cout << "How much money was made today in tips? \n";
	std::cin >> tips;
	std::cout << "\nYou said today's tip total was " << tips << "\n";

	std::cout << "Who " << workers << " workers worked today? type as (worker,worker,worker,...)\n";
	std::cin >> names;
	std::cout << "\n" << names << " worked today\n";
	

	for(int i = 0; i<workers; i++)
	{
		float time = 0;
		std::cout << "how many hours a person work?\n ";
		std::cin >> time;
		hours +=time;
	}

	std::cout << "\n" << hours << " are the total hours worked today\n";
	
	hourlydistribution = (tips) / (hours);

	std::cout << "\n\n" << "Hourly tip distribution is in the WorkerTipsAndHours.dat File" << std::endl;

	WorkerTipsAndHours << date << "\n" << names << "\n" << hours << "\n" << tips << "\n" << hourlydistribution << std::endl;

	WorkerTipsAndHours << "\n================================\n" << std::endl;

	WorkerTipsAndHours.close();
}//end of tip thing

void Worker::searchLocker(std::string Name)
{
	//if member->getname().equals(name) then print the locker information using the print from MEMBER.cpp
/*	
	std::ifstream inFile;
	std::string currentLine;
	std::stringstream ss;

	inFile.open("AllMemberLocker");

	Member *MEMBERLOCKERARRAY = new Member[200];

	std::string tempMemLine;
	
	for(int i = 0; i < 200; i++)
	{
		getline(inFile, tempMemLine);
		MEMBERLOCKERARRAY[i].setMember(tempMemLine);
	}
	
	int j = sizeof(MEMBERLOCKERARRAY) / sizeof(MEMBERLOCKERARRAY[0]); //length calculation

	for(int i = 0; i < 50 ; i++)
	{
		if ((MEMBERLOCKERARRAY[i].getFirstName())==(Name))
		{
			std::cout << MEMBERLOCKERARRAY[i].printMemberLocker() << std::endl;
		}
		else if ((MEMBERLOCKERARRAY[i].getLastName()) == (Name))
		{
			std::cout << MEMBERLOCKERARRAY[i].printMemberLocker() << std::endl;
		}
	}

	inFile.close();
	delete[] MEMBERLOCKERARRAY;
*/

	
	std::ifstream inFile;
	std::ofstream outFile;

	std::string EventName;

	EventName = "Event Name";

	inFile.open("AllMemberLocker.dat");
	//outFile.open("tempFile.txt",std::ofstream::out);

	std::string currentLine;
	std::stringstream converter;
	std::stringstream ss;
	
	std::string firstNameOne;
       	std::string lastNameOne;	
	
	//std::string firstNameTwo;
	//std::string lastNameTwo;

	//int counter;
	//int hole = 0;
	//counter = 0;
	std::cout << "\n\nLast,First,Color,Brand,Material,Logo,LockerNumber\n";
		while(getline(inFile, currentLine))
		{


			ss.clear();
			ss.str("");

			ss.str(currentLine);

			getline(ss,firstNameOne,',');
			getline(ss,lastNameOne,',');

			if(firstNameOne == Name || lastNameOne == Name)
			{
				std::cout << currentLine << std::endl;
			}
		}
	inFile.close();
}//end of Worker search


void Worker::changeMemberLockerInfo(std::string first, std::string last)
{
	std::ifstream inFile;
	std::ofstream outFile;

	inFile.open("AllMemberLocker.dat");
	outFile.open("AllMemberLocker.dat",std::ios::app);
	
	std::string color;
	std::string brand;
	std::string material;
	std::string logo;
	std::string number;


	std::cout << "what is the color of the bag?" << std::endl;
	std::cin >> color;

	std::cout << "\nwhat is the brand of the bag?" << std::endl;
	std::cin >> brand;

	std::cout << "\nwhat is the material of the bag?" << std::endl;
	std::cin >> material;

	std::cout << "\nis there a CCI logo? 0-no 1-yes" << std::endl;
	std::cin >> logo;

	std::cout << "\nwhat locker number are they being assigned ?" << std::endl;
	std::cin >> number;

	if(inFile.is_open())
	{
		outFile << last << "," << first << "," << color << "," << brand << "," << material << ","<< logo << "," << number << std::endl;
	}
	
	std::cout << "\nThe new member locker info is in AllMemberLocker.dat" << std::endl;
	inFile.close();
	outFile.close();


}
