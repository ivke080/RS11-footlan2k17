#include <iostream>
#include <SFML/Graphics.hpp>
#include "headers/Game.h"
#include "headers/consts.h"

const int WINDOW_WIDTH = 550;
const int WINDOW_HEIGHT = 800;
const char* TITLE = "FootLan2k17";
const double UPDATE_TIME = 0.005;

int main(int argc, char *argv[])
{
	Game game;
	game.run();

	return 0;
}
