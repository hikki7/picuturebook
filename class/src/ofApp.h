#pragma once

#include "ofMain.h"
#include "mikanBox.hpp"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

    mikanBox *pmikanBox;
		
		
};
