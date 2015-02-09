#include "ofApp.h"
board tileSet;
void tile::draw(){
    ofSetColor(tile::color[0],tile::color[1],tile::color[2]);
    ofRect(tile::xPos, tile::yPos, tile::width, tile::length);
    drawn=true;
}
void board::drawBoard(){
    for(int cc = 0; cc < board::length*board::width; cc++){
        board::boardContains[cc].draw();
    }
}
void board::generateTiles(int lengthA,int widthA, int color[3]){
    tile tileA;
    int counter=0;//even or odd tile
    int counterA=0;//length position
    int counterB=0;//width position
    tileA.length = lengthA;
    tileA.width = widthA;
    for(int aa = 0; aa < board::length*board::width; aa++){
     tileA.xPos = counterA*lengthA;
     tileA.yPos = counterB*widthA;
     if(counter%2==0){//set color
     tileA.color[0] = color[0];
     tileA.color[1] = color[1];
     tileA.color[2] = color[2];
     }else{
     tileA.color[0] = 0;
     tileA.color[1] = 0;
     tileA.color[2] = 0;
     }
     counter++;
     counterA++;
     if(counterA>board::length-1){
        counterA = 0;
        counterB++;
     }
     board::boardContains.push_back(tileA);
    }
}
//--------------------------------------------------------------
void ofApp::setup(){
    cout << "What size do you want your tiles to be? input a length and a width in pixels" << endl;
    cin >> lengthA;
    cin >> widthA;
    cout << "How big do you want your board to be? input a length, then a width in your predefined tiles"<< endl;
    cin >> length;
    cin >> width;
    cout << "What color do you want your tiles to be? every alternating tile will be black" << endl;
    cin >> color[0];
    cin >> color[1];
    cin >> color[2];
    tileSet.length = length;
    tileSet.width = width;
    tileSet.generateTiles(lengthA, widthA, color);

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    tileSet.drawBoard();
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
