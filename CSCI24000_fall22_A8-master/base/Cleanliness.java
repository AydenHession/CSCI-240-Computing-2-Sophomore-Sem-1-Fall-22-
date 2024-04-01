import java.util.*;
import java.io.*;

public class Cleanliness extends Attribute
{
	int clean;

	public Cleanliness()
	{
		this.clean = 2;
	}//end of constructor

	public Cleanliness(int CleanLevel)
	{
		this.clean= CleanLevel;
	}//end of constructor


	public int getCleanliness()
	{
		return this.clean;
	}

	public void printCleanliness()
	{
		if (this.clean == 0)
		{
			System.out.println("Your pet is stanky");
		}else if (this.clean == 1)
		{
			System.out.println("Your pet is in need of a lil bath");
		}else if (this.clean == 2)
		{
			System.out.println("Your pet is averagely clean");
		}else if (this.clean == 3)
		{
			System.out.println("Your pet has such a clean body");
		}else if (this.clean == 4)
		{
			System.out.println("Your pet smells and looks beautiful");
		}else if (this.clean > 4)
		{
			System.out.println("Your pet is literally shining");
		}else
		{
			System.out.println("Your Reeks of Reused Gym Socks");
		}
	}	

	public void increase()
	{
		this.clean = this.clean +1;
	}

	public void decrease()
	{
		this.clean = this.clean - 1;
	}

	public void RollInMud()
	{
		decrease();
	}

	public void BubbleBath()
	{
		increase();
	}
}
