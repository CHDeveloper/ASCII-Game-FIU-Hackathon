#include "Level.h"


// passing player by reference to initialize player position in level
void Level::init(std::ifstream& inFile, Player& player) {
	std::string input;
	// add lines to vector until EOF
	while (getline(inFile, input)) {
		_level.push_back(input);
	}
	for(int i = 0; i < _level.size(); i++) {
		for(int j = 0; j < _level[i].size(); j++) {
			if (_level[i][j] == '@') {
				player.setPos(j, i);
			}
		}
	}
}

void Level::showLevel() {
	for (std::string s : _level) {
		std::cout << s << "\n";
	}
}

void Level::movePlayer(char input, Player& player) {
	switch (input) {
	case 'W':
	case 'w':
		if (getTile(player.getX(), player.getY() - 1) != '#') { 
			setTile(player.getX(), player.getY(), '.');
			player.setPos(player.getX(), player.getY() - 1);
			setTile(player.getX(), player.getY(), '@');
		}
		break;
	case 'A':
	case 'a':
		if (getTile(player.getX()-1, player.getY()) != '#') {
			setTile(player.getX(), player.getY(), '.');
			player.setPos(player.getX() - 1, player.getY());
			setTile(player.getX(), player.getY(), '@');
		}
		break;
	case 'S':
	case 's':
		if (getTile(player.getX(), player.getY()+1) != '#') {
			setTile(player.getX(), player.getY(), '.');
			player.setPos(player.getX(), player.getY()+1);
			setTile(player.getX(), player.getY(), '@');
		}
		break;

	case 'D':
	case 'd':
		if (getTile(player.getX()+1, player.getY()) != '#') {
			setTile(player.getX(), player.getY(), '.');
			player.setPos(player.getX() + 1, player.getY());
			setTile(player.getX(), player.getY(), '@');
		}
		break;
	}
	
}

char Level::getTile(int x, int y) {
	return _level[y][x];
}

void Level::setTile(int x, int y, char tile) {
	_level[y][x] = tile;
}