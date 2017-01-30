#ifndef GRAPHICS_CLASS_H
#define GRAPHICS_CLASS_H

#define CONSOLE_X = 100
#define CONSOLE_Y = 80

//#include "Camera.h"
#include <vector>

struct ConsoleObject
{
	char Symbol;  // its charcter rep symbol
	int x, y; // on screen coords
};



class GraphicsClass  // for the purposes of this game---- this is going to be the console 
{
public:
	GraphicsClass();
	~GraphicsClass();
	GraphicsClass(GraphicsClass&);

	void Draw(); // draws list of targets
	void AddTarget(ConsoleObject&);
	

private:
	std::vector<ConsoleObject*> _objectsToDraw; //list of pointers to targets to draw (in this case, instead of vertex coords, we supply a console object to draw)
	//Camera* _camera (viewport of the size of the console window)
};



#endif

// THIS IS A GITHUB TEST COMMENT!!!! WHOOOOOOOOO