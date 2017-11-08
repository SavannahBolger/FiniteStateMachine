#pragma once

#ifndef IDLE
#define IDLE

/// <summary>
/// 
/// @author: Savannah Bolger
/// @student no: C00215747
/// @date: 5/11/2017
/// @approx no hrs:
/// </summary>

#include <iostream>
#include "State.h"

class Idle : public State
{
public:
	Idle() {};
	~Idle() {};

	void jumping(Animation *a);
	void climbing(Animation *a);
};
#endif // !IDLE
