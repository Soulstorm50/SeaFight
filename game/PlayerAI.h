#ifndef PLAYERAI_H
#define PLAYERAI_H

class PlayerAI : public Player
{
public:
	PlayerAI();

	void shoot(int& x, int& y);

private:
	int lastHitX_;
	int lastHitY_;
};

#endif