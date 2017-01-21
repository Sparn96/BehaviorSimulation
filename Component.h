#ifndef COMPONENT_H
#define COMPONENT_H

#include <vector>
#include <utility>

class GameObject;

class Component   // IMPORTANT NOTE!   Components are a point of access and will not be preforming any major function 
{
public:
	Component();
	~Component();
	Component(Component&);

	virtual void Update();
	virtual void AddToGameObject(GameObject&);

protected:

};


class Renderer : public Component  //  this class is simply a link between an object renderer and the scene renderer! 
{
public:
	//Update will link object to the scene renderer  BUT WILL NOT RENDER ANYTHING TO BACKBUFFER
	//functions allowing smooth transition between the scene and objects

protected:
	//access to the OpenGL interface or whatever
	//pointer to vertex buffer of object? (either that or some method of determining where the object drawing is located
	//OR for the purpose of a Colsole     char Symbol; 
};


class Transform : public Component
{
public:

	//update will calculate move by applying the 2D vector force and applying the friction constant to slow down force vector.
	//move funciton? 

protected:
	std::pair<float, float> _2D_VectorSpace; // Magnitude, Direction       THIS MAY NOT BE NECESSARY FOR MOST GAMES
	float _rotation;
	float _size;

};


class Behavior : public Component
{
public:
	//to be discovered

protected:
	//child classes may be different behavior types? 
};



#endif
