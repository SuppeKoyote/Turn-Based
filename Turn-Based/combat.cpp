#include <iostream>
#include "player.h"
#include "enemy.h"

void playerAttack(player& player, enemy& enemy) {
	enemy.takeDamage(player.damage);
	std::cout << player.name + " greift " + enemy.name + " und fügt im " + std::to_string(player.damage) + " zu\n";
}

void heal(player& player) {
	player.giveHealth(player.healAmount);
	std::cout << player.name + "heilt sich für " + std::to_string(player.healAmount) + " Leben\n";
}

void enemyAttack(player& player, enemy& enemy) {
	if (player.attackState != player::attacks::block) {
		player.takeDamage(enemy.damage);
		std::cout << enemy.name + " greift " + player.name + " und fügt im " + std::to_string(enemy.damage) + " zu\n";
	}
	else {
		std::cout << player.name + " blockiert den Angriff von " + enemy.name + "\n";
	}


}