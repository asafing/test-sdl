#pragma once
#include "Tile.h"

class World
{
private:
	Tile*** _tiles;
	int _width;
	int _height;
	Tile _grassTerrain;
	Tile _hillTerrain;
	Tile _riverTerrain;
public:
	// Getters + Setters
	const Tile& get_tile(int x, int y);

	// Ctors
	World(int width, int height);
	void generateTerrain();
};

