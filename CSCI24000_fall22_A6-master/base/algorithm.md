Goals: 
The goal of this program is to take student data and print it out into separate files, one containing first and last names only and the other one containing all student data.


Input:
student data from "students.dat" file



outPuts:
two files, one file is the list of student names, another file is the output of all student data.



algorithm:

has 4 separate classes: student, date, stats, and location.

student is the master class, the other three feed into students

a file of students.dat is imported, containing the information of many students. 

an array of students will be created in a the main.cpp file to store all the student object.

each student object has three object variables also stored on the heap, these are deleted using a deconstructor.

all objects have print statements, and a mainline print statement is available under the student object to the "shortReport.txt" and "fullReport.txt" file printouts

an array is used to get lines from the "students.dat" file and import them into an array of students

the data from the array of students is then stored in the two report files

Once all this is done, the "delete[] <array name>" is ran to clear the remaining memory on the heap memory.

