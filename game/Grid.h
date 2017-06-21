#pragma once

class Grid
{
public:
			Grid();

	void	generateShips();
	void	placeShip(const int& x, const int& y, const int& dirrection, const int& length);
	void	clearGameField();
	int		takeShot(const int& x, const int& y);
	bool	isShootedShipAlive()																	const;
	bool	isThereCollisions(const int& x, const int& y, const int& dirrection, const int& length)	const;
	int		generateValue(const int& minValue, const int& maxValue)									const;
	void	draw(bool isAllVisible = 0)																const;
private:
	char	tomporaryStorage_[12][12]; 
	int		ships_[10][10]; 
	bool	areShipsOnMap;
};