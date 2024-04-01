import java.util.*;
import java.io.*;

public class Intelligence extends Attribute
{
	int smart;

	public Intelligence()
	{
		this.smart = 2;
	}//end of constructor

	public Intelligence(int SmartLevel)
	{
		this.smart= SmartLevel;
	}//end of constructor


	public int getIntelligence()
	{
		return this.smart;
	}

	public void printIntelligence()
	{
		if (this.smart == 0)
		{
			System.out.println("Your pet desperately needs tutoring");
		}else if (this.smart == 1)
		{
			System.out.println("Your pet is not the brightest");
		}else if (this.smart == 2)
		{
			System.out.println("Your pet averagely smart");
		}else if (this.smart == 3)
		{
			System.out.println("Your pet is a PHD Graduate");
		}else if (this.smart == 4)
		{
			System.out.println("Your pet is a Einstein");
		}else if (this.smart > 4)
		{
			System.out.println("Your pet may be the only one who can complete A8 successfully");
		}else
		{
			System.out.println("Your pet is lacking a brain");
		}
	}	

	public void increase()
	{
		this.smart  = this.smart + 1;
	}

	public void decrease()
	{
		this.smart = this.smart -1;
	}

	public void EatCrayons()
	{
		decrease();
	}	

	public void Study()
	{
		increase();
	}
}
