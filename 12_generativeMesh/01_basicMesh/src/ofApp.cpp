#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

	mesh.setMode(OF_PRIMITIVE_LINE_LOOP);

	// Alternate primitive modes to try:
	//mesh.setMode(OF_PRIMITIVE_POINTS);
	//mesh.setMode(OF_PRIMITIVE_LINES);
	//mesh.setMode(OF_PRIMITIVE_LINE_STRIP);

	mesh.enableColors();
	
	ofVec3f top(100.0, 50.0, 0.0);
	ofVec3f left(50.0, 150.0, 0.0);
	ofVec3f right(150.0, 150.0, 0.0);
	
	mesh.addVertex(top);
	mesh.addColor(ofFloatColor(1.0, 0.0, 0.0)); // Red
	
	mesh.addVertex(left);
	mesh.addColor(ofFloatColor(0.0, 1.0, 0.0)); // Green
	
	mesh.addVertex(right);
	mesh.addColor(ofFloatColor(1.0, 1.0, 0.0)); // Blue
	
	ofBackground(0);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	mesh.draw();
}

