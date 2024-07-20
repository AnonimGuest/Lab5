#include "GameCharacter.h"
#include <iostream>

using namespace std;

GameCharacter foo1(GameCharacter p) {
	return p;
}
GameCharacter& foo2(GameCharacter& p) {
	return p;
}
GameCharacter foo3(GameCharacter& p) {
	return p;
}
GameCharacter& foo4(GameCharacter p) {
	return p;
}
GameCharacter& foo5(const GameCharacter& p) {
	GameCharacter gc;
	return gc;
}