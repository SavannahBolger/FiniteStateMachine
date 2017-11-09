#pragma once

#ifndef STATE
#define STATE

/// <summary>
/// 
/// @author: Savannah Bolger
/// @student no: C00215747
/// @date: 5/11/2017
/// @approx no hrs: 10 hrs
/// </summary>

#include <iostream>

class Animation;

class State
{
public:
	//animation states
	virtual void idle(Animation *a);		//idle animation state
	virtual void jumping(Animation *a);		//jumping animation state
	virtual void climbing(Animation *a);	//climbing animation state
	virtual void walking(Animation *a);		//walking animation state
	virtual void swordsmanship(Animation *a);		//swordsmanship animation state
	virtual void shoveling(Animation *a);	//shoveling animation state
	virtual void hammering(Animation *a);	//hammering animation state
};

#include "Animation.h"
#endif // !STATE
