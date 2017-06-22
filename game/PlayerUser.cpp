#include <iostream>

#include "Player.h"
#include "PlayerUser.h"

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