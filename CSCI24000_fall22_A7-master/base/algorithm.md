
Goals:
 The goal of this program was to write and create an interactive user/admin experience for a banking system

In this banking system there would be interest ratings for savings account, and regular checking accounts
users would be able to access their account with the correct account name and PIN number

Admins would be able to add new users to the system

All data should be stored on a txt file at the end. Because thats super secure.



Input:
There are many inputs for this program, a lot of user inputs if the user is inputting there deposit/withdraw amounts. As well as inputs invovled when attempting to sign in and out of their accounts.

The admin can input all the user data stated above in the GOALS section and then adjust the overal interest rates for EVERY user in the banking system.



Output:
The output for this program is dependent on what the user wishes, for the some outputs are prompted by them with a switch. these will display either their checking or savings account balances. If they input a something into the switch that is not desired, they will get a message alerting them

The output for the admin will be confirmation messages confirming actions they have made in the switch when it comes to manipulating/creating user data.

The BankRole.txt will be changed at the end of the code being ran to update the file to the newest version of the user information.



Steps:

There are three Classes for this banking system: User, Admin, and RunThisOne

The RunThisOne is not object specific, but combines both aspects of the user and admin

The user is made up of components important to the user, Such as pin and account number. Savings/checking accounts.

To access this data, get and set mehtods were made for each, as well as constructors.

In order to easily print these into a text file, a PRINTALLUSERDATA() function was made so that it can all be put into the file in function


The admin has get and set functions for the GLOBAL interest rate and the for the addmin pin and account numbers


In the RUN THIS ONE many functions occur.

The initial main just runs the constructor

The constructor has a read file open and copies all the content from that to an array list so that the data is usable

There is an exit funciton to exit out of the code once the user has pressed that button for the switch. There are a print options for the abilities designated to the admin or the user after they log in.

the SignIn() function has a person input a five digit username and a five digit pin number. The code then runs through an array list of all the Bank users

If the input is that of the admin num = 00000 and pIN = 12345, then they are automatically displayed the admin menu

If the input is not that of the admin, then it is ran through all the user data array list. The array list gets its values from the text file of all user data.

if the username is found, then it checks it the PIN matches that of that specific ACCount Number, if not, the loop continues through all the users. 

If it isn't found, then it exits the prgram after a prompt telling the person that the userPIN and account number was not found.

if the number is found then the menu for the user is shown.

The exit commands for both the admin and user switches opens a write file and overrides and rewrites all the information for all the users in the banking system.

the deposit commands for the user both work by getting a scanned deposit amount and using the .super.deposit... functions to deposit intot the correct accoount.

the withdraws work in the inverse way, subtracting the amount from the balance... however, it first checks if the user has sufficient funds to be able to withdraw such an amount


in the admin switches, the admin has the ability to add users, deleter users, list all users, apply a global interst. 

The global interest asks for an interest rate and then runs a loop through all the users to set their interest rates to the new rate

The del user deletes the index of the suer in the array.

the adduser prompts the admin to give all the variables that make up a user and then uses the argument constructor to create a real boy
