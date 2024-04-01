//Boss.cpp



#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <array>
#include "Boss.h"
#include "Member.h"
#include "MemberStats.h"
#include "MemberPriority.h"
#include "MemberLocker.h"

Boss::Boss()
{
	Boss::BossPassword = "33333";
}//end constructor

Boss::Boss(std::string password)
{
	Boss::BossPassword = "33333";
}//end constructor

void Boss::addMember(std::string First, std::string Last)
{
	std::ifstream inFile;
	std::ofstream outFile;

	inFile.open("AllMemberInfo.dat");
	outFile.open("AllMemberInfo.dat", std::ios::app);

	std::string color;
	std::string brand;
	std::string material;
	std::string logo;
	std::string number;

	std::string gender;
	std::string tees;
	std::string age;
	std::string average;

	std::string cart;
	std::string injury;
	std::string marraige;
	std::string kids;

	//break for locker variables
	std::cout << "\nwhat is the color of the bag?" << std::endl;
	std::cin >> color;

	std::cout << "\nwhat is the brand of the bag?" << std::endl;
	std::cin >> brand;

	std::cout << "\nwhat is the material of the bag?" << std::endl;
	std::cin >> material;

	std::cout << "\nis there a CCI logo? 0-no 1-yes" << std::endl;
	std::cin >> logo;

	std::cout << "\nwhat locker number are they being assigned ?" << std::endl;
	std::cin >> number;


	//break for stat variables
	std::cout << "\nwhat is the gender? 0-Male 1-Female" << std::endl;
	std::cin >> gender;

	std::cout << "\nwhat tees do they play (1 to 5)?" << std::endl;
	std::cin >> tees;

	std::cout << "\nhow old are they?" << std::endl;
	std::cin >> age;

	std::cout << "\nwhat is their average round?" << std::endl;
	std::cin >> average;

	//break for priority variables
	std::cout << "\nHow severely do we prioritize them having a cart? 1-low 5-high" << std::endl;
	std::cin >> cart;

	std::cout << "\nAre they injured? 0-No 1-slight 2-Major" << std::endl;
	std::cin >> injury;

	std::cout << "\nare they married? 0-no 1-yes" << std::endl;
	std::cin >> marraige;

	std::cout << "\nHow many children do they have?" << std::endl;
	std::cin >> kids;




	if(inFile.is_open())
	{
		outFile << Last << "," << First << "," << color << "," << brand << "," << material << ","<< logo << "," << number << "," << gender << "," << tees << "," << age << "," << average << "," << cart << "," << injury << "," << marraige << "," << kids <<std::endl;
	}

	std::cout << "\nThe Created Member will be in AllMemberInfo.dat" <<std::endl;

	inFile.close();
	outFile.close();


}//end of add member
