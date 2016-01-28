#pragma once
#include "Screen.h"

class MenuScreen : public Screen {

public:

	MenuScreen();
	void showScreen(sf::RenderWindow & renderWindow);
	enum MenuChoice {NewGame, TopScores, Quit, Nothing};
	enum Game::GameState processChoice(enum MenuChoice choice);

private:
//	Button btnNew, btnScores, btnQuit;
};

struct Button {

public:
	sf::Text text;
	sf::Font font;
private:

};