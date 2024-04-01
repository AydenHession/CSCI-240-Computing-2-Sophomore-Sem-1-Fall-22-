//MemberPriority.cpp


#include <iostream>
#include <string>
#include "MemberPriority.h"


MemberPriority::MemberPriority()
{
	CartP = "1";
	Injury = "0";
	Marraige = "0";
	Kids = "0";
}//end constructor

MemberPriority::MemberPriority(std::string CartP, std::string Injury, std::string Marraige, std::string Kids)
{
	MemberPriority::CartP = CartP;
	MemberPriority::Injury = Injury;
	MemberPriority::Marraige = Marraige;
	MemberPriority::Kids = Kids;
}//end constructor

/*---------------------------------------
 *----getters and setters----------------
 *--------------------------------------- */


std::string MemberPriority::getCartPriority()
{
	return CartP;
}

void MemberPriority::setCartPriority(std::string CartP)
{
	MemberPriority::CartP = CartP;
}

//end of cart p functions

std::string MemberPriority::getInjury()
{
	return Injury;
}

void MemberPriority::setInjury(std::string Injury)
{
	MemberPriority::Injury = Injury;
}

//end of Injury functions

std::string MemberPriority::getMarraige()
{
	return Marraige;
}

void MemberPriority::setMarraige(std::string Marraige)
{
	MemberPriority::Marraige = Marraige;
}

//end of Marraige functions

std::string MemberPriority::getKids()
{
	return Kids;
}

void MemberPriority::setKids(std::string Kids)
{
	MemberPriority::Kids = Kids;
}

//end of cart p functions

/*--------------------------------
 * -----------print statements-----
 *-------------------------------- */

void MemberPriority::printPriority()
{
	std::cout << CartP << "," << Injury << "," << Marraige << "," << Kids;
}//end print

