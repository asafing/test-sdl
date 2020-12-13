#include "GameSkill.h"


/*
* Implements the command design pattern (see https://gameprogrammingpatterns.com/command.html)
*/
class GameSkill
{
public:
	virtual ~GameSkill() {}
	virtual void execute() = 0;
};