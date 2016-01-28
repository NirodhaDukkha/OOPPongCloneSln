#pragma once

class Screen {

protected:
	sf::Color color;
	sf::Font font;
	sf::Text text;

public:

	void ShowScreen(sf::RenderWindow &renderWindow);
	Screen();
	sf::Color getColor();
	sf::Text getText();
};