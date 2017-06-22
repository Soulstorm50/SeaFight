#include <iostream>

#include "Player.h"

using namespace std;

void Player::drawStatistics() const
{
	cout << "Ships destroyed: "	<< shipsKilled_ << endl;
	cout << "Ships survive: " << shipsAlive_ << endl;
	cout << "Score: " << points_ << endl;
}