//Horse.cpp

#include <iostream>
#include <cstdlib>
#include "Horse.h"

Horse::Horse()
{
	Horse::position = 0;
}//end Horse()

int Horse::getPosition()
{
	return Horse::position;
}//end getPosition()

void Horse::advance()
{	
	int coinToss = rand() %2; 

	if (coinToss == 1) //50.50 shot of moving forward one spot
	{
		position ++;
	}

}
