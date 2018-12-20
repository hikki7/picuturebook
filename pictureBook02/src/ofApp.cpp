#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    //sizeof(a)でaが何バイトかわかる
    //cout<<sizeof(b)/sizeof(int)<<endl;
    //static_castは要するに(int)のことでキャスト演算って感じ
    ofBackground(0);
    col[0]=static_cast<int>(colors::red);
    col[1]=static_cast<int>(colors::green);
    col[2]=static_cast<int>(colors::blue);

    
    for (int i=0; i<num; i++) {
        col[i]=255*i/3;
        cout<<col[i]<<endl;
    }
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofColor color;
    color.setHsb(col[0], 255, 255);
    ofSetColor(color);
    ofDrawCircle(0, 0, 50);
    
    color.setHsb(col[1], 255, 255);
    ofSetColor(color);
    ofDrawCircle(100, 100, 50);
    
    color.setHsb(col[2], 255, 255);
    ofSetColor(color);
    ofDrawCircle(200, 200, 50);
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
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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
