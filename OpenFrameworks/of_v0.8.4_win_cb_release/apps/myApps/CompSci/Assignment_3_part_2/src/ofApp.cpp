#include "ofApp.h"
int shrink;
int counter;

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(60);
    shrink=0;
    counter=0;
}

//--------------------------------------------------------------
void ofApp::update(){
    counter++;
    if(counter%6==0&&shrink <= 0){
    shrink--;//shrinks the guy
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(0,0,0);
    if(shrink+20>0)ofCircle(695, 300, 20+shrink);
    if(shrink + 12 > 0){
        ofRect(694,300,12+shrink,100+shrink);
        ofRect(694,320,65+shrink,12+shrink);
        ofRect(639,320,65+shrink,12+shrink);
        ofRect(686-shrink,380,12+shrink,65+shrink);
        ofRect(703+shrink,380,12+shrink,65+shrink);
    }else if(shrink < -20){
        ofSetColor(255,0,0);
        ofDrawBitmapString("Rekt", 694, 300);
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){


}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){


}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){


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
