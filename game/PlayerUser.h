#ifndef PLAYERUSER_H
#define PLAYERUSER_H

class PlayerUser : public Player
{
public:
	PlayerUser();

	void shoot(int& x, int& y);
	void callPause() const;
};

#endif