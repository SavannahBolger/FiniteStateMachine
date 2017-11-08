#pragma once

#ifndef CLIMBING
#define CLIMBING

/// <summary>
/// 
/// @author: Savannah Bolger
/// @student no: C00215747
/// @date: 5/11/2017
/// @approx no hrs:
/// </summary>

#include <iostream>
#include "State.h"

class Climbing : public State
{
public:
	Climbing() {};
	~Climbing() {};
	void idle(Animation *a);
};
#endif // !CLIMBING


