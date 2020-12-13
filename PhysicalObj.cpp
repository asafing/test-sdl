#include "PhysicalObj.h"

PhysicalObj::PhysicalObj() {
	_x = 0;
	_y = 0;
	_x_vel = 0;
	_y_vel = 0;
}
PhysicalObj::PhysicalObj(int x, int y, int x_vel, int y_vel) {
	this->x(x);
	this->y(y);
	this->x_vel(x_vel);
	this->y_vel(y_vel);
}