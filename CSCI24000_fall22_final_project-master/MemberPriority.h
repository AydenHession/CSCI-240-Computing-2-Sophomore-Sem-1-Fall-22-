//MemberPriority.h

#ifndef MEMBERPRIORITY_H
#define MEMBERPRIORITY_H

#include <iostream>
#include <string>

class MemberPriority
{
	private:
		std::string CartP;
		std::string Injury;
		std::string Marraige;
		std::string Kids;
	public:
		MemberPriority();
		MemberPriority(std::string, std::string, std::string, std::string);

		std::string getCartPriority();
		void setCartPriority(std::string);

		std::string getInjury();
		void setInjury(std::string);

		std::string getMarraige();
		void setMarraige(std::string);

		std::string getKids();
		void setKids(std::string);


		void printPriority();

};
#endif
