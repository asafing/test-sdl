#pragma once
class Tile
{
    public:  
        Tile(int movementCost,
            bool isWater,
            int texture);

        int getMovementCost() const { return movementCost_; }
        bool isWater() const { return isWater_; }
        const int getTexture() const { return texture_; }

    private:
        // TODO: CHANGE THE CLASS MEMBERS TO BE RELEVANT
        int movementCost_;
        bool isWater_;
        //Texture texture_;
        // TODO: UPDATE TO SDL TEXTURE AS SEEN ABOVE
        int texture_;
    };

