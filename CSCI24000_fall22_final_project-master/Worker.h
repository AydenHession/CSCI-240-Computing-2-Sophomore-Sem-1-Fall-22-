//worker.h


#ifndef WORKER_H
#define WORKER_H

#include <iostream>
#include <string>
#include <sstream>
#include "Member.h"
#include "MemberLocker.h"
#include "MemberPriority.h"
#include "MemberStats.h"
#include <array>
#include <fstream>
class Worker
{
	private:
		std::string WorkerPassword;
	public:
		Worker();
		Worker(std::string);

		void splitTips();
		void changeMemberLockerInfo(std::string, std::string);
		void searchLocker(std::string);

};
#endif
