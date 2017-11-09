#pragma once

#ifndef WALKING
#define WALKING

/// <summary>
/// 
/// @author: Savannah Bolger
/// @student no: C00215747
/// @date: 5/11/2017
/// @approx no hrs:
/// </summary>

#include <iostream>
#include "State.h"

class Walking : public State
{
public:
	Walking() {};
	~Walking() {};
	void idle(Animation *a);
};
#endif // !WALKING