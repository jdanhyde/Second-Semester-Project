#include "main.h"


void tile::drawToGrid(int order){
    tile::tileTexture.draw(order*32,order*32);
}

void tilemap::generateTileCollection(){
    const Value& tilemapGrid = tilemap::jsonDoc["data"];
    assert(tilemapGrid.IsArray());
    tilemap::tileCollection.resize(tilemapGrid.Size());
    for(int bb = 0; bb < tilemapGrid.Size(); bb++){
        if(tilemapGrid[bb] == 0){
            tilemap::tileCollection[bb] = grassTile;
        }
        else if(tilemapGrid[bb] == 1){
            tilemap::tileCollection[bb] = sandTile;
        }
        else if(tilemapGrid[bb] == 2){
            tilemap::tileCollection[bb] = waterTile;
        }
    }

}
void tilemap::drawTilemap(){
    const Value& tilemapGrid = tilemap::jsonDoc["data"];
    assert(tilemapGrid.IsArray());
    for(int aa = 0; aa < tilemap::mapSize; aa++){
        tilemap::tileCollection[aa].drawToGrid(aa);
    }
}
int main()
{
    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
    grassTile.tileID = 0;
    grassTile.tileFileLocation = "/textures/Grass.png";
    grassTile.tileTexture.loadImage(grassTile.tileFileLocation);

    sandTile.tileID = 1;
    sandTile.tileFileLocation = "/textures/Sand.png";
    sandTile.tileTexture.loadImage(sandTile.tileFileLocation);

    waterTile.tileID = 2;
    waterTile.tileFileLocation = "/textures/Water.png";
    waterTile.tileTexture.loadImage(waterTile.tileFileLocation);

    testmap.jsonDoc.Parse("tilemaps/Testmap.json");
    testmap.mapSize = 400;
    testmap.generateTileCollection();

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        testmap.drawTilemap();
        window.display();
    }

    return 0;
}
