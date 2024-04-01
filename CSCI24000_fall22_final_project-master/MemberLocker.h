//MemberLocker.h



#ifndef MEMBERLOCKER_H
#define MEMBERLOCKER_H

#include <iostream>
#include <string>

class MemberLocker
{
	private:
		//word variables
		std::string BagColor;
		std::string BagBrand;
		std::string BagMaterial;
		
		//number variables will need to be changed from string later
		std::string CCILogo;
		std::string LockerNum;

	public:
		//constructors
		MemberLocker();
		MemberLocker(std::string, std::string, std::string, std::string, std::string);

		//print function
		void printLocker();

		//getters and setters for Bag 
		std::string getColor();
		void setBagColor(std::string);

		std::string getBrand();
		void setBagBrand(std::string);

		std::string getMaterial();
		void setBagMaterial(std::string);


		//getters and setters for locker info that will be represented as numbers
		std::string getCCILOGO();
		void setCCILOGO(std::string);

		std::string getLockerNum();
		void setLockerNum(std::string);
};
#endif
