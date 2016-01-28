#pragma once
#include <SFML\Window.hpp>
#include <SFML\Graphics.hpp>

class Game
{

public:
	static void Start();
	enum GameState {ScreenSplash, ScreenMenu, ScreenScore, ScreenGame, Exiting};

private:
	static bool IsExiting();
	static void GameLoop();
	static GameState gameState;
	static sf::RenderWindow renderWindow;

};