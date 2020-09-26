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
	
	/*while (true) {
		std::cout << std::string(100, '\n');
		_level.showLevel();
		char input;
		std::cout << std::endl << player.getX() << " " << player.getY();
		input = _getch();
		_level.movePlayer(input, player);

	}*/
}