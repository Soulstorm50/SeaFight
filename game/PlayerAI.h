#pragma once

class PlayerAI : public Player
{
public:
	PlayerAI();

	void shoot(int& x, int& y);

private:
	int lastHitX_;
	int lastHitY_;
};