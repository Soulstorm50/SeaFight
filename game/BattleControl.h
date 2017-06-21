#pragma once

class BattleControl
{
public:
			BattleControl();

	int			getLastX() { return lastX_; }
	int			getLastY() { return lastY_; }
	bool		getTurnShoot() { return turnShoot_; }

	void		makeTurn();
	void		handleTurn(const int& turnResult);
private:
	Player1*		players_[2];

	bool		turnShoot_;
	int			lastX_;
	int			lastY_;
};