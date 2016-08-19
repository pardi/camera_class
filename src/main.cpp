#include "cam_video.h"

using namespace cam_vid;

int main(int argc, char** argv){

	cam_video cv(1, 15);

	cv.start_capture();
	
	return 0;
}