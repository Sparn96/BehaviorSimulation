#ifndef GRAPHICS_CLASS_H
#define GRAPHICS_CLASS_H

struct ConsoleObject
{
	char Symbol;  // its charcter rep symbol
	int x, y; // on screen coords
};

class GraphicsClass  // for the purposes of this game---- this is going to be the console 
{
public:
	void Draw(); // draws list of targets
	//void AddTarget(vertices or Console object);
	

private:
	//list of targets to draw

};



#endif
