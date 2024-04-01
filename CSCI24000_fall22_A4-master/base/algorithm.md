Goals: Goal of the function is to run a horse race that will ask a user to input a seed and then run a race with a winner at the end. 

Input: The user will input the seed for the random functions

Output: the output will initially be asking for a seed, and then after that will run a horse race. Where each horse has its own designated lane. With the horses being represented as numbers. THe horses will move forward. Once one number reaches the end it will have an output saying "horse (number) is the winner"

Steps:

To solve this problem, we will need a horse Class. 

To store the different horses in the race, the horses will be put into an array of horses.

I need a variable for position and number, since every horse will have a position in number. 

every horse will get a posiion from a random seed so a function to get and set the seed to run the setposition function need to be made. 

A horse class will be made containing position and number. and functions for setting and getting the number, as well as getting and setting its position.

For the race. Each horse will need to be printed. A function will need to be able to print the horse on the track taking its position into account.

The Race will then need to be ran, cycling through each horse and checking for an update in its position
The race function will cylce until a horse has won
So, this race function will need to have an if statement to break the loop once a horse has hit a certain position.

The winner will then need to be printed. 
