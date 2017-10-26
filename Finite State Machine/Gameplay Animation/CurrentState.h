#pragma once

#include <iostream>
#include "FiniteStateMachine.h"

class State
{
public:
	virtual void idle(Animation *a)
	{
		std::cout << "State::Idling" << std::endl;
	}
	virtual void walking(Animation *a)
	{
		std::cout << "State::Walking" << std::endl;
	}
	virtual void jumping(Animation *a)
	{
		std::cout << "State::Jumping" << std::endl;
	}
	virtual void swordsmanship(Animation *a)
	{
		std::cout << "State::Swordsmanship" << std::endl;
	}
	virtual void shoveling(Animation *a)
	{
		std::cout << "State::Shoveling" << std::endl;
	}
	virtual void hammering(Animation *a)
	{
		std::cout << "State::Hammering" << std::endl;
	}
};

class Idle : public State
{
public:
	Idle() {};
	~Idle() {};
	void jumping(Animation *a);
	void walking(Animation *a);
	void idle(Animation *a);
	void swordsmanship(Animation *a);
	void hammering(Animation *a);
	void shoveling(Animation *a);
};
