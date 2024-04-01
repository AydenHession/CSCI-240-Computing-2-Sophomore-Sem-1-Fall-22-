import java.util.*;
import java.io.*;


public abstract class Pet 
{
	protected String Name;
	protected String Sound;
	Hunger h;
	Intelligence i;
	Mood m;
	Cleanliness c;

	public abstract void speak();
	public abstract void dance();


	public Pet()
	{
		Name = "";
		Sound = "";
		h = new Hunger();
		i = new Intelligence();
		m = new Mood();
		c = new Cleanliness();
	} //end of constructor


	public Pet(String name, String sound, int HungerLevel, int SmartLevel, int MoodLevel, int CleanLevel)
	{
		this.Name = name;
		this.Sound = sound;
		h = new Hunger(HungerLevel);
		i = new Intelligence(SmartLevel);
		m = new Mood(MoodLevel);
		c = new Cleanliness(CleanLevel);
	}

	public void setName(String name)
	{
		this.Name = name;
	}

	public String getName()
	{
		return this.Name;
	}

	public String getSound()
	{
		return this.Sound;
	}
	
	public Hunger PetHungerObject()
	{
		return h;
	}	

	public Intelligence PetIntelligenceObject()
	{
		return i;
	}

	public Mood PetMoodObject()
	{
		return m;
	}
	
	public Cleanliness PetCleanlinessObject()
	{
		return c;
	}

}
