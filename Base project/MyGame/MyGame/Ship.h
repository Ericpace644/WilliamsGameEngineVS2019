#pragma once

#include  "Engine/GameEngine.h"

class Ship : public GameObject
{
public:
	//Creats our chip
	Ship();
	sf::FloatRect getCollisionRect();

	//Functions overridden from GameObject;
	void draw();
	void update(sf::Time& elapsed);
private:
	sf::Sprite sprite_;
	int fireTimer_ = 0;
};

typedef std::shared_ptr<Ship> ShipPtr;