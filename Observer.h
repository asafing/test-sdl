#pragma once

enum EventType
{
	FrameAcceleration,
};
class Observer
{
public:
	virtual ~Observer() {}
	virtual void onNotify(const Entity& entity, EventType event) = 0;

};

