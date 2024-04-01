//RunThisOne.java

import java.io.*;
import java.util.*;


public class RunThisOne extends User{

	public ArrayList<User> BankRollCall;

	public static void main(String[] args){
	
		RunThisOne CURRENT = new RunThisOne();
	} //end main


public RunThisOne()
{	
	BankRollCall = new ArrayList<User>();
	
	//gonna reset the BankRollCall to the new updated list from the txt file
	try{
		File theFile = new File("BankRole.txt");
		Scanner input = new Scanner(theFile);

		int i= 0; //assign values to each part of the array
		while(input.hasNext()){
			BankRollCall[i] = input;
		}
		input.close();
	} catch (IOException e)
	{
		System.out.println(e.getMessage());
	}
		

}//end constructor


public static void SignIn()
{
	String AddPIN = "12345";
	String AddNum = "00000";

	Scaner input = new Scanner(System.in);

	System.out.println("Please input your 5 digit Accoutn Number");

	String userName = input.nextLine();

	System.out.println("Please now Enter your PIN");
	
	String userPIN = input.nextLine();
	
	System.out.println("================================"); // this is formatting.

	if (userName.equals(AddNum) && userPIN.equals(AddPIN))
	{
		RunnerAdmin();
	}
	else 
	{
		//find the location in the array list of the inputted userNum with for loop
		//if found it will go into the selection menu, this is where the exit function is so it is okay within the for loop
		for (int i = 0; i < BankRollCall.size(); i++)
		{
			if (BankRollCall[i].super.GetAccountNumber().equals(AddNum))
			{
				if(BankRollCall[i].super.GetAccountPin().equals(AddPIN))
				{
					RunnerUser();
				}
				else
				{
					System.out.println("Incorrect PIN for this Account Number");
				}
			}
		}
		System.out.println("None of the users match your input");
		exit();
		
	}
}


public static void exit()
{
	System.exit(0);
}// terminate the program

public static void PrintAdminOptions()
{
	System.out.println("Admin May Use The Following Commands");
	System.out.println("====================================");
	System.out.println("A:  Add User                        ");
	System.out.println("D: 	Delete User                     ");
	System.out.println("L:  List Users                      ");
	System.out.println("I:  Set Interest Rate               ");
	System.out.println("E:  Exit                            ");
	System.out.println("====================================");

}//end admin options

public static void PrintUserOptions()
{
	System.out.println("User May Use The Following Commands");
	System.out.println("====================================");
	System.out.println("C:  Get Checking Balance            ");
	System.out.println("W: 	Withdraw From Checking          ");	
	System.out.println("D:  Deposit Into Checking           ");
	System.out.println("S: 	Get Savings Balance             ");
	System.out.println("Q:  Withdraw From Savings           ");
	System.out.println("I:  Deposit Into Savings            ");
	System.out.println("E:  Exit                            ");
	System.out.println("====================================");


}//end user options()

public static void RunnerUser(String UserAccountNummer)
{
	boolean KEEPGOING = true;
	String Accc = UserAccountNummer;
	int q = 0; //this is going to store the location of the user in the array list

	for (int i = 0; i < BankRollCall.size(); i++)
	{
		if (BankRollCall[i].super.GetAccountNumber().equals(Accc))
		{
			q = i;
		}
	}

	while (KEEPGOING)
	{
		PrintAdminOptions();

		Scanner input = new Scanner(System.in);
		
		String choice = input.nextLine();

		switch (choice)
		{
			case C://prints checking balance
				float tempCheck = BankRollCall[q].super.GetCheckingBalance();
				System.out.println("Checking Balance: " + tempCheck);
				break;
			case W://withdraws an amount if checking account has sufficient funds
				Scanner withInput = new Scanner(System.in);

				System.out.println("How much would you like to withdraw from Checking?");
				float withAmount = withInput.nextLine();

				if ((BankRollCall[q].super.GetCheckingBalance()) > (withAmount))
				{
					System.out.println("You do not have enough to withdraw this amount");
				}
				else 
				{
					BankRollCall[q].super.WithdrawFromChecking(withAmount);
				}
				break;
			case D: //deposits scanned value into checking
				Scanner depInput = new Scanner(System.in);
				System.out.println("How much would you like to deposit into checking?");
				float depAmount = depInput.nextLine();	

				BankRollCall[q].super.DepositIntoChecking(depAmount);
				break;
			case S: //prints saving balance
				float tempSave = BankRollCall[q].super.GetSavingBalance();
				System.out.println("Saving Balance: " + tempSave);
				break;
			case Q://asks for withdraw amount, chekcs if amount is in balance and then withdraws if possible
				Scanner SithInput = new Scanner(System.in);

				System.out.println("How much would you like to withdraw from savings?");
				float sithAmount = SithInput.nextLine();

				if ((BankRollCall[q].super.GetSavingsBalance()) > (sithAmount))
				{
					System.out.println("You do not have enough to withdraw this amount");
				}
				else 
				{
					BankRollCall[q].super.WithdrawFromSavings(sithAmount);
				}

				break;
			case I://inputs amount into savings
				Scanner sdepInput = new Scanner(System.in);
				System.out.println("How much you would like to depositi into savings?");
				float sdepAmount = sdepInput.nextLine();

				BankRollCall[q].super.DepositIntoSavings(sdepAmount);
				break;
			case E: //before exitiing code, update the file of all the users
				try {
					FileWriter outFile = new FileWriter("BankRole.txt", false);
					PrintWriter output = new PrintWriter(outFile);

					for (int i = 0; i <BankRollCall.size(); i++)
					{
						output.println(BankRollCall[i].super.PrintAllUserData());
					}
					outFile.close();
					output.close();
				} catch(IOException e) {
					System.out.println(e.getMessage());
				}
				exit();
				KEEPGOING = false;
				break;
			default://if no options are chosen thsi is prompted
				System.out.println("Please Enter A Valid Option");
				break;
		}
	}

}



public static void RunnerAdmin()
{

	boolean KEEPGOING = true;

	while (KEEPGOING)
	{
		PrintAdminOptions();

		Scanner input = new Scanner(System.in);
		
		String choice = input.nextLine();

		switch (choice)
		{
			case A:
				Scanner inputttt = new Scanner(System.in);
				int n = BankRollCall.size();
				String NumAcc = "0000" + BankRollCall.size();

				System.out.println("What till the new 5 digit PIN be?");
				String PINAcc = inputttt.nextLine();

				System.out.println("what will the float checking balance be?");
				float CheckAcc = inputttt.nextLine();

				System.out.println("what will the float savings ballance be?");
				float SaveAcc = inputttt.nextLine();

				System.out.println("what will the float Interest Rate be?");
				float RateAcc = inputttt.nextLine();

				BankRollCall[n].super.User(NumAcc, PINAcc, CheckAcc, SaveAcc, RateAcc, 0); //creates new user at end of the list
				break;
			case D:
				Scanner inputtt = new Scanner(System.in);
				System.out.println("Type the AcCounte Number that is to be deleted");
				String ACCInput = inputtt.nextLine();

				for (int i = 0; i < BankRollCall.size() ; i++) //runs through entire array looking for account number
				{
					if ((BankRollCall[i].super.GetAccountNumber()).equals(ACCInput))
					{
						BankRollCall.remove(i); //gets removed if found
					}
				}

				break;

			case L:
				for (int i = 0; i < BankRollCall.size() ; i++) //runs a loop printing out all the user data
				{
					System.out.println(BankRollCall[i].super.PrintAllUserData());
				}

				break;

			case I:
				Scanner inputt = new Scanner(System.in);
				System.out.println("Enter the new float interest rate");
				float newRate = inputt.nextLine(); 
				
				for (int i = 0; i < BankRollCall.size() ; i++) //runs loop and changes all interest for each banker person
				{
					BankRollCall[i].super.SetInterest(newRate);
				}

				break;

			case E: //before exitiing code, update the file of all the users
				try {
					FileWriter outFile = new FileWriter("BankRole.txt", false);
					PrintWriter output = new PrintWriter(outFile);

					for (int i = 0; i <BankRollCall.size(); i++)
					{
						output.println(BankRollCall[i].super.PrintAllUserData());
					}
					outFile.close();
					output.close();
				} catch(IOException e) {
					System.out.println(e.getMessage());
				}
				exit();
				KEEPGOING = false;
				break;
			default:
				System.out.println("Please Enter A Valid Option");
				break;
		}
	}

}

}//end class

