#pragma once

#ifndef HAMMERING
#define HAMMERING

/// <summary>
/// 
/// @author: Savannah Bolger
/// @student no: C00215747
/// @date: 5/11/2017
/// @approx no hrs:
/// </summary>

#include <iostream>
#include "State.h"

class Hammering : public State
{
public:
	Hammering() {};
	~Hammering() {};
	void idle(Animation *a);
};
#endif // !HAMMERING