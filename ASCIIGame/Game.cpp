#include "Game.h"


void Game::play() {
	initNewLevel("Level1.txt");
	
	while (true) {
		std::cout << std::string(100, '\n');
		_level.showLevel();
		char input;
		input = _getch();
		char result = _level.movePlayer(input, _player);
		if (result >= '0' && result <= '9') {
			Door door = _level.getDoor(result - '0');
			initNewLevel(door.getNextLevel());
		}
	}
}

void Game::initNewLevel(std::string levelName) {
	std::ifstream levelFile;
	levelFile.open(levelName);

	if (levelFile.fail()) {
		perror(levelName.c_str());
		return;
	}
	_level.init(levelFile, _player);
}