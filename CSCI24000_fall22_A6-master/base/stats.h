//stats.h


#ifndef STATS_H
#define STATS_H

#include <iostream>
#include <string>

class stats
{

	private:
		std::string GPA;
		std::string creditHours;

	
	public:
		stats();
		stats(std::string, std::string);
		
		std::string getGPA();
		void setGPA(std::string);

		std::string getCreditHours();
		void setCreditHours(std::string);

		void printStats();
		
};

#endif
