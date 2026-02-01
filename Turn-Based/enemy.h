#pragma once
#include <string>

struct enemy
{
	std::string name;
	int maxHp;
	int hp;
	int damage;

	enemy(std::string k_name, int k_maxHp, int k_damage);

	void takeDamage(int damage);


};
