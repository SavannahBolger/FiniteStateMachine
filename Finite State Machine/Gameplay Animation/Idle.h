#pragma once

#ifndef IDLE
#define IDLE

/// <summary>
/// 
/// @author: Savannah Bolger
/// @student no: C00215747
/// @date: 5/11/2017
/// @approx no hrs: 10 hrs
/// </summary>

#include <iostream>
#include "State.h"

class Idle : public State
{
public:
	Idle() {};
	~Idle() {};

	//different animations
	void jumping(Animation *a);		//jumping animation
	void climbing(Animation *a); 	//climbing animation
	void walking(Animation *a); 	//walking animation
	void swordsmanship(Animation *a); 	//swordsmanship animation
	void shoveling(Animation *a); 	//shoveling animation
	void hammering(Animation *a);	//hammering animation
};
#endif // !IDLE
