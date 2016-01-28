#include "Game.h"
#include "Screen.h"
#include "SplashScreen.h"
#include "MenuScreen.h"

void Game::Start()
{

	renderWindow.create(sf::VideoMode(800, 480), "Pong Clone", sf::Style::Fullscreen);
	gameState = Game::ScreenSplash;

	while (!IsExiting()) {
		GameLoop();
	}

	renderWindow.close();
}

bool Game::IsExiting()
{

	if (gameState == Game::Exiting) {
		return true;
	}
	else {
		return false;
	}
}

void Game::GameLoop() {

	sf::Event event;
	Screen screen;
	SplashScreen splashScreen;
		while (renderWindow.pollEvent(event)) {

			switch (gameState) {
			case Game::ScreenMenu: {
				renderWindow.clear(sf::Color::Blue);
				renderWindow.display();
				break;
			}
			case Game::ScreenSplash: {
					
				splashScreen.showScreen(renderWindow);
				gameState = splashScreen.processChoice();
				break;
			}
			case Game::ScreenGame: {
				break;
			}
			case Game::ScreenScore: {
				break;
			}
			}
			if (event.type == sf::Event::Closed) {
				gameState = Exiting;
			}

		}
}

Game::GameState Game::gameState = ScreenSplash;
sf::RenderWindow Game::renderWindow;