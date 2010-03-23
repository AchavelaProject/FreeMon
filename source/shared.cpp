#include "shared.h"
#include <fstream>
#ifdef Windows
#include <windows.h>
#endif

#include <iostream>

Player player;

void error(const std::string& msg) {
	std::cerr<<"ERROR: "<<msg<<std::endl;
	#ifdef Windows
	MessageBox(NULL,msg.c_str(),"Error",MB_ICONERROR);
	#endif
	exit(1);
}

void warning(const std::string& msg) {
	std::cerr<<"WARNING: "<<msg<<std::endl;
}

namespace Game {
	bool run=true;
	std::string map;
        //Removed Spritemod but left base just in case we use it sometime.
 	std::string spritemod("");
}

namespace Video {
	unsigned int width=160;
	unsigned int height=144;
	unsigned int scale=1;
	bool fullscreen=false;
}

namespace Format {
	const std::string image(".png");
	const std::string sound(".ogg");
	const std::string music(".ogg");
}
