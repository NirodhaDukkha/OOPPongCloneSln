#include "Game.h"
#include "Screen.h"

void Screen::ShowScreen(sf::RenderWindow & renderWindow)
{
	renderWindow.clear(getColor());
	renderWindow.draw(getText());
	renderWindow.display();
}

Screen::Screen(){
	font.loadFromFile("resources/freescpt.ttf");
	text.setCharacterSize(36);
	text.setColor(sf::Color::Red);
	text.setFont(font);
	text.setString("test string");
	color.r = 0;
	color.b = 0;
	color.g = 255;
};

sf::Color Screen::getColor() {
	return color;
}
sf::Text Screen::getText() {
	return text;
}
