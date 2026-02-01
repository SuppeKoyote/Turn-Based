#include <iostream>
#include "player.h"
#include "enemy.h"
#include "ui.h"

int main() {

	player player("titus", 10, 2);
	enemy enemy("goblin", 2, 1);

	drawBeginnfight(player, enemy);

	return 0;
}
