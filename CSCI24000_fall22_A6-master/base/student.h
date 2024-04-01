//student.h


#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
#include "date.h"
#include "location.h"
#include "stats.h"

class student
{

	private:
		
		std::string firstName;
		std::string lastName;
		location * studentLocation;
		date * studentDates;
		stats * studentStats;

	public:
		student();
		student(std::string); 
		void setStudent(std::string); //same as command above, couldn;t get it to run with the above command
		~student(); //deconstructor

		//names
		std::string getFirstName();
		void setFirstName(std::string);
		std::string getLastName();
		void setLastName(std::string);

		//location
		location getStudentLocation();
		void setStudentLocation(location *);

		//dates
		date getStudentDates();
		void setStudentDates(date *);

		//stats
		stats getStudentStatistics();
		void setStudentStatistics(stats *);

		std::string printAll();
		std::string printNames();


};

#endif
