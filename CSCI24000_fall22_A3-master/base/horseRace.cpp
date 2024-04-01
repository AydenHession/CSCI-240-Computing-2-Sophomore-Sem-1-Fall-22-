#include <iostream>
#include <string>
#include <cstdlib>
#include <cctype>


//horses and their track
char Horse0[16] = "0..............";
char Horse1[16] = "1..............";
char Horse2[16] = "2..............";
char Horse3[16] = "3..............";
char Horse4[16] = "4..............";

//index values of horses in the character array
int in0 = 0;
int in1 = 0;
int in2 = 0;
int in3 = 0;
int in4 = 0;

bool finished = false; //used to end the race and announce the winner

void swapPoint(char*, char*);
void Turn();
int returnDigitIndex(std::string); 
void printhorse(std::string);
void winner();

int main()
{
	int seed;
	std::string FORWARD;
	std::cout << "Please Enter A Random Seed: ";
	std::cin >> seed; 
	std::cout << std::endl << "Seed = " << seed << std::endl;
			        
	srand(seed);
				    
	printhorse(Horse0);
	printhorse(Horse1);
	printhorse(Horse2);
	printhorse(Horse3);
	printhorse(Horse4);
	std::cin.ignore();

	while (finished == false) // runs until a horse has finished
	{
		std::cout << std::endl << "Press ENTER To Continue" << std::endl;
		std::cin.ignore(); 
			        
		Turn();
				        
		printhorse(Horse0);
		printhorse(Horse1);
		printhorse(Horse2);
		printhorse(Horse3);
		printhorse(Horse4);

	}

	winner(); //announces winner

	return 0;
}//end main()

//prints the string of the horse and its track
void printhorse(std::string input)
{
	for (int i = 0; i < 16; i++)
	{
		std::cout << input[i];
	}
	std::cout << std::endl;
}//end printhorse()

//returns index of digit so a swap can happen
int returnDigitIndex(std::string a)
{
	int index = 0;
	
	while (isdigit(a[index]) == false) //parses through the string until if finds the horse
	{
		index++;
	}

	return index;
}//end returnDigitIndex()

void Turn()
{
	//indexes of each horse
	in0 = 0;
	in1 = 0;
	in2 = 0;
	in3 = 0;
	in4 = 0;

	//random number coin flip for each turn, 1 0r 0
	int r0 = rand() % 2;
	int r1 = rand() % 2;
	int r2 = rand() % 2;
	int r3 = rand() % 2;
	int r4 = rand() % 2;

	//if == 1, then move forward
	if (r0 == 1)
	{
		in0 = returnDigitIndex(Horse0); //find the index where the horse is
		swapPoint(&Horse0[in0], &Horse0[in0 + 1]); //swaps the index of the horse and the period in front of it 
	}

	if (r1 == 1)
	{
		in1 = returnDigitIndex(Horse1);
		swapPoint(&Horse1[in1], &Horse1[in1 + 1]);
	}

	if (r2 == 1)
	{
		in2 = returnDigitIndex(Horse2);
		swapPoint(&Horse2[in2], &Horse2[in2 + 1]); 
	}

	if (r3 == 1)
	{
		in3 = returnDigitIndex(Horse3);
		swapPoint(&Horse3[in3], &Horse3[in3 + 1]); 
	}

	if (r4 == 1)
	{
		in4 = returnDigitIndex(Horse4);
		swapPoint(&Horse4[in4], &Horse4[in4 + 1]);
	}

	//checking if any of them have finished 
	if (in0 == 14 || in1 == 14 || in2 == 14 || in3 == 14 || in4 == 14)
	{
		finished = true;
	}

}//end Turn()

//swaps the position of two tings in a string
void swapPoint(char *a, char *b)
{
	int temp = 0;
	temp = *a; 
	*a = *b;
	*b = temp;
}//end swapPoint()

//tells winner
void winner()
{
	if (in0 == 14)
	{
		std::cout << "Horse 0 Wins!";
	}
	else if (in1 == 14)
	{
		std::cout << "Horse 1 Wins!";
	}
	else if (in2 == 14)
	{
		std::cout << "Horse 2 Wins!";
	}
	else if (in3 == 14)
	{
		std::cout << "Horse 3 Wins!";
	}
	else if (in4 == 14)
	{
		std::cout << "Horse 4 Wins!";
	}
}//end winner()
