// Ceren Askin | Andy Guest | Alexa Bowman - Lab5

// Total Copy Constructor Calls: 3

// foo 1 -- The copy constructor is called once. It is called when 'p' is returned (called just before returning 'p' to create a copy of it)

// foo2 -- The copy constructor is called zero times. It is not called because 'p' be is being passed in by reference, and returned as a refernce (it was never copied). 

// foo3 -- The copy constructor is called once.  It is called when 'p' is returned (called just before returning 'p' to make a copy of it). 

// foo4 -- The copy constructor is called zero times. It is not called because 'p' is being returned as a refernce instead of an actual value.

// foo5 -- The copy constructor is called once. It is called to initalize 'gc' as a copy of 'p'. the copy constructor is called when here "GameCharacter gc". 


#include <iostream>
#include "GameCharacter.h"

int main() {

	GameCharacter p1;
	GameCharacter p2 = p1;
	p1 = p2;
	foo1(p1);
	foo2(p1);
	foo3(p1);
	foo4(p1);
	foo5(p1);

	// Testing default constructor
	cout << "\033[1;31m\nTesting default constructor: \033[0m" << endl;
	GameCharacter defaultCharacter;
	defaultCharacter.displayCharacter();

	//testing the parameterized constructor
	std::cout << "\033[1;31m\nTesting parameterized constructor: \033[0m" << std::endl;
	std::string tools[3] = { "sword", "stick", "spoon" };
	GameCharacter p3("Jim", tools);
	std::cout << "Name: " << p3.name << "\n" << "Tools: " << p3.tools[0] << ", " << p3.tools[1] << ", " << p3.tools[2] << std::endl;

	//testing the copy constructor
	std::cout << "\033[1;31m\nTesting copy constructor: \033[0m" << std::endl;
	GameCharacter p4 = p3;
	std::cout << "Name: " << p4.name << "\n" << "Tools: " << p4.tools[0] << ", " << p4.tools[1] << ", " << p4.tools[2] << std::endl;

	//testing the assignment operator
	std::cout << "\033[1;31m\nTesting assignment operator: \033[0m" << std::endl;
	p1 = p4;
	std::cout << "Name: " << p1.name << "\n" << "Tools: " << p1.tools[0] << ", " << p1.tools[1] << ", " << p1.tools[2] << "\n" << std::endl;


	p1.displayCharacter();
	p2.displayCharacter();

	return 0;
}