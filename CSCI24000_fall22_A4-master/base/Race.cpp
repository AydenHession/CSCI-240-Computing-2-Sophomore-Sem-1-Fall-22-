//Race.cpp


#include "Horse.h"
#include "Race.h"

#include <iostream>
#include <cstdlib>

Race::Race() //runs the race
{
	length = 15;
}

void Race::start()
{
	bool finished = true;

	int winner = 20; //used to print the winning horse, if a 20 is printed then code doesn't work
	
	for (int q = 0; q <5; q++)
	{
		printHorse(q);
	}	

	while (finished == true)
	{
		for (int i = 0; i <= 4; i ++)
		{	
			Race::lineup[i].advance();
			printHorse(i);

			if (lineup[i].getPosition() == Race::length) //checks if the horse makes it to spot 15
			{
				finished = false;
				winner = i; //the index of the horse is labeled as its name
			}
		}
		
		std::cout << std::endl;

		
		std::cout<< std::endl;
	}
	std::cout << "Horse " << winner << " is the winner!!" << std::endl;

}

void Race::printHorse(int horseNum)
{
	int pos = Race::lineup[horseNum].getPosition(); //gets the position of the horse 

	for (int i = 0; i < length; i++) // loop through the line for each horse.
	{
		if (i == pos)
		{
			std::cout << horseNum; //will place the horse in its position
		}
		else 
		{
			std::cout << ".";
		}
	}

	std::cout << std::endl;
}


