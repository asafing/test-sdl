
/*
* This class is responsible for all physics calculations in our program.
* It only works on members deriving from "PhysicalObj"
*/
class PhysicalObj {
private:
	int _x;
	int _y;
	int _x_vel;
	int _y_vel;
	bool _apply_gravity;

public:
	// Setters + Getters
	int x() const { return _x; }
	void x(int x) { _x = x; }

	int y() const { return _y; }
	void y(int y) { _y = y; }

	int x_vel() const { return _x_vel; }
	void x_vel(int x_vel) { _x_vel = x_vel; }

	int y_vel() const { return _y_vel; }
	void y_vel(int y_vel) { _y_vel = y_vel; }

	bool apply_gravity() const { return _apply_gravity; }
	void apply_gravity(bool apply_gravity) { _apply_gravity = apply_gravity; }

	// Ctors
	PhysicalObj();
	PhysicalObj(int x, int y, int x_vel, int y_vel);
};