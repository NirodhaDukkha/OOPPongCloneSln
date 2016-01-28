#pragma once
#include "Screen.h"

class SplashScreen : public Screen	{


public:
	sf::Event event;
	SplashScreen();
	void showScreen(sf::RenderWindow & renderWindow);
	void moveSprite(sf::RenderWindow & renderWindow);
	enum Game::GameState processChoice();

private:
	sf::Texture texture;
	sf::Sprite sprite;
	bool movingDown = true;
	bool movingRight = true;
	float speed = 5.0f;
	float velocity[2] = { speed, speed };
};