//Memberstats.h


#ifndef MEMBERSTATS_H
#define MEMBERSTATS_H

#include <iostream>
#include <string>


class MemberStats
{
	private:
		//stats are set as a string, but will be manipulated as floats and ints
		std::string Gender;
		std::string Tees;
		std::string Age;
		std::string AVGround;

	public:
		//constructors
		MemberStats();
		MemberStats(std::string, std::string, std::string, std::string);


		//print function
		void printStats();


		//getters and setters
		
		std::string getGender();
		void setGender(std::string);

		std::string getTees();
		void setTees(std::string);

		std::string getAge();
		void setAge(std::string);

		std::string getAVGRound();
		void setAVGRound(std::string);

};
#endif

