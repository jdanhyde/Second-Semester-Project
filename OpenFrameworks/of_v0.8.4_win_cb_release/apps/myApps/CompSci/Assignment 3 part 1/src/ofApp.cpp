#include "ofApp.h"
    int myCircleX;
    int myCircleY;
    int myCircleZ;
    bool flip = false;
//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(60);
    myCircleX = 150;
    myCircleY = 130;
    myCircleZ = 60;
}

//--------------------------------------------------------------
void ofApp::update(){
   if(myCircleY<255 && flip==false){
    myCircleX++;
    myCircleY++;
    myCircleZ++;
   }
   else{
    myCircleX--;
    myCircleY--;
    myCircleZ--;
    flip = true;
   }
   if(myCircleY < 130){
    flip=false;
   }
}

//--------------------------------------------------------------
void ofApp::draw(){

    ofSetColor(myCircleX, myCircleZ, myCircleY);
    ofCircle(myCircleX, myCircleY, myCircleZ);

    ofSetColor(myCircleX+30, myCircleY, myCircleZ-20);
    ofRect(myCircleZ+300, myCircleX-150, myCircleY, myCircleX+25);

    ofSetColor(myCircleZ-60, myCircleX+42, myCircleY-5);
    ofEllipse(myCircleZ+300, myCircleX+300, myCircleY, myCircleX+25);

    ofRectangle myRect;
    myRect.x = myCircleY+500;
    myRect.y = myCircleZ;
    myRect.width = myCircleX;
    myRect.height = myCircleY;

    ofSetColor(myCircleY, myCircleX-57, myCircleZ+89);
    ofRectRounded(myRect, 10);
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
