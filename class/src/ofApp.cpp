#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    mikanBox *pmikanBox;
    pmikanBox=new mikanBox[3];
    delete [] pmikanBox;
    pmikanBox=new mikanBox[3];
    delete [] pmikanBox;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

}

