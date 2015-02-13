#pragma once
#include "tile.h"
#include "ofMain.h"
#include "rapidjson-master\include\rapidjson\document.h"
#include "rapidjson-master\include\rapidjson/writer.h"
#include "rapidjson-master\include\rapidjson/stringbuffer.h"
#include <vector>
using namespace rapidjson;
class tilemap
{
    public:
        vector<tile>tileCollection;
        int mapSize;
        Document jsonDoc;
        void drawTilemap();
        void generateTileCollection();
    protected:
    private:
};
class ability{
public:

};
class heroClass{
public:
    vector<ability> jobAbilities;

};
class structure{
public:
    bool passable;
    short healingPerTurn;
    short speedBonus;
    short rangeBonus;

};
class hero{
public:
    heroClass job;
    vector<int>stats;
    vector<ability> jobAbilities;


};
class weapon{
public:
    vector<int>stats;

};

class ofApp : public ofBaseApp{
	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y);
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

};
