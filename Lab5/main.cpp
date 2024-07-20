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
	std::string tools[3];
	tools[0] = "pickaxe";
	tools[1] = "shovel";
	tools[2] = "bow";
	GameCharacter p3("jim", tools);

	p1.displayCharacter();
	p2.displayCharacter();

	return 0;
}