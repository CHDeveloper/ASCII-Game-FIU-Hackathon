#include "Game.h"

void Game::play() {
	// open level file
	std::ifstream levelFile;
	levelFile.open("Level1.txt");

	// check if level file exists
	if (levelFile.fail()) {
		perror("Level1.txt");
		return;
	}
	_level.init(levelFile);
	_level.showLevel();
}