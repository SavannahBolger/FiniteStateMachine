#pragma once
#include <iostream>
#include "CurrentState.h"

class Animation
{
	class State *current;

public:
	Animation();
	void setCurrent(State *s)
	{
		current = s;
	}

	void idle();
	void walking();
	void jumping();
	void swordsmanship();
	void hammering();
	void shoveling();
};