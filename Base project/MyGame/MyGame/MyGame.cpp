#include "Engine/GameEngine.h"
#include "GameScene.h"

const int WINDOW_WIDTH = 900;
const int WINDOW_HEIGHT = 700;

const std::string WINDOW_TITLE = "Bootleg No Man's Sky";

int main()
{
	// Seed the random number generator.
	srand((int)time(NULL));

	// Initialize the game.
	GAME.initialize(WINDOW_WIDTH, WINDOW_HEIGHT, WINDOW_TITLE);

	// Create our scene.
	GameScenePtr scene = std::make_shared<GameScene>();
	GAME.setScene(scene);

	// Run the game loop.
	GAME.run();

	return 0;
}
