//Race.h

#ifndef RACE_H
#define RACE_H

#include <cstdlib>
#include "Horse.h"

class Race
{
	private:
		Horse lineup[5]; // horses racing
		int length;
	public:
		Race();
	        void start();	
		void printHorse(int horseNum); //prints the lane of the horse

};

#endif
