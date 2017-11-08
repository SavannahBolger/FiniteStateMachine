#pragma once

#ifndef ANIMATION
#define ANIMATION
/// <summary>
/// 
/// @author: Savannah Bolger
/// @student no: C00215747
/// @date: 5/11/2017
/// @approx no hrs: 
/// </summary>

#include <iostream>
#include "Idle.h"

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
	void jumping();
	void climbing();
};

#endif // !ANIMATION

