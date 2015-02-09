#include "ofApp.h"
//prediction - triforce-ish fractal thing
//--------------------------------------------------------------
void ofApp::setup(){
    int shapeSize;
    cout << "How many points do you want your shape to have?" << endl;
        cin >> shapeSize;
    startPoints.resize(shapeSize);
        for(int aa = 0; aa < startPoints.size(); aa++){
            cout << "Point " << aa + 1 << ", what is its x position?" << endl;
                cin >> startPoints[aa].pos[0];
            cout << "Point " << aa + 1 << ", what is its y position?" << endl;
                cin >> startPoints[aa].pos[1];
            startPoints[aa].color[0] = rand()%255 * aa % 255;
            startPoints[aa].color[1] = rand()%255 * (aa/2) % 255;
            startPoints[aa].color[2] = rand()%255 * (aa*3) % 255;
    }
    cout << "How many trials do you want to run?" << endl;
        cin >> trials;
        gamePoints.resize(trials);
    cout << "Where do you want to start your game? Input an x then a y" << endl;
        cin >> gamePoints[0].pos[0];
        cin >> gamePoints[0].pos[1];
        gamePoints[0].color[0] = 255;
        gamePoints[0].color[1] = 0;
        gamePoints[0].color[2] = 0;
    for(int ee = 0; ee < gamePoints.size(); ee++){
        gamePoints[ee].pos[0] = gamePoints[0].pos[0];
        gamePoints[ee].pos[1] = gamePoints[0].pos[1];
    }
        int halfDistX[startPoints.size()], halfDistY[startPoints.size()];
        for(int gg = 1; gg < gamePoints.size(); gg++){
            randNumb = rand() % startPoints.size();
        for(int cc = 0; cc < startPoints.size(); cc++){
            halfDistX[cc] = (gamePoints[gg-1].pos[0] - startPoints[cc].pos[0])/2;
            halfDistY[cc] = (gamePoints[gg-1].pos[1] + startPoints[cc].pos[1])/2;
        }
        gamePoints[gg].pos[0] = gamePoints[gg].pos[0] - halfDistX[randNumb];
        gamePoints[gg].pos[1] = (gamePoints[gg].pos[1] + halfDistY[randNumb]) - gamePoints[gg].pos[1];
        gamePoints[gg].color[0] = startPoints[randNumb].color[0];
        gamePoints[gg].color[1] = startPoints[randNumb].color[1];
        gamePoints[gg].color[2] = startPoints[randNumb].color[2];
        }
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    for(int bb = 0; bb < startPoints.size(); bb++){
            ofSetColor(startPoints[bb].color[0],startPoints[bb].color[1], startPoints[bb].color[2]);
            ofCircle(startPoints[bb].pos[0], startPoints[bb].pos[1],5);
        }
    for(int hh = 0; hh < gamePoints.size(); hh++){
            ofSetColor(gamePoints[hh].color[0],gamePoints[hh].color[1],gamePoints[hh].color[2]);
            ofCircle(gamePoints[hh].pos[0], gamePoints[hh].pos[1], 2);
        }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){

}
