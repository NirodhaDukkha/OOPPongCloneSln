#include "Menu.h"

sf::Text MenuButton::getText() {
	font.loadFromFile("resources/freescpt.ttf");
	text.setFont(font);
	text.setColor(sf::Color::Red);
	text.setCharacterSize(64);
	text.setString("test string");
	text.setPosition(0, 0);

	return text;
}