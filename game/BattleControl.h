#ifndef BATTLECONTROL_H
#define BATTLECONTROL_H

class BattleControl
{
public:
	BattleControl();

	int	getLastX() { return lastX_; }
	int	getLastY() { return lastY_; }
	bool getTurnShoot() { return turnShoot_; }

	void makeTurn();
	void handleTurn(const int& turnResult);

private:
	Player* players_[2];

	bool turnShoot_;
	int	lastX_;
	int	lastY_;
};

#endif