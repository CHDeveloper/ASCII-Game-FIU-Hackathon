#include "Game.h"


void Game::play() {
	// open level file
	Player player;
	std::ifstream levelFile;
	levelFile.open("Level1.txt");

	// check if level file exists
	if (levelFile.fail()) {
		perror("Level1.txt");
		return;
	}
	_level.init(levelFile, player);
	_level.showLevel();
	/*while (true) {
		_level.showLevel();
		char input;
		input = _getch();
		_level.movePlayer(input, player);
	}*/
}