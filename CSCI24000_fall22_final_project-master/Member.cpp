//Member.cpp

#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include "Member.h"
#include "MemberStats.h"
#include "MemberPriority.h"
#include "MemberLocker.h"

Member::Member()
{
	Member::LName = "";
	Member::FName = "";
	Member::MemStats = new MemberStats();
	Member::MemPriority = new MemberPriority();
	Member::MemLocker = new MemberLocker();
}//end constructor

Member::Member(std::string MemberLineToParseThrough)
{
	//initialize the line so we can getline() it
	std::stringstream ss(MemberLineToParseThrough);


	//initiailize object variables on the heap
	Member::MemStats = new MemberStats();
	Member::MemPriority = new MemberPriority();
	Member::MemLocker = new MemberLocker();


	//list of temporary variables that make up every class
	//Locker
	std::string BagC;
       	std::string BagB;
	std::string BagM;
	std::string Logo;
	std::string Num;

	//Stats
	std::string Gen;
	std::string Tee;
	std::string Ages;
	std::string RoundAVG;

	//Priority
	std::string Cart;
	std::string In;
	std::string Mar;
	std::string Kid;

	/*
	
	AllMemberInfo.dat

	, , , , , , , , , , , , , , (\n)

	*/	
	
	//names
	getline(ss, Member::LName, ',');
	getline(ss, Member::FName, ',');

	//locker
	getline(ss, BagC, ',');
	getline(ss, BagB, ',');
	getline(ss, BagM, ',');
	getline(ss, Logo, ',');
	getline(ss, Num, ',');

	//stats
	getline(ss, Gen, ',');
	getline(ss, Tee, ',');
	getline(ss, Ages, ',');
	getline(ss, RoundAVG, ',');

	//priority
	getline(ss, Cart, ',');
	getline(ss, In, ',');
	getline(ss, Mar, ',');
	getline(ss, Kid, ',');

	//=============================================================
	//set variables from getline variables to the object variables.
	//=============================================================
	
	//Locker
	Member::MemLocker->setBagColor(BagC);
	Member::MemLocker->setBagBrand(BagB);
	Member::MemLocker->setBagMaterial(BagM);
	Member::MemLocker->setCCILOGO(Logo);
	Member::MemLocker->setLockerNum(Num);

	//Stats
	Member::MemStats->setGender(Gen);
	Member::MemStats->setTees(Tee);
	Member::MemStats->setAge(Ages);
	Member::MemStats->setAVGRound(RoundAVG);

	//Priority
	Member::MemPriority->setCartPriority(Cart);
	Member::MemPriority->setInjury(In);
	Member::MemPriority->setMarraige(Mar);
	Member::MemPriority->setKids(Kid);
	//end of set function

}//end constructor

/*-------------------------------------
 *BREAK FOR LONG HECKING CONSTRUCTOR
 ---------------------------------------
 --------------------------------------
 -------------------------------------
 *--------------------------------------- */


Member::~Member()
{
	delete MemStats;
	delete MemPriority;
	delete MemLocker;
}//end deconstructor


std::string Member::getFirstName()
{
	return Member::FName;
}

void Member::setFirstName(std::string Name)
{
	Member::FName = Name;
}

//end of First name getter and setter


std::string Member::getLastName()
{
	return Member::LName;
}

void Member::setLastName(std::string Name)
{
	Member::LName = Name;
}

//end of Last name getter and setter

/*=====================================
 *-------------------------------------
 *+This Break FOR the OBJECT FUNCTIONS+
 *-------------------------------------
 *===================================== */


MemberPriority Member::getMemberPriority()
{
	return *Member::MemPriority;
}

void Member::setMemberPriority(MemberPriority * P)
{
	Member::MemPriority = P;
}

//end member priority objection functions


MemberLocker Member::getMemberLocker()
{
	return *Member::MemLocker;
}

void Member::setMemberLocker(MemberLocker * L)
{
	Member::MemLocker = L;
}

//end member locker objection functions


MemberStats Member::getMemberStats()
{
	return *Member::MemStats;
}

void Member::setMemberStats(MemberStats * S)
{
	Member::MemStats = S;
}

//end member priority objection functions



/*
 *---------------------------------------
 *----------------------------------------
 *-----Print Functions here--------------
 *-------------------------------------
 */

std::string Member::printMember()
{
	std::string THERETURN;

	THERETURN = LName + "," + FName + "," + Member::MemLocker->getColor() + "," + Member::MemLocker->getBrand() + "," + Member::MemLocker->getMaterial() + "," + Member::MemLocker->getCCILOGO() + "," + Member::MemLocker->getLockerNum() +  "," + Member::MemStats->getGender() + "," + Member::MemStats->getTees() + "," + Member::MemStats->getAge() + "," + Member::MemStats->getAVGRound() + "," + Member::MemPriority->getCartPriority() + "," + Member::MemPriority->getInjury() + "," + Member::MemPriority->getMarraige() + "," + Member::MemPriority->getKids();

	return THERETURN;
}

std::string Member::printName()
{
	std::string nameReturn;

	nameReturn = FName + " " + LName;

	return nameReturn;
}

std::string Member::printMemberStats()
{
	std::string STATSRETURN;

	STATSRETURN = LName + "," + FName + "," + Member::MemStats->getGender() + "," + Member::MemStats->getTees() + "," + Member::MemStats->getAge() + "," + Member::MemStats->getAVGRound();

	return STATSRETURN;
}

std::string Member::printMemberPriority()
{
	std::string PRIORITYRETURN;

	PRIORITYRETURN = LName + "," + FName + "," + Member::MemPriority->getCartPriority() + "," + Member::MemPriority->getInjury() + "," + Member::MemPriority->getMarraige() + "," + Member::MemPriority->getKids();

	return PRIORITYRETURN;
}

std::string Member::printMemberLocker()
{
	std::string LOCKERRETURN;

	LOCKERRETURN = LName + "," + FName + "," + Member::MemLocker->getColor() + "," + Member::MemLocker->getBrand() + "," + Member::MemLocker->getMaterial() + "," + Member::MemLocker->getCCILOGO() + "," + Member::MemLocker->getLockerNum();
	return LOCKERRETURN;
}

void Member::setMember(std::string MemberLineToParseThrough)
{
	//initialize the line so we can getline() it
	std::stringstream ss(MemberLineToParseThrough);


	//initiailize object variables on the heap
	Member::MemStats = new MemberStats();
	Member::MemPriority = new MemberPriority();
	Member::MemLocker = new MemberLocker();


	//list of temporary variables that make up every class
	//Locker
	std::string BagC;
       	std::string BagB;
	std::string BagM;
	std::string Logo;
	std::string Num;

	//Stats
	std::string Gen;
	std::string Tee;
	std::string Ages;
	std::string RoundAVG;

	//Priority
	std::string Cart;
	std::string In;
	std::string Mar;
	std::string Kid;

	/*
	
	AllMemberInfo.dat

	, , , , , , , , , , , , , , (\n)

	*/	
	
	//names
	getline(ss, Member::LName, ',');
	getline(ss, Member::FName, ',');

	//locker
	getline(ss, BagC, ',');
	getline(ss, BagB, ',');
	getline(ss, BagM, ',');
	getline(ss, Logo, ',');
	getline(ss, Num, ',');

	//stats
	getline(ss, Gen, ',');
	getline(ss, Tee, ',');
	getline(ss, Ages, ',');
	getline(ss, RoundAVG, ',');

	//priority
	getline(ss, Cart, ',');
	getline(ss, In, ',');
	getline(ss, Mar, ',');
	getline(ss, Kid, ',');

	//=============================================================
	//set variables from getline variables to the object variables.
	//=============================================================
	
	//Locker
	Member::MemLocker->setBagColor(BagC);
	Member::MemLocker->setBagBrand(BagB);
	Member::MemLocker->setBagMaterial(BagM);
	Member::MemLocker->setCCILOGO(Logo);
	Member::MemLocker->setLockerNum(Num);

	//Stats
	Member::MemStats->setGender(Gen);
	Member::MemStats->setTees(Tee);
	Member::MemStats->setAge(Ages);
	Member::MemStats->setAVGRound(RoundAVG);

	//Priority
	Member::MemPriority->setCartPriority(Cart);
	Member::MemPriority->setInjury(In);
	Member::MemPriority->setMarraige(Mar);
	Member::MemPriority->setKids(Kid);
	//end of set function



}
