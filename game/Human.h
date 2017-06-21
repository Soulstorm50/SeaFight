#pragma once

class Human : public Player1
{
public:
			Human();

	void	shoot(int& x, int& y);
	void	callPause() const;
};