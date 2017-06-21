#include <iostream>
#include <Windows.h>
#include <time.h>
#include <conio.h>
#include "Player.h"
#include "PlayerAI.h"
#include "PlayerUser.h"
#include "BattleControl.h"
#include "Grid.h"
using namespace std;

PlayerAI::PlayerAI()
{
	lastHitX_ = 0;
	lastHitY_ = 0;
}

void PlayerAI::shoot(int& x, int& y)
{
	x = rand() % 10 + 1;
	y = rand() % 10 + 1;
}