#include <iostream>
#include <Windows.h>
#include <time.h>
#include <conio.h>
#include "Player1.h"
#include "AI.h"
#include "Human.h"
#include "BattleControl.h"
#include "Grid.h"
using namespace std;

void Player1::drawStatistics() const
{
	cout << "Ships destroyed: "	<< shipsKilled_ << endl;
	cout << "Ships survive: "	<< shipsAlive_	<< endl;
	cout << "Score: "			<< points_		<< endl;
}