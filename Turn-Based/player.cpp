#include <string>
#include "player.h"

player::player(std::string k_name, int k_maxHp, int k_damage) {
	name = k_name;
	maxHp = k_maxHp;
	hp = k_maxHp;
	damage = k_damage;
}

void player::takeDamage(int damage) {
	hp -= damage;
}

void player::giveHealth(int heal) {
	hp += heal;
}

enum player::attacks {
	attack,
	heal,
	block
};