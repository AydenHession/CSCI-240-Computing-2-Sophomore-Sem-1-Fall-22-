import java.util.*;
import java.io.*;

public class Mood extends Attribute
{
	int mood;

	public Hunger()
	{
		this.mood = 2;
	}//end of constructor

	public Mood(int MoodLevel)
	{
		this.mood= MoodLevel;
	}//end of constructor


	public int getMood()
	{
		return this.hung;
	}

	public void printMood()
	{
		if (this.mood == 0)
		{
			System.out.println("Your pet is depressed");
		}else if (this.mood == 1)
		{
			System.out.println("Your pet is upset");
		}else if (this.mood == 2)
		{
			System.out.println("Your pet is feeling so/so");
		}else if (this.mood == 3)
		{
			System.out.println("Your pet is at an above average happines");
		}else if (this.mood == 4)
		{
			System.out.println("Your pet has a permanent grin");
		}else if (this.mood > 4)
		{
			System.out.println("Your pet is at a state of serenity");
		}else
		{
			System.out.println("Your pet has been stuck on an error for 19 hours find them some help asap");
		}
	}	

	public void increase()
	{
		this.mood = this.mood +1;
	}

	public void decrease()
	{
		this.mood = this.mood - 1;
	}

	public void Play()
	{
		increase();
	}

	public void YellAt()
	{
		decrease();
	}

}
