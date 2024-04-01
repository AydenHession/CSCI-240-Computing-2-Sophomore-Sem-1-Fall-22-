Goals:
 
The goal of this program is to make a user interactive pet simulation, where they can add/delete pets that they have and in doing so practice the concept of abstraction in java

In this system there are multiple different attributes, all share common characteristics, but none are the same.

In this system each pet shares common characteristics, but not all are exactly alike, an example being their speak() function.



Output:
 the output for this program is user dependent. In the case of mine it is a file input and output system where the user pet data can be stored overtime and they can add and delte pets as the please. There is a menu that allows them to choose what functions they would like to do and how they would choose to interact with their pets.




Steps:
There are multiple different classes in this program. There are two abstract classes, pet and attributes. 

Pet is has functions and variables that all pets will have in common, for example a name. all will have the functions Speak() and Dance() but my do these differently so they are declared in pet but not written until you get inside the specific pet files.\

Similarly, Attributes has functions that all pet-attributes will have. Every hunger mood intelligence and cleanliness will have an increase and decrease function that is standard across all of them to increase or decreased the specific attributes.

In the runner, there are mutliple methods that help the user. 

The main function first creates an array list to store all of the pets, then runs a read() command to read all the pets from a file and add them to the array list to make them more useable. Then the menu() is opened up so that the user can make changes to their pets. After the menu() function in main, the last is saveFile() and this saves all the changes made by the user and adds them to the documented txt file so that there pets are saved

the menu function allows the user to add a pet, delete a pet, and print all of their pets.

the addpet() function asks the user to fill out all the variables that make up a pet, and depending on what type of species they choose, the addpet() will add a pet of the correct type to the array list. 

the deletepet() function asks the user for a name of a pet that they wish to be exiled from existence, then will search through the array list of pets to look for a name that matches the name of that the user has inputted into the program. if it finds this, the pet will be deleted.

The printallpets() function runs through the arraylist and prints all the pets attributes in the order in which they appear in the arary list.


