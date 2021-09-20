#include "bomb.h"



bomb::bomb()
{
	
}

void bomb::setAnimation(int c , sf::Time delay) {
   col = c;
   W = Raberd.getSize().x / col;
   H = Raberd.getSize().y;
   deltaTime = delay;

}

sf::IntRect bomb::Update() {
	if (entity::worldClock.getElapsedTime() - last > deltaTime) {
		index++;
		if (index > col-1 ) index = 0;
		sp.setTextureRect({ W*index,0,W,H});
		last = entity::worldClock.getElapsedTime();
	}
	return { W*index,0,W,H };

}
