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

void Player::drawStatistics() const
{
	cout << "Ships destroyed: "	<< shipsKilled_ << endl;
	cout << "Ships survive: " << shipsAlive_ << endl;
	cout << "Score: " << points_ << endl;
}