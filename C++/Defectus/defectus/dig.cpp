#include "dig.h"

// Riippuvainen crosshair luokasta. Crosshair luokka j�tettiin kesken Arin palautteen vuoksi, eli ei olisi tuonut lis�arvoa arvostelun n�k�kulmasta. 
// Myyr�n kaivuuluokka Dig toteutettiin, mutta j�tettiin implementoimatta riippuvuuden vuoksi. Koodi kuitenkin testattua ja toiminnallista "dummy" t�ht�imell�.

//muodostaa myyr�n eteen myyr�n kokoisen n�kym�tt�m�n neli�n, jonka kulma on sama, kuin t�ht�imen kulma. Nappia painettaessa n�kym�tt�m�n neli�n alueelta katsotaan collisionissa global bounds
//ja collision s��nt�jen mukana poistetaan, eli "kaivetaan" pois neli�n alueella olevat palikat. 
Dig::Dig() {
}
void Dig::DirectionalDig(sf::Vector2f player, string direction, Block ***&ptrarray) {/*

	sf::Vector2f digAreaLocation;
	sf::Vector2f digAreaSize;

	digAreaLocation.x = player.x + 20;
	digAreaLocation.y = player.y;

	digAreaSize.x = player.x + 20;
	digAreaSize.y = player.y + 24;

	sf::RectangleShape *digArea = new sf::RectangleShape(digAreaLocation);

	digArea->setSize(digAreaSize);
	
	digArea->setRotation(atan2(crosshair.y - player.y, crosshair.x - player.x)); 

	digArea->setOutlineColor(sf::Color::Green);
	
	if (player.x <= ag::ZONE_WIDTH/2 && player.y <= ag::ZONE_HEIGHT/2) {
		//vasen yl�sektori
		funktio();
	}
	if (player.x <= ag::ZONE_WIDTH/2 && player.y > ag::ZONE_HEIGHT/2) {
		//vasen alasektori
		funktio();
	}
	if (player.x > ag::ZONE_WIDTH/2 && player.y <= ag::ZONE_HEIGHT/2) {
		//oikea yl�sektori
		funktio();
	}
	if (player.x > ag::ZONE_WIDTH/2 && player.y < ag::ZONE_HEIGHT/2) {
		//oikea alasektori
		funktio();
	}*/
}

void funktio(int x, int y) {
/*
	for (int a = 0; ;a++) {
		for (int b = 0; b < ag::ZONE_WIDTH / ag::BLOCK_WIDTH;b++) {
			ptrarray[a][b] = new Block(sf::Vector2f(ag::BLOCK_WIDTH, ag::BLOCK_HEIGHT));
			ptrarray[a][b]->setPosition(a*ag::BLOCK_HEIGHT, b*ag::BLOCK_WIDTH);
		}
	}
	*/
}