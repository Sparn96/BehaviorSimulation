#ifndef GAME_OBJECT_H
#define GAME_OBJECT_H
#include <string>
#include "Component.h"
#include "Scene.h"

class GameObject
{
public:
	GameObject();
	~GameObject();
	GameObject(GameObject&);


	void AddToScene(Scene*);   // this adds the current object to an active scene and saves the pointer in memeber var.
	void AddComponent(Component&);  // adds to a list of components of an object.
	bool Update();

	std::string getName() { return _name; }


protected:
	std::string _name;
	Component* _components;
	Scene* _activeScene;

};


//class characters : public GameObject



#endif
