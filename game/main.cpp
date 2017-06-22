#include <Windows.h>
#include <time.h>

#include "Player.h"
#include "PlayerAI.h"
#include "PlayerUser.h"
#include "BattleControl.h"
#include "Grid.h"

void main()
{
	srand(time(NULL));

	BattleControl battleControl;
	Grid gameMap[2];

	gameMap[0].generateShips();
	gameMap[1].generateShips();

	while (true) {
		gameMap[0].draw(1);
		gameMap[1].draw();

		battleControl.makeTurn();

		switch(gameMap[!static_cast<int>(battleControl.getTurnShoot())].takeShot(battleControl.getLastX() - 1, battleControl.getLastY() - 1)) {
		case 0:
			battleControl.handleTurn(0);
			break;
		case 1:
			battleControl.handleTurn(1);
			break;
		case 2:
			battleControl.handleTurn(2);
			break;
		}
		system("cls");
	}
}