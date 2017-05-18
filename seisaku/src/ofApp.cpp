#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetFrameRate(60);
	ofSetBackgroundColor(255, 255, 255);

	float px = ofRandom(0, ofGetWidth());
	float py = ofRandom(0, ofGetHeight());
	mPosition = ofVec2f(px, py);

	float vx = ofRandom(-5, 5);
	float vy = ofRandom(-5, 5);
	mVelocity = ofVec2f(vx, vy);
}

//--------------------------------------------------------------
void ofApp::update(){

	if (mPosition.x <= 0) {
		mVelocity.x *= -1;
	}

	if (mPosition.x >= ofGetWidth()) {
		mVelocity.x *= -1;
	}

	if (mPosition.y <= 0) {
		mVelocity.y *= -1;
	}

	if (mPosition.y >= ofGetHeight()) {
		mVelocity.y *= -1;
	}

	mPosition += mVelocity;
	sPosition += 1;

}

//--------------------------------------------------------------
void ofApp::draw(){
	ofSetColor(0, 0, 0);
	// ofDrawCircle(mPosition, 10);
	ofDrawRectangle(100, 0, 70, 600);
	ofDrawRectangle(200, 200, 70, 600);
	ofDrawRectangle(300, 0, 70, 600);
	ofDrawRectangle(400, 200, 70, 600);
	ofDrawRectangle(500, 0, 70, 600);


}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	if (key == 't') {
		float px = ofRandom(0, ofGetWidth());
		float py = ofRandom(0, ofGetHeight());
	}
	else if (key == 'd') {
		float px = ofRandom(0, ofGetWidth());
		float py = ofRandom(0, ofGetHeight());
	}
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
