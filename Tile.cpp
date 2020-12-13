#include "Tile.h"

Tile::Tile(int movementCost,
    bool isWater,
    int texture)
    : movementCost_(movementCost),
    isWater_(isWater),
    texture_(texture) {}