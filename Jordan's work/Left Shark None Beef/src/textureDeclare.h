#ifndef TEXTUREDECLARE_H_INCLUDED
#define TEXTUREDECLARE_H_INCLUDED
#include "ofApp.h"
#include "tile.h"
class tile;
void tile::drawToGrid(int order){
    tile::tileTexture.draw(order*32,order*32);

}


tile grassTile;
    grassTile.tileID = 0;
    grassTile.tileFileLocation = "/textures/Grass.png";
    grassTile.tileTexture.loadImage(grassTile.tileFileLocation);

tile sandTile;
    sandTile.tileID = 1;
    sandTile.tileFileLocation = "/textures/Sand.png";
    sandTile.tileTexture.loadImage(sandTile.tileFileLocation);

tile waterTile;
    waterTile.tileID = 2;
    waterTile.tileFileLocation = "/textures/Water.png";
    waterTile.tileTexture.loadImage(waterTile.tileFileLocation);


#endif // TEXTUREDECLARE_H_INCLUDED
