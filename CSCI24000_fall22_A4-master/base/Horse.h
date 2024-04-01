//Horse.h file

#ifndef HORSE_H
#define HORSE_H

class Horse
{
	private:
		int position;
	public:
		Horse(); // default constructor
	
		void advance();
		int getPosition(); //get index of horse to be able to move forward
};
#endif
