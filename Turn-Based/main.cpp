#include <iostream>
#include "player.h"
#include "enemy.h"
#include "ui.h"
#include "combat.h"

int main() {

	player player("titus", 10, 2, 1, player::attacks::attack);
	enemy enemy("goblin", 2, 1);

	drawBeginnfight(player, enemy);

	bool fighting = true;

	while (fighting) {
		player.attackState = playerAttackInput();
		std::cout << player.attackState;

		if (player.attackState == player::attacks::attack) {
			playerAttack(player, enemy);
		}
		else if (player.attackState == player::attacks::heal) {
			heal(player);
		}
		if (enemy.hp <= 0) {
			std::cout << player.name + " ist gestorben\n";
			break;
		}


		enemyAttack(player, enemy);

		if (player.hp <= 0) {
			std::cout << player.name + " ist gestorben\n";
			break;
		}

		drawStatus(player, enemy);

	}
	

	return 0;
}
