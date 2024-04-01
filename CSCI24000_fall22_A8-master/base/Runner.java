import java.util.*;
import java.io.*;


public class Runner{
	public static void main(String[] args){
	
	List<Pet> PetList = new ArrayList<Pet>();
	readFile();
	menu();
	saveFile();
	}

	public void menu()
	{
		System.out.println("Hello, welcome to your Pets");
		System.out.println("===========================");
		System.out.println("(A) To Add a pet");
		System.out.println("(P) To Print all your pets");
		System.out.println("(D) To Delete a Pet");


		Scanner input = new Scanner(System.in);

		String Choice = input.nextLine();

		if (Choice.equals("A"))
		{
			addPet();
		}else if (Choice.equals("P")){
			printAllPets();
		}else if (Choice.equals("D")){
			delPet();
		}else {
			System.out.println("Not a valid choice");
		}
	}


	public void readFile()
	{
		try
		{
			File InFile = new File("PetDocumentation.txt");

			Scanner input = new Scanner(InFile);

			while(input.hasNextLine())//reads through the entire file to add the line to the array list
			{
				String nextPet = input.nextLine();

				String[] attributes = nextPet.split(" ", -1);//will check for spaces to add the stuff inbetween the spaces to the temp array called attributes to create new animals

				if (attributes[1] == "Blub_Blub_Blub")
				{
					Pet AddedFish = new Fish(attributes[0], attributes[1], attributes[2], attributes[3], attributes[4], attributes[5]);
					PetList.add(AddedFish);

				} else if (attributes[1] == "Rawr")
				{
					Pet AddedDragon = new Dragon(attributes[0], attributes[1], attributes[2], attributes[3], attributes[4], attributes[5]);
					PetList.add(AddedDragon);

				}else if (attributes[1] == "Oink")
				{
					Pet AddedPig = new Pig(attributes[0], attributes[1], attributes[2], attributes[3], attributes[4], attributes[5]);
					PetList.add(AddedPig);

				}	
			}
		}catch (IOException e)
		{
			e.printStackTrace();
		}

		outFile.close();
	}

	public void delPet()
	{
		System.out.println("Name the pet you would like to delete");

		Scanner input = new Scanner(System.in);

		String DelName = input.nextLine();

		int i = 0;
		for (Pet temp: PetList)//cylce through array list of pets
		{

			if(DelName.equals(temp.getName())) //checks if the name exists in the array list
			{
				this.PetList.remove(i); //removes name and pet from the array list
			}
			i ++;
		}
	}//end delPet

	public void addPet()
	{

		String[] attributes = new String[6];
		Scanner input = new Scanner(System.in);

		System.out.println("\nEnter your New Pets Namee");
		
		String name = input.nextLine();

		attributes[0] = name;


		System.out.println("\n");


		System.out.println("\nWhat type of pet do you want? Dragon(D), Fish(F), Pig(P)");

		String type = input.nextLine();

		if (type.equals("D")){ //sets type of animal in the array list this way
			attributes[1]  = "Rawr";
		}else if (type.equals("F"){
			attributes[1] = "Blub_Blub_Blub";
		}else if (type.equals("P"){
			attributes[1] = "Oink";
		}
		
		System.out.println("\nHow Hungry is your pet (0 to 5)");
		int hungerAmount = input.nextLine();

		attributes[2] = hungerAmount;

		System.out.println("\nHow Intelligence is your Pet (0 to 5)");

		int Smarts = input.nextLine();

		attributes[3] = Smarts;

		System.out.println("\nHow Good is your pet's mood (0 to 5)?");

		int mude = input.nextLine();

		attributes[4] = mude;

		System.out.println("\nHow clean is your pet? (0 to 5)");

		int cleeen = input.nextLine();

		attributes[5] = cleeen;
		



			if (attributes[1] == "Blub_Blub_Blub") //this just sets the correct type of animal to be made.
				{
					Pet AddedFish = new Fish(attributes[0], attributes[1], attributes[2], attributes[3], attributes[4], attributes[5]);
					PetList.add(AddedFish);

				} else if (attributes[1] == "Rawr")
				{
					Pet AddedDragon = new Dragon(attributes[0], attributes[1], attributes[2], attributes[3], attributes[4], attributes[5]);
					PetList.add(AddedDragon);

				}else if (attributes[1] == "Oink")
				{
					Pet AddedPig = new Pig(attributes[0], attributes[1], attributes[2], attributes[3], attributes[4], attributes[5]);
					PetList.add(AddedPig);

				}	
	
	}//end add pet

	public void saveFile()
	{
		try {
			FileWriter outFile = new FileWriter("PetDocumentation.txt");

			for (Pet temp : PetList)//writes all the pets to the file
			{
				outFile.write(temp.getName() + " " + temp.getSound() + " "+  temp.PetHungerObject().getHunger() + " " + temp.PetIntelligenceObject().getIntelligence() + " " + temp.PetMoodObject().getMood() + " " + temp.PetCleanlinessObject.getCleanliness() + "\n");

			}
		

		} catch (IOException e){
			e.printStackTrace();
		}

		outFile.close();
	}//end save file

	public void printAllPets()
	{
		System.out.println("\nName Sound Hunger Intelligence Mood Cleanliness\n");
		System.out.println("==========================================================");
		for (Pet temp: PetList) //cycle through all the pets in the array list to print their values
		{
			System.out.println(temp.getName() + " " + temp.getSound() + " "+  temp.PetHungerObject().getHunger() + " " + temp.PetIntelligenceObject().getIntelligence() + " " + temp.PetMoodObject().getMood() + " " + temp.PetCleanlinessObject.getCleanliness() + "\n");
		System.out.println("\n");

		}

		System.out.println("==========================================================");
	}//end of print

}//end runner
