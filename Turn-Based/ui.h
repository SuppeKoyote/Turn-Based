#pragma once
#include "player.h"
#include "enemy.h"

void drawBeginnfight(const player& player,const enemy& enemy);

player::attacks playerAttackInput();

void drawStatus(const player& player, const enemy& enemy);