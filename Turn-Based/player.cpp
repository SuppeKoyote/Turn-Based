#include <string>
#include "player.h"

player::player(std::string k_name, int k_maxHp, int k_damage, int k_healAmount, attacks k_attackState) {
	name = k_name;
	maxHp = k_maxHp;
	hp = k_maxHp;
	damage = k_damage;
	healAmount = k_healAmount;
	attackState = k_attackState;
}

void player::takeDamage(int damage) {
	hp -= damage;
}

void player::giveHealth(int heal) {
	hp += heal;
}
