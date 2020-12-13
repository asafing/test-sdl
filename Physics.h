#include "PhysicalObj.h"
#include "Observer.h"
/*
* This class is responsible for all physics calculations in our program.
* This class only knows how to work with PhysicalObj & it's derived classes
* It is based off the synchronous design pattern Observer (see https://gameprogrammingpatterns.com/observer.html)
*/
class Physics : Observer {
private:
	double grav_y;
	Physics();
	void FrameAcceleration(PhysicalObj* objs, int size, int d_mili);
};