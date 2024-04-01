//Member.h


#ifndef MEMBER_H
#define MEMBER_H

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include "MemberPriority.h"
#include "MemberStats.h"
#include "MemberLocker.h"

class Member
{
	private:
		std::string FName;
		std::string LName;
		MemberPriority * MemPriority;
		MemberStats * MemStats;
		MemberLocker * MemLocker;

	public:
		Member();
		Member(std::string);

		void setMember(std::string);
		~Member(); //deconstructor

		//name functions
		std::string getFirstName();
		void setFirstName(std::string);

		std::string getLastName();
		void setLastName(std::string);

		//object functions
		MemberPriority getMemberPriority();
		void setMemberPriority(MemberPriority *);

		MemberStats getMemberStats();
		void setMemberStats(MemberStats *);

		MemberLocker getMemberLocker();
		void setMemberLocker(MemberLocker *);


		//print functions
		std::string printMember();
		std::string printName();
		std::string printMemberStats();
		std::string printMemberPriority();
		std::string printMemberLocker();

		//special member function
		std::string getHandicap();
};
#endif
