#pragma once

class PlayerUser : public Player
{
public:
	PlayerUser();

	void shoot(int& x, int& y);
	void callPause() const;
};