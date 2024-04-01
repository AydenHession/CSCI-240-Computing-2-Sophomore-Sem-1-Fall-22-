//location.h



#ifndef LOCATION_H
#define LOCATION_H
#include <iostream>
#include <string>

class location
{
	private:
		std::string addressOne;
		std::string addressTwo;
		std::string city;
		std::string state;
		std::string zip;

	public:
		location();
		location(std::string, std::string, std::string, std::string, std::string);
		std::string getAddressOne();
		void setAddressOne(std::string);
		std::string getAddressTwo();
		void setAddressTwo(std::string);
		std::string getCity();
		void setCity(std::string);
		std::string getState();
		void setState(std::string);
		std::string getZip();
		void setZip(std::string);

		void printLocation();
};

#endif
