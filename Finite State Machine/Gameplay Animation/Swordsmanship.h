#pragma once

#ifndef SWORDSMANSHIP
#define SWORDSMANSHIP

/// <summary>
/// 
/// @author: Savannah Bolger
/// @student no: C00215747
/// @date: 5/11/2017
/// @approx no hrs:
/// </summary>

#include <iostream>
#include "State.h"

class Swordsmanship : public State
{
public:
	Swordsmanship() {};
	~Swordsmanship() {};
	void idle(Animation *a);
};
#endif // !SWORDSMANSHIP