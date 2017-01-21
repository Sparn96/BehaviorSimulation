#ifndef SCENE_H
#define SCENE_H

class GameObject;


class Scene
{
public:
	Scene();
	~Scene();
	Scene(Scene&);


private:
	GameObject* _objects;
	//Render* _renderer;
	//Event*  _eventQue;

	//Alpha value?
};


#endif