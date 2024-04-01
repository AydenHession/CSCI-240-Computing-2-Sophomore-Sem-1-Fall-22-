//MemberLocker.cpp


#include <iostream>
#include <string>
#include "MemberLocker.h"

MemberLocker::MemberLocker()
{
	BagColor = "Color";
	BagBrand = "Brand";
	BagMaterial = "Material";
	CCILogo = "Logo";
	LockerNum = "Number";
}//end MemberLocker Constrcutor

MemberLocker::MemberLocker(std::string Color, std::string Brand, std::string Material, std::string Logo, std::string Number)
{
	MemberLocker::BagColor = Color;
	MemberLocker::BagBrand = Brand;
	MemberLocker::BagMaterial = Material;
	MemberLocker::CCILogo = Logo;
	MemberLocker::LockerNum = Number;
}//end MemberLocker Constructor


/*----------------------------------
 *----Break for the get/set---------
 *---------------------------------- */

std::string MemberLocker::getColor()
{
	return BagColor;
}

void MemberLocker::setBagColor(std::string Color)
{
	MemberLocker::BagColor = Color;
}

//end bag color


std::string MemberLocker::getBrand()
{
	return BagBrand;
}

void MemberLocker::setBagBrand(std::string Brand)
{
	MemberLocker::BagBrand = Brand;
}

//end bag Brand

std::string MemberLocker::getMaterial()
{
	return BagMaterial;
}

void MemberLocker::setBagMaterial(std::string Material)
{
	MemberLocker::BagMaterial = Material;
}

//end bag material
//end of word functions that wont need to be changed to number values later



std::string MemberLocker::getCCILOGO()
{
	return CCILogo;
}

void MemberLocker::setCCILOGO(std::string Logo)
{
	MemberLocker::CCILogo = Logo;
}

//end of cci logo

std::string MemberLocker::getLockerNum()
{
	return LockerNum;
}

void MemberLocker::setLockerNum(std::string Number)
{
	MemberLocker::LockerNum = Number;
}

//end of locker number


/*----------------------------------
 *---break for print function-------
 *--------------------------------------*/


void MemberLocker::printLocker()
{
	std::cout << BagColor << "," << BagBrand << "," << BagMaterial << "," << CCILogo << "," << LockerNum;
}







