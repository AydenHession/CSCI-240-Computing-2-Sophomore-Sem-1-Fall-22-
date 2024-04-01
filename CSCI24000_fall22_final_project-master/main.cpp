//main.cpp


#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include "Boss.h"
#include "Manager.h"
#include "Worker.h"
#include "Member.h"
#include "MemberStats.h"
#include "MemberLocker.h"
#include "MemberPriority.h"

int main()
{
	Worker wor;
	Boss bos;
	Manager man;



	std::string Password;

	std::cout << "Enter a Password Key (#####) to sign in as either a boss, manager or worker" << std::endl;
	std::cin >> Password;
	
	std::string input;

	if (Password == "11111")
	{
		std::cout << "Welcome Worker, what would you like to do?" << std::endl;
		std::cout << "a) Split Tips" << std::endl;
		std::cout << "b) Add Member Locker Info" << std::endl;
		std::cout << "c) Search For A Member's Locker" << std::endl;
		
		std::cin >> input;

		if(input == "a")
		{
			wor.splitTips();
		}
		else if(input == "b")
		{
			std::string FFFnname;
			std::string LLLnname;

			std::cout << "what is the first name of the person you want to add?" << std::endl;
			std::cin >> FFFnname;
			std::cout << "\nwhat is the last name of the person you want to add?" <<std::endl;
			std::cin >> LLLnname;

			wor.changeMemberLockerInfo(FFFnname, LLLnname);
		}
		else if(input == "c")
		{
			std::string ssearchName;

			std::cout << "What is the name you want to search for?" << std::endl;
			std::cin >> ssearchName;

			wor.searchLocker(ssearchName);
		}
		else
		{
			std::cout << "Not a valid input" << std::endl;
		}
	} 
	else if(Password == "22222")
	{
		std::cout << "Welcome Manager, what would you like to do?" << std::endl;
		std::cout << "a) Split Tips" << std::endl;
		std::cout << "b) Add Member Locker Info" << std::endl;
		std::cout << "c) Search For A Member's Locker" << std::endl;
		std::cout << "d) Make Outing Card Text" << std::endl;
		
		std::cin >> input;
		
		if(input == "a")
		{
			wor.splitTips();
		}
		else if(input == "b")
		{
			std::string FFFname;
			std::string LLLname;

			std::cout << "what is the first name of the person you want to add?" << std::endl;
			std::cin >> FFFname;
			std::cout << "\nwhat is the last name of the person you want to add?" <<std::endl;
			std::cin >> LLLname;

			wor.changeMemberLockerInfo(FFFname, LLLname);
		}
		else if(input == "c")
		{
			std::string searchNName;

			std::cout << "What is the name you want to search for?" << std::endl;
			std::cin >> searchNName;

			wor.searchLocker(searchNName);
		}
		else if(input == "d")
		{
			man.OutingCarts();
		}
		else
		{
			std::cout << "Not a valid input" << std::endl;
		}
	}
	else if(Password == "33333")
	{
		std::cout<< "Welcome Boss, what would you like to do?" << std::endl;
		std::cout << "a) Split Tips" << std::endl;
		std::cout << "b) Add Member Locker Info" << std::endl;
		std::cout << "c) Search For A Member's Locker" << std::endl;
		std::cout << "d) Make Outing Card Text" << std::endl;
		std::cout << "e) Add A Member" << std::endl;

		std::cin >> input;

		if(input == "a")
		{
			wor.splitTips();
		}
		else if(input == "b")
		{
			std::string FFname;
			std::string LLname;

			std::cout << "what is the first name of the person you want to add?" << std::endl;
			std::cin >> FFname;
			std::cout << "\nwhat is the last name of the person you want to add?" <<std::endl;
			std::cin >> LLname;

			wor.changeMemberLockerInfo(FFname, LLname);
		}
		else if(input == "c")
		{
			std::string searchName;

			std::cout << "What is the name you want to search for?" << std::endl;
			std::cin >> searchName;

			wor.searchLocker(searchName);
		}
		else if(input == "d")
		{
			man.OutingCarts();
		}
		else if(input == "e")
		{
			std::string first;
			std::string last;

			std::cout << "What is the first Name of the person you want to add?" << std::endl;
			std::cin >> first;
			std::cout << "\nWhat is the last Name of the person you want to add?" << std::endl;
			std::cin >> last;

			bos.addMember(first, last);
		}
		else
		{
			std::cout << "Not a valid input" << std::endl;
		}
	}
	else
	{
		std::cout << "Not a valid password" << std::endl;
	}


}
