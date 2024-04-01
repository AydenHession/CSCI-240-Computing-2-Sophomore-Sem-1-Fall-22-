import java.util.*;
import java.io.*;

public class Hunger extends Attribute
{
	int hung;

	public Hunger()
	{
		this.hung = 2;
	}//end of constructor

	public Hunger(int HungerLevel)
	{
		this.hung= HungerLevel;
	}//end of constructor


	public int getHunger()
	{
		return this.hung;
	}

	public void printHunger()
	{
		if (this.hung == 0)
		{
			System.out.println("Your pet is starving");
		}else if (this.hung == 1)
		{
			System.out.println("Your pet is hungry");
		}else if (this.hung == 2)
		{
			System.out.println("Your pet is satiated");
		}else if (this.hung == 3)
		{
			System.out.println("Your pet has had enough to eat");
		}else if (this.hung == 4)
		{
			System.out.println("Your pet is plenty full");
		}else if (this.hung > 4)
		{
			System.out.println("Your pet is stuffed");
		}else
		{
			System.out.println("Your pet is seconds away from death, please feed");
		}
	}	

	public void increase()
	{
		this.hung = this.hung + 1;
	}
	
	public void decrease()
	{
		this.hung = this.hung -1;
	}

	public void feed()
	{
		increase();
	}

	public void starve()
	{
		decrease();
	}
}
