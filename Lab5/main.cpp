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

	return 0;
}