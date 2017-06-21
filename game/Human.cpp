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

Human::Human()
{
	shipsKilled_ = 0;
	shipsAlive_ = 10;
	points_ = 0;
}

void Human::shoot(int& x, int& y)
{
	cout << "\nType X coord: ";
	cin >> x;
	cout << "Type Y coord: ";
	cin >> y;
}

void Human::callPause() const
{
	
}