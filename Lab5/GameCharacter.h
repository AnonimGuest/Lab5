#pragma once
#include <iostream>
#include <string>
#include "GameCharacter.h"
#define MAX_TOOLS 3

using namespace std;

class GameCharacter {

	string name;
	string* tools;

public:
	// Default constructor
	GameCharacter() {
		cout << "The default constructor is called" << endl;
		name = "Miner";
		tools = new string[MAX_TOOLS];
		tools[0] = "pickaxe";
		tools[1] = "shovel";
		tools[2] = "bow";
	}

	//parameterized constructor -> called when parameters are specified when creating a gamecharacter
	GameCharacter(std::string n, std::string* toolArray) {
		name = n;
		tools = new std::string[MAX_TOOLS];
		//loops through the given toolArray and puts each item into the gamecharacters tools
		for (int i = 0; i < MAX_TOOLS; i++) {
			tools[i] = toolArray[i];
		}
		std::cout << "the parameterized constructor is called" << std::endl;
	}

	//copy constructor -> called when a gamecharacter is created from another gamecharacter
	//all values are copied to the newly created gamecharacter
	GameCharacter(const GameCharacter& copy) {
		name = copy.name; 
		tools = new std::string[MAX_TOOLS];
		//loops through the character to copy toolArray and puts each item into the new gamecharacters tools
		for (int i = 0; i < MAX_TOOLS; i++) {
			tools[i] = copy.tools[i];
		}
		std::cout << "the copy constructor is called" << std::endl;
	}

	//assignment operator -> called when an object of game chaarcter is assigned to another gamecharacter with tthe = sign
	//no new game character object is created for this
	GameCharacter& operator=(const GameCharacter& copy) {
		name = copy.name;
		tools = new std::string[MAX_TOOLS];
		//loops through the character to copy toolArray and puts each item into the gamecharacters tools
		for (int i = 0; i < 3; i++) {
			tools[i] = copy.tools[i];
		}
		std::cout << "the assignment operator is called" << std::endl;
		return *this; //returns the gamecharacter object
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