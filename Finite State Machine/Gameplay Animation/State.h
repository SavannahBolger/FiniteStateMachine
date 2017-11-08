#pragma once

#ifndef STATE
#define STATE

/// <summary>
/// 
/// @author: Savannah Bolger
/// @student no: C00215747
/// @date: 5/11/2017
/// @approx no hrs: 
/// </summary>

#include <iostream>

class Animation;

class State
{
public:
	virtual void idle(Animation *a);

	virtual void jumping(Animation *a);

	virtual void climbing(Animation *a);
};

#include "Animation.h"
#endif // !STATE
