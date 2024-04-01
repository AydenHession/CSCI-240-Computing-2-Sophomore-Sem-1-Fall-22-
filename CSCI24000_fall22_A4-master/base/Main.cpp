//main.cpp


#include <iostream>
#include <cstdlib>

#include "Horse.h"
#include "Race.h"


int main()
{
	int seed;
	std::cout << "Please Enter A Random Seed: ";
	std::cin >> seed;
	std::cout << std::endl << "Seed = " << seed << std::endl;

	srand(seed);


	Race HopingForTheBest;
	HopingForTheBest.start();


	return (0);


}
