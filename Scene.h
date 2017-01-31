#ifndef SCENE_H
#define SCENE_H

class GameObject;
//#include "GraphicsClass.h"

class Scene
{
public:
	Scene();
	~Scene();
	Scene(Scene&);


private:
	GameObject* _objects;
	GraphicsClass* _renderGraphics;
	//Event*  _eventQue;  -- Game Logic Engine passes calculated events to occur during a scene into this que

	//Alpha value -- Not for Console 
};


#endif
