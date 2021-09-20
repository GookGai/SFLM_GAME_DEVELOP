#include <SFML/Graphics.hpp>
#include "entity.h"
class bomb
{
public:
	bomb();
	sf::Texture Raberd;
	sf::RectangleShape sp;
	sf::FloatRect uvRect;
	int index=0;
	int W, H;
	int col;
	sf::Time deltaTime;
	sf::Time last;
	int bom = 0;
public:
	sf::IntRect Update();
	void setAnimation(int col, sf::Time delay);
	
};
