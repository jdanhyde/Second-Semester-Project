#ifndef TILE_H
#define TILE_H
#include "ofMain.h"


class tile
{
    public:
        int tileID;
        string tileFileLocation;
        ofImage tileTexture;
        int position[2];
        bool passable;
        short damagePerTurn;
        short speedBonus;
        short rangeBonus;
        void drawToGrid(int order);
    protected:
    private:
};


#endif // TILE_H
