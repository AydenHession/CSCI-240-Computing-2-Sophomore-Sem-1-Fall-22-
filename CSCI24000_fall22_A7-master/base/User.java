//user.java


import java.io.*;
import java.util.Scanner;

public class User implements Serializable extends Admin
{

	protected float AccInterestRate;
	protected float AccSavingsBal;
	protected float AccCheckingBal;
	protected int AccPeriodMonths;

	protected String AccNum;
	protected String AccPin;



public User()
{
	this.AccInterestRate = .01;
	this.AccSavingsBal = 0000.;
	this.AccCheckingBal = 0000.;
	this.AccPeriodMonths = 0;

	this.AccNum = "00001";
	this.AccPin = "98765";
}//end constructor


public User(float AccInterestRate, float AccSavingsBal, float AccCheckingBal, int AccPeriodMonths, String AccNum, String AccPin)
{
	this.AccInterestRate = AccInterestRate;
	this.AccSavingsBal = AccSavingsBal;
	this.AccCheckingBal = AccCheckingBal;
	this.AccPeriodMonths = AccPeriodMonths;

	this.AccNum = AccNum;
	this.AccPin = AccPin;

}//end constructor

/*=============================
 *Pin and AccNum setters/getters
 * ============================*/

public void SetAccountNumber(String Num)
{
	this.AccNum = Num;
}//end set ACCNUM

public String GetAccountNumber()
{
	return this.AccNum;
}// end get ACCNUM

public void SetAccountPin(String Pin)
{
	this.AccPin = Pin;
}

public String GetAccountPin()
{
	return this.AccPin;
}

public void SetInterest(float pain)
{
	this.AccInterestRate = pain;
}

public float GetInterest()
{
	return this.AccInterestRate;
}



//===========================
//STARTING BANKING FUNCTIONS
//===========================



public float GetCheckingBalance()
{
	return this.AccCheckingBal;
}//end getchecckingbalance()

public void WithdrawFromChecking(float amount)
{
	this.AccCheckingBal -= amount;

}//end withdrawfromchecking()

public void DepositIntoChecking(float amount)
{
	this.AccCheckingBal += amount;
}//end depositIntoChecking()


public float GetSavingsBalance()
{
	return this.AccSavingsBal;
}//end getsavingsbalance()

public void WithdrawFromSavings(float amount)
{
	this.AccSavingsBal -= amount;
}//end withdraw from savings()

public void DepositIntoSavings(float amount)
{
	this.AccSavingsBal += amount;
}//end depositIntoSavings()


//======================================
//printing data, this is for outpt file
//=====================================



public String PrintAllUserData()
{
	String THERETURN;
	


	THERETURN = AccNum + "," +AccPin + "," + AccCheckingBal + "," + AccSavingsBal + "," + AccInterestRate + "," + AccPeriodMonths;

	return THERETURN;

}//end PrintAllUserData()





}//end class

