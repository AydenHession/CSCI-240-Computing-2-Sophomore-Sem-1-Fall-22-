//Admin.java



import java.io.*;
import java.util.Scanner;

public class Admin
{
	
	protected float OverallRate;
	protected String AddPin;
	protected String AddNum;


public Admin()
{
	this.OverallRate = 0.01;
	this.AddNum = "00000";
	this.AddPin = "12345";

}//end constructor	

public Admin(float OverallRate, String AddPin, String AddNum)
{
	this.OverallRate = OverallRate;
	this.AddPin = AddPin;
	this.AddNum = AddNum;
}//end constructor


//===============================================================
//DONT NEED GET OR SET FOR ADD NUM CAUSE IT WILL ALWAYS BE SAME
//==============================================================\


public float GetOverallRate()
{
	return this.OverallRate;
}//end getoverall Rate()

public float SetOverallRate(float NewRate)
{
	this.OverallRate = NewRate;

}//end setoverallRate()








}
