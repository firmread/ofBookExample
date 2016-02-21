
#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    // This is enabled by default in recent version of openFrameworks
    ofEnableAntiAliasing();
    ofSetCircleResolution(50); // For smoother looking circles + ellipses
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(0); // Clear the screen with a black color
    ofSetColor(255); // Set the drawing color to white

    ofFill(); // If we omit this and leave ofNoFill(), all the shapes will be outlines!
    ofSetLineWidth(2); // Line width is a default value of 1 if you don't modify it

    // Draw some shapes
    ofDrawRectangle(50, 50, 100, 100); // 100 wide x 100 high, top left corner at (50, 50)
    ofDrawCircle(250, 100, 50); // Radius of 50, centered at (250, 100)
    ofDrawEllipse(400, 100, 80, 100); // 80 wide x 100 high, centered at (400 100)
    ofDrawTriangle(500, 150, 550, 50, 600, 150); // Three corners: (500, 150), (550, 50), (600, 150)
    ofDrawLine(700, 50, 700, 150); // Line from (700, 50) to (700, 150)

    // If you are curious how to generate the series of lines shown in figure 2, you can use a for loop:
    //for (int i=0; i<11; i++) {
	//	ofLine(650, 50+(i*10), 750, 75+(i*5));
	//}

    ofNoFill(); // If we omit this and leave ofFill(), all the shapes will be filled!
    ofSetLineWidth(4.5); // A higher value will render thicker lines
    // Note: Using ofSetLineWidth is tricky - it doesn't work with all graphics cards!

    // Draw some shapes (shifted down 150 pixels)
    ofDrawRectangle(50, 200, 100, 100);
    ofDrawCircle(250, 250, 50);
    ofDrawEllipse(400, 250, 80, 100);
    ofDrawTriangle(500, 300, 550, 200, 600, 300);
    ofDrawLine(700, 200, 700, 300);

    // Again, for generating the series of lines from figure 2:
    //for (int i=0; i<11; i++) {
	//	ofLine(650, 200+(i*10), 750, 225+(i*5));
	//}
}