#include "State.h"

void State::idle(Animation * a)
{
	std::cout << "State::Idling" << std::endl;
}

void State::jumping(Animation * a)
{
	std::cout << "State::Jumping" << std::endl;
}

void State::climbing(Animation * a)
{
	std::cout << "State::Climbing" << std::endl;
}
