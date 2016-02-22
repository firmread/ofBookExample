#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
        void audioIn(ofSoundBuffer &buffer);
        
        float vol;
        float smoothedVol;
        int bufferSize;
};
