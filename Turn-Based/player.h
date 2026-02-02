#pragma once
#include <string>

struct player
{

	enum attacks {
		attack,
		heal,
		block,
	};

	std::string name;
	int maxHp;
	int hp;
	int damage;
	int healAmount;
	attacks attackState;


	player(std::string k_name, int k_maxHp, int k_damage, int k_healAmount, attacks k_attackState);

	void takeDamage(int damage);
	void giveHealth(int heal);
};
