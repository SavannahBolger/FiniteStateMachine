#pragma once

#ifndef JUMPING
#define JUMPING

/// <summary>
/// 
/// @author: Savannah Bolger
/// @student no: C00215747
/// @date: 5/11/2017
/// @approx no hrs:
/// </summary>

#include <iostream>
#include "State.h"

class Jumping : public State
{
public: 
	Jumping() {};
	~Jumping() {};
	void idle(Animation *a);
};
#endif // !JUMPING
