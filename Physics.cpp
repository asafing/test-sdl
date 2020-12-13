#include "Physics.h"

/*
* Description: 
* Applies a frame's gravity on our physical objects,
* based off how much time has passed since the last frame
* 
*/

Physics::Physics() {
	this->grav_y = -98.4;
}

void Physics::FrameAcceleration(PhysicalObj* objs, int objs_size, int d_mili) {
	double d_sec = (double)(d_mili / 1000);
	for (size_t i = 0; i < objs_size; i++)
	{
		objs[i].y(objs[i].y() + (objs[i].y_vel() * d_sec));
		objs[i].x(objs[i].x() + (objs[i].x_vel() * d_sec));

		if (objs[i].apply_gravity()) {
			objs[i].y_vel(objs[i].y_vel() + (this->grav_y * d_sec));
		}
	}
}