//Manager.h


#ifndef MANAGER_H
#define MANAGER_H

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include "Member.h"
#include "MemberLocker.h"
#include "MemberPriority.h"
#include "MemberStats.h"

class Manager
{
	private:
		std::string ManagerPassword;
	public:
		Manager();
		Manager(std::string);

		void OutingCarts();
};
#endif
