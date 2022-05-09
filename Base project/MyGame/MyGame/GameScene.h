#pragma once

#include "Engine/GameEngine.h"

class GameScene : public Scene {
 public:
  // Creates our Scene.
  GameScene();
  // Get the Current score
  int getScore();

  // Increase the score
  void increaseScore();

  // get the number of lives
  int getLives();

  // Decrease the number of lives
  void decreaseLives();

private:
	int score_ = 0;
	int lives_ = 3;
};

typedef std::shared_ptr<GameScene> GameScenePtr;
