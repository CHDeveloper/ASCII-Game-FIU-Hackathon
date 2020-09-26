#include "Level.h"
Level::Level() {

}

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
	case 'w':
	case 'W':
		if (_level[player.getY() - 1][player.getX()] == '#') break;
		else {
			_level[player.getY()][player.getX()] == '.';
			_level[player.getY() - 1][player.getX()] == '@';
			player.setPos(player.getX(), player.getY() - 1);
			break;
		}
	case 'a':
	case 'A':
		if (_level[player.getY()][player.getX()-1] == '#') break;
		else {
			player.setPos(player.getX() - 1, player.getY());
			_level[player.getY()][player.getX()] == '.';
			_level[player.getY()][player.getX()-1] == '@';
			
			break;
		}
		break;

	case 'd':
	case 'D':
		if (_level[player.getY() - 1][player.getX()] == '#') break;
		else {
			_level[player.getY()][player.getX()] == '.';
			_level[player.getY()][player.getX()+1] == '@';
			player.setPos(player.getX() + 1, player.getY());
			break;
		}
		break;

	case 's':
	case 'S':
		if (_level[player.getY() - 1][player.getX()] == '#') break;
		else {
			_level[player.getY()][player.getX()] == '.';
			_level[player.getY() + 1][player.getX()] == '@';
			player.setPos(player.getX(), player.getY() + 1);
			break;
		}
		break;
	}
}