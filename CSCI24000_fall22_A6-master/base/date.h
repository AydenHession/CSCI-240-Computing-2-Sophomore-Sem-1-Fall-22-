//date.h


#ifndef DATE_H
#define DATE_H

#include <iostream>
#include <string>

class date
{
	private:
		//birthday variables
		std::string birthDay;
		std::string birthMonth;
		std::string birthYear;

		//gradday variables
		std::string gradDay;
		std::string gradMonth;
		std::string gradYear;

	public:
		date();
		date(std::string, std::string, std::string, std::string, std::string, std::string);

		//birthdate functions
		std::string getBirthDay();
		void setBirthDay(std::string);
		std::string getBirthMonth();
		void setBirthMonth(std::string);
		std::string getBirthYear();
		void setBirthYear(std::string);

		//graddate functions
		std::string getGradDay();
		void setGradDay(std::string);
		std::string getGradMonth();
		void setGradMonth(std::string);
		std::string getGradYear();
		void setGradYear(std::string);

		//print command
		void printDates();


};

#endif
