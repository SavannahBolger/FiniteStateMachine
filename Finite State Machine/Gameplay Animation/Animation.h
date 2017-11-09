#pragma once

#ifndef ANIMATION
#define ANIMATION
/// <summary>
/// 
/// @author: Savannah Bolger
/// @student no: C00215747
/// @date: 5/11/2017
/// @approx no hrs: 10 hrs
/// </summary>

#include <iostream>
#include "Idle.h"

class Animation
{
	class State *current;
	
public:
	Animation();
	//setting current animation state  
	void setCurrent(State *s)
	{
		current = s;
	}

	//animation states
	void idle();
	void jumping();
	void climbing();
	void walking();
	void swordsmanship();
	void shoveling();
	void hammering();
};

#endif // !ANIMATION

