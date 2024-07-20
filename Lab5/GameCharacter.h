#pragma once
#include <iostream>
#include <string>
#include "GameCharacter.h"

using namespace std;

class GameCharacter {
public:
	string name;
	string* tools;

	// Default constructor
	GameCharacter() {
		cout << "The default constructor is called" << endl;
		name = "Miner";
		tools = new string[3];
		tools[0] = "pickaxe";
		tools[1] = "shovel";
		tools[2] = "bow";
	}









	~GameCharacter() {
		delete[] tools;
	}

};

GameCharacter foo1(GameCharacter p);
GameCharacter& foo2(GameCharacter& p);
GameCharacter foo3(GameCharacter& p);
GameCharacter& foo4(GameCharacter p);
GameCharacter& foo5(const GameCharacter& p);