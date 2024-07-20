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



	//testing the parameterized constructor
	std::cout << "\nTesting parameterized constructor: " << std::endl;
	std::string tools[3] = { "sword", "stick", "spoon" };
	GameCharacter p3("Jim", tools);
	std::cout << "Name: " << p3.name << " Tools: " << p3.tools[0] << ", " << p3.tools[1] << ", " << p3.tools[2] << std::endl;

	//testing the copy constructor
	std::cout << "\nTesting copy constructor: " << std::endl;
	GameCharacter p4 = p3;
	std::cout << "Name: " << p4.name << " Tools: " << p4.tools[0] << ", " << p4.tools[1] << ", " << p4.tools[2] << std::endl;

	//testing the assignment operator
	std::cout << "\nTesting assignment operator: " << std::endl;
	p1 = p4;
	std::cout << "Name: " << p1.name << " Tools: " << p1.tools[0] << ", " << p1.tools[1] << ", " << p1.tools[2] << std::endl;


	p1.displayCharacter();
	p2.displayCharacter();

	return 0;
}