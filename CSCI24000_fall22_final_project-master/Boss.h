//boss.h


#ifndef BOSS_H
#define BOSS_H

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include "Member.h"
#include "MemberStats.h"
#include "MemberPriority.h"
#include "MemberLocker.h"
#include <array>


class Boss
{
	private:
		std::string BossPassword;
	public:
		Boss();
		Boss(std::string);

		void addMember(std::string, std::string);
};
#endif
