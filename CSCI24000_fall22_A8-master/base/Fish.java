import java.util.*;
import java.io.*;

public class Fish extends Pet
{
	public Fish(String name, String sound, int HungerLevel, int SmartLevel, int MoodLevel, int CleanLevel)
	{
		this.Name = name;
		this.Sound = sound;
		this.h = HungerLevel;
		this.i = SmartLevel;
		this.m = Moodlevel;
		this.c = CleanLevel;
	}//end constructor

	public void speak()
	{
		this.Sound = "Blub_Blub_Blub";
		System.out.println(this.Sound);
	}//end speak()

	public void dance()
	{
		System.out.println("Hits_The_Griddy");
	}//end dance()
