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

AI::AI()
{
	lastHitX_ = 0;
	lastHitY_ = 0;
}

void AI::shoot(int& x, int& y)
{
	x = rand() % 10 + 1;
	y = rand() % 10 + 1;
}