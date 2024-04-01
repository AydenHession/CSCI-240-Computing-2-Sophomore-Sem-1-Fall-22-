import java.util.*;
import java.io.*;

public class Dragon extends Pet
{
	public Dragon(String name, String sound, int HungerLevel, int SmartLevel, int MoodLevel, int CleanLevel)
	{
		
		this.Name = name;
		this.Sound = sound;
		this.h = HungerLevel;
		this.i = SmartLevel;
		this.m = MoodLevel; 
		this.c = CleanLevel;
	}//end constructor

	public void speak()
	{
		this.Sound = "Rawr";
		System.out.println(this.Sound);
	}//end speak()

	public void dance()
	{
		System.out.println("Flaps_Wings");
	}//end dance()
}
