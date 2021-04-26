#include <SFML/Graphics.hpp>
#include <iostream>
#include <sstream>
using namespace sf;
class Map {
public:
	Image map_image;
	Texture map;
	Sprite s_map;
	Map() {
		map_image.loadFromFile("images/map.png");
		map.loadFromImage(map_image);
		s_map.setTexture(map);
	}
};
class Gun {	
public:
	int amount;
	Texture Herotexture;
	Sprite Hero;
	Gun() {
		Herotexture.loadFromFile("images/hero.png");
		Hero.setTexture(Herotexture);
		Hero.setTextureRect(IntRect(0, 0, 706, 308));
		Hero.setPosition(600, 450);
	}
};
int main()
{
	RenderWindow window(sf::VideoMode(1100, 733), "Lesson 7. kychka-pc.ru");
	Map map;
	Gun obj;
	float CurrentFrame = 0;
	Clock clock;
	while (window.isOpen())
	{
		float time = clock.getElapsedTime().asMicroseconds();
		clock.restart();
		time = time / 800;
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		window.clear();
		window.draw(map.s_map);
		window.draw(obj.Hero);
		window.display();
	}
	return 0;
}