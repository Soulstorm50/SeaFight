#include <iostream>
#include <conio.h>

#include "Player.h"
#include "PlayerAI.h"
#include "PlayerUser.h"
#include "BattleControl.h"

using namespace std;

BattleControl::BattleControl()
{
	players_[0] = new PlayerUser;
	players_[1] = new PlayerAI;

	turnShoot_ = false;
	lastX_ = 0;
	lastY_ = 0;
}

void BattleControl::makeTurn()
{
	players_[static_cast<int>(turnShoot_)]->shoot(lastX_, lastY_);
}

void BattleControl::handleTurn(const int& turnResult)
{
	switch (turnResult)
	{
	case 0:
		if (turnShoot_)
			turnShoot_ = false;
		else
			turnShoot_ = true;
		break;
	case 1:
		players_[static_cast<int>(turnShoot_)]->increasePoints();
		break;
	case 2:
		cout << "Wrong coordinates!";
		_getch();
		break;
	}
}