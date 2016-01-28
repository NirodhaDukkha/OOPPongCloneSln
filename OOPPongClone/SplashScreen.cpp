#include "Game.h"
#include "SplashScreen.h"

SplashScreen::SplashScreen() {

	color.r = 0;
	color.b = 0;
	color.g = 0;
	texture.loadFromFile("resources/SplashArt.png");
	sprite.setTexture(texture);

}

void SplashScreen::showScreen(sf::RenderWindow & renderWindow) {
	sf::Vector2f test;
	while (true){
		renderWindow.setFramerateLimit(60);
			renderWindow.clear(color);
			renderWindow.draw(sprite);
			renderWindow.display();
			moveSprite(renderWindow);
		while (renderWindow.pollEvent(event)) {
			if (event.type == sf::Event::KeyPressed /*event.type == sf::Event::MouseButtonPressed*/) {
				return;
			}
			else { break;}
		}
	}
}

void SplashScreen::moveSprite(sf::RenderWindow & renderWindow) {
	//sprite hits left wall
	if ((sprite.getGlobalBounds().left < 0) && (!movingRight)) {
		velocity[0] = speed;
		movingRight = true;
	}
	//sprite hits right wall
	if ((sprite.getGlobalBounds().left + sprite.getGlobalBounds().width > renderWindow.getSize().x) && (movingRight)){
		velocity[0] = -speed;
		movingRight = false;
	}
	//sprite hits top wall
	if ((sprite.getGlobalBounds().top < 0) && (!movingDown)) {
		velocity[1] = speed;
		movingDown = true;
	}
	//sprite hits bottom wall
	if ((sprite.getGlobalBounds().top + sprite.getGlobalBounds().height > renderWindow.getSize().y) && (movingDown)) {
		velocity[1] = -speed;
		movingDown = false;
	}

	sprite.move(velocity[0], velocity[1]);
}

enum Game::GameState SplashScreen::processChoice()
{
	return Game::GameState::ScreenMenu;
}
