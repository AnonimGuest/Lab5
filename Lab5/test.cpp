#include "GameCharacter.h"
#include <iostream>

using namespace std;

// foo1 -- the copy constructor was called 2 times in this function 
GameCharacter foo1(GameCharacter p) {
	return p;
}

// foo2 -- the copy constructor was called zero times in this function 
GameCharacter& foo2(GameCharacter& p) {
	return p;
}

// foo3 -- the copy constructor was called one time in this function 
GameCharacter foo3(GameCharacter& p) {
	return p;
}

// foo4 -- the copy constructor is called one time in this function 
GameCharacter& foo4(GameCharacter p) {
	return p;
}

// foo5 -- the copy constructor is called zero times in this function 
GameCharacter& foo5(const GameCharacter& p) {
	GameCharacter gc;
	return gc;
}