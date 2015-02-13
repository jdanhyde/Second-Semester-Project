#ifndef TILEMAPDECLARE_H_INCLUDED
#define TILEMAPDECLARE_H_INCLUDED
#include "ofApp.h"
#include "tile.h"
#include "textureDeclare.h"
void tilemap::generateTileCollection(){
    const Value& tilemapGrid = tilemap::jsonDoc["data"];
    assert(tilemapGrid.IsArray());
    tilemap::tileCollection.resize(tilemapGrid.Size());
    for(int bb = 0; bb < tilemapGrid.Size(); bb++){
        if(tilemapGrid[bb] == 0){
            tilemap::tileCollection[bb] = grassTile;
        }
    }

}

tilemap testmap;
   // testmap.jsonDoc.Parse("tilemaps/Testmap.json");
  //  testmap.mapSize = 400;


#endif // TILEMAPDECLARE_H_INCLUDED
