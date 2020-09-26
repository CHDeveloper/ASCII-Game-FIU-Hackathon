#include "Door.h"
Door::Door(int x, int y, std::string nextLevel, int doorID) {
	_xPos = x;
	_yPos = y;
	_nextLevel = nextLevel;
	_doorID = doorID;
}

int Door::getX() {
	return _xPos;
}

int Door::getY() {
	return _yPos;
}

int Door::getDoorID() {
	return _doorID;
}

std::string Door::getNextLevel() {
	return _nextLevel;
}