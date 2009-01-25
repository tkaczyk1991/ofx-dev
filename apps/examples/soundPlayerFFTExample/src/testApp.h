#ifndef _TEST_APP
#define _TEST_APP


#include "ofMain.h"
#include "ofAddons.h"

class testApp : public ofBaseApp {
	
	public:
		
		void setup();
		void update();
		void draw();
		
		void keyPressed  (int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		
		ofSoundPlayer 		beat;
		ofSoundPlayer		ow;
		ofSoundPlayer		dog;
		ofSoundPlayer		rooster;		

		float 				* fftSmoothed;
		// we will draw a rectangle, bouncing off the wall:
		float 				px, py, vx, vy;		

		int nBandsToGet;
		float prevx, prevy;
};

#endif	
