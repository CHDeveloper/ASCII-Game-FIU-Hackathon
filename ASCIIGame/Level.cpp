#include "Level.h"


// passing player by reference to initialize player position in level
void Level::init(std::ifstream& inFile, Player& player, int enteringDoor) {
	std::string input;
	inFile >> input;
	_doors.clear();
	while (input != "end") {
		int doorId;
		std::string nextLevel;
		int x;
		int y;
		int connectingDoor;
		inFile >> doorId >> nextLevel >> x >> y >> connectingDoor >> input;
		_doors.push_back(Door(x, y, nextLevel, doorId, connectingDoor));
	}
	// remove all strings in levels and doors vector, if any
	_level.clear();
	// add lines to vector until EOF
	while (getline(inFile, input)) {
		_level.push_back(input);
	}
	setTile(_doors[enteringDoor].getX(), _doors[enteringDoor].getY(), '@');
	player.setPos(_doors[enteringDoor].getX(), _doors[enteringDoor].getY());
}



void Level::showLevel() {
	std::cout << std::string(100, '\n');
	for (std::string s : _level) {
		for (char c : s) {
			if (c >= '0' && c <= '9') {
				std::cout << ' ';
			}
			else {
				std::cout << c;
			}
		}
		std::cout << std::endl;
	}
}

char Level::movePlayer(char input, Player& player) {
	char nextTile;
	switch (input) {
	case 'W':
	case 'w':
		nextTile = getTile(player.getX(), player.getY() - 1);
		if (nextTile == '.') { 
			setTile(player.getX(), player.getY(), '.');
			player.setPos(player.getX(), player.getY() - 1);
			setTile(player.getX(), player.getY(), '@');
			return '.';
		}
		return nextTile;
		break;
	case 'A':
	case 'a':
		nextTile = getTile(player.getX() - 1, player.getY());
		if (nextTile == '.') {
			setTile(player.getX(), player.getY(), '.');
			player.setPos(player.getX() - 1, player.getY());
			setTile(player.getX(), player.getY(), '@');
			return '.';
		}
		return nextTile;
		break;
	case 'S':
	case 's':
		nextTile = getTile(player.getX(), player.getY() + 1);
		if (nextTile == '.') {
			setTile(player.getX(), player.getY(), '.');
			player.setPos(player.getX(), player.getY()+1);
			setTile(player.getX(), player.getY(), '@');
			return '.';
		}
		return nextTile;
		break;

	case 'D':
	case 'd':
		nextTile = getTile(player.getX() + 1, player.getY());
		if (nextTile == '.') {
			setTile(player.getX(), player.getY(), '.');
			player.setPos(player.getX() + 1, player.getY());
			setTile(player.getX(), player.getY(), '@');
			return '.';
		}
		return nextTile;
		break;
	}
	return '.';
}

char Level::getTile(int x, int y) {
	return _level[y][x];
}

void Level::setTile(int x, int y, char tile) {
	_level[y][x] = tile;
}

Door Level::getDoor(int index) {
	return _doors[index];
}

