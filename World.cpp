#include "World.h"
#include <random>

World::World(int width, int height) :
    _grassTerrain(1, false, 0),
    _hillTerrain(3, false, 0),
    _riverTerrain(2, true, 0) {
    this->_width = width;
    this->_height = height;
    this->_tiles = new Tile**[this->_width];
        for (int x = 0; x < this->_width; x++)
        {
            this->_tiles[x] = new Tile*[this->_height];
        }
}
void World::generateTerrain()
{
    // Fill the ground with grass.
    for (int x = 0; x < _width; x++)
    {
        for (int y = 0; y < _height; y++)
        {
            // Sprinkle some hills.
            if (rand() % 15 == 0)
            {
                _tiles[x][y] = &_hillTerrain;
            }
            else
            {
                _tiles[x][y] = &_grassTerrain;
            }
        }
    }

    // Lay a river.
    int x = rand() % _width;
    for (int y = 0; y < _height; y++) {
        _tiles[x][y] = &_riverTerrain;
    }
}

const Tile& World::get_tile(int x, int y) {
    return *_tiles[x][y];
}