#pragma once

#include "ofMain.h"
class startPoint{
public:
    int pos[2];
    int color[3];
    int score;


};

class mainPoint{
public:
    int pos[2];
    int color[3];
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
		int trials, randNumb, halfDist;
        vector<startPoint>startPoints;
        vector<mainPoint>gamePoints;
};


