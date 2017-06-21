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

PlayerUser::PlayerUser()
{
	shipsKilled_ = 0;
	shipsAlive_ = 10;
	points_ = 0;
}

void PlayerUser::shoot(int& x, int& y)
{
	cout << "\nType X coord: ";
	cin >> x;
	cout << "Type Y coord: ";
	cin >> y;
}

void PlayerUser::callPause() const
{
	
}