#pragma once

class AI : public Player1
{
public:
			AI();

	void	shoot(int& x, int& y);
private:
	int lastHitX_;
	int lastHitY_;
};