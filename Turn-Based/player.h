#pragma once
#include <string>

struct player
{
	std::string name;
	int maxHp;
	int hp;
	int damage;

	enum attacks{};

	player(std::string k_name, int k_maxHp, int k_damage);

	void takeDamage(int damage);
	void giveHealth(int heal);
};
