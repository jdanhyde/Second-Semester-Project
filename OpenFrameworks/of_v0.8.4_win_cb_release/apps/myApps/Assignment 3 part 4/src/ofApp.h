#pragma once

#include "ofMain.h"


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
		int color[3], width, length, widthA, lengthA;
};

class tile{
    public:
    int length, width, xPos, yPos, color[3];
    bool drawn;
    void draw();
};
class board{
    public:
    int length, width;
    vector<tile>boardContains;
    void drawBoard();
    void generateTiles(int lengthA,int widthA, int color[3]);
};
