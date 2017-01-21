// Game Engine For Upcoming Simulation game with nick!

//Mitchell Marsh
#include "Scene.h"

class State;  // this is what will keep track of which frame the scene is rendering to anf from 
// this manages the scene class ^^^^^ 

//class Scene / GameObject / Component--- this will contian a bunch of object stuff

long float getTimeInSeconds();  // maybe replace with gettime? Think about this! 

int main()
{

	bool quit = false;
	double t = 0.0;
	double dt = 0.01;

	double currentTime = getTimeInSeconds();
	double accumulator = 0.0;

	State previousState;
	State currentState;

	while (!quit)
	{
		double newTime = getTimeInSeconds();
		double frameTime = newTime - currentTime;
		if (frameTime > 0.25)
			frameTime = 0.25;
		currentTime = newTime;

		accumulator += frameTime;

		while (accumulator >= dt)
		{
			previousState = currentState;    //The state/scene is the same 
			//Do Calculaitons here    CALC();
			t += dt;
			accumulator -= dt;
		}

		const double alpha = accumulator / dt;

		//This blends the scenes together, allowing for smooth transition


		//BELOW: returns an alpha value between the old state and new:   the new State is drawn onto the old using the alpha value! 
		//this is true until the new state is caught up
		State stateAlpha = currentState * alpha +
			previousState * (1.0 - alpha);

		//render(scene);
	}
}
