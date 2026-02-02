#include <iostream>
#include <limits>
#include "player.h"
#include "enemy.h"

void drawBeginnfight(const player& player,const enemy& enemy) {
	std::cout << "=============================\n";
	std::cout << "--Wilkommen zur Kampfarena--\n";
	std::cout << "=============================\n\n";
	std::cout << player.name + " vs " + enemy.name + "\n\n";
}

player::attacks playerAttackInput() {
	std::cout << "Spieler wähle dein Move\n";
	std::cout << "1. angreifen\n2. Heilen\n3. Blocken\n\nInput: ";

	player::attacks attack = player::attacks::attack;

	bool inputPhase = true;
	while (inputPhase) {
		int input;
		std::cin >> input;
		input -= 1;

		if (std::cin.fail()) {
			std::cout << "Wähle ein gültigen Move!\n";
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			continue;
		}

		if (input >= 0 && input <= 2) {
			attack = static_cast<player::attacks>(input);
			inputPhase = false;
		}
		else{
			std::cout << "Wähle ein gültigen Move!\n";
		}
	}

	return attack;

}

void drawStatus(const player& player, const enemy& enemy) {
	std::cout << player.name + " hat noch " + std::to_string(player.hp) + "\n";
	std::cout << enemy.name + " hat noch " + std::to_string(enemy.hp) + "\n";
}