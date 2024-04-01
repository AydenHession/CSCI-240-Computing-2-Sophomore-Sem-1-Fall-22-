#include <iostream>
#include <string>
#include <cstdlib>
#include <sstream>
#include <fstream>

int main()
{
	std::ifstream inFile("input.txt"); //open input stream
	std::ofstream outFile("output.txt"); //open output file
	

	std::string currentLine;
	std::stringstream converter;
	std::stringstream ss;
	int counter;
	std::string sCounter;
	std::string text; // place to store the text from the input.txt

	while(getline(inFile, currentLine)) //makes sure that there is data or a string within the line
	{
		//clear the stringstream
		ss.clear();
		ss.str("");
		converter.clear();
		converter.str("");
		//pass current line to this line segment
		ss.str(currentLine);	
		//send stuff back to variables
		
		
		int temp = 0;
		int newSUM = 0;
	
		while (getline(ss, sCounter, ','))
		{

			converter <<sCounter;
			converter >> temp;


			newSUM += temp;

			converter.clear();
			converter.str("");
		}
			
		//
		getline(inFile, currentLine);

		ss.clear();
		ss.str("");

		ss.str(currentLine);

		getline(ss, text);

		for (int i = 0; i < newSUM; i++) // 
		{
			//print the string from the text to file
			outFile << text << ',';
		}

		outFile << std::endl; //returns on the file

	}// end while loop

	inFile.close(); //close input file
	outFile.close(); //close output file

	return 0;
}//end main
