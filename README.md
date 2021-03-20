# Week9Midterm

Midterm exam
Write the following two classes:  Whole and Part.

What is the sequence in which constructors and destructors are executed?

Step1 -	Define two classes, Whole and part.  Use a strong "has a" relationship with the two classes.

Constructor Functions
	Define a default constructor for the Part class.
		Default just prints out "In default part constructor"
	Define a default and a parm constructor for the Whole class.
		In Whole Default constructor assigns wholeName = "None"; and prints out "In whole default Constructor" 
		In Whole Parm constructor - Passes in name to WholeName and
		Then It prints out value of wholeName variable and "In Whole parm constructor"
	Destructor Functions
	Define a destructor function for the part class.
	Define a string variable called wholeName in the whole class.
	Define a getName function for whole class.
Two test.
Step 2 -Declare a Whole W1, with default constructor 
    	Have the Whole constructor print "called default constructor", and contents of wholeName variable
    	Have the Whole Destructor print "called destructor", and contents of wholeName variable
	Declare a Whole W2, with a parm constructor - Have it pass in "w2"
    	Have the Whole constructor print "called parm constructor", and contents of wholeName variable.
    	Have the Whole Destructor print "called destructor", and the contents of wholeName variable.


Step 3 - use the dot 
	Use the dot notation to print out the contents of W1 wholeName variable
	Use the dot notation to print the contents of W2 wholeName variable
