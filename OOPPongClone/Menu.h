#pragma once

#include <SFML\Window.hpp>
#include <SFML\Graphics.hpp>

class MenuButton {

private:
	sf::Font font;
	sf::Text text;

public:
	
	sf::Text getText();

};