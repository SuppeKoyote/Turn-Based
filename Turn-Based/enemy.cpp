#include "enemy.h"
#include <string>

enemy::enemy(std::string k_name, int k_maxHp, int k_damage) {
	name = k_name;
	maxHp = k_maxHp;
	hp = k_maxHp;
	damage = k_damage;
}

void enemy::takeDamage(int damage) {
	hp -= damage;
}