#include <iostream>
#include "player.h"
#include "enemy.h"

void drawBeginnfight(const player& player,const enemy& enemy) {
	std::cout << "=============================\n";
	std::cout << "--Wilkommen zur Kampfarena--\n";
	std::cout << "=============================\n\n";
	std::cout << player.name + " vs " + enemy.name;
}