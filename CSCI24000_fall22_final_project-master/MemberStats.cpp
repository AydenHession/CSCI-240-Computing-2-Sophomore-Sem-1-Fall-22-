//date.cpp


#include <iostream>
#include <string>
#include "MemberStats.h"


MemberStats::MemberStats()
{
	Gender = "0";
	Tees = "2";
	Age = "40";
	AVGround = "80";
}//end constructor

MemberStats::MemberStats(std::string Gender, std::string Tees, std::string Age, std::string AVGround)
{
	MemberStats::Gender = Gender;
	MemberStats::Tees = Tees;
	MemberStats::Age = Age;
	MemberStats::AVGround = AVGround;
}//end contstructor

/*---------------------------------------
 *-----Getters and setter--------------
 *------------------------------------------- */


std::string MemberStats::getGender()
{
	return Gender;
}

void MemberStats::setGender(std::string Gender)
{
	MemberStats::Gender = Gender;
}

//end of gender functions


std::string MemberStats::getTees()
{
	return Tees;
}

void MemberStats::setTees(std::string Tees)
{
	MemberStats::Tees = Tees;
}

//end of Tee functions


std::string MemberStats::getAge()
{
	return Age;
}

void MemberStats::setAge(std::string Age)
{
	MemberStats::Age = Age;
}

//end of Age functions


std::string MemberStats::getAVGRound()
{
	return AVGround;
}

void MemberStats::setAVGRound(std::string AVGround)
{
	MemberStats::AVGround = AVGround;
}

//end of average round functions


void MemberStats::printStats()
{
	std::cout << Gender << "," << Tees << "," << Age << "," << AVGround;
}






