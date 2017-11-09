#include "State.h"
/// <summary>
/// 
/// @author: Savannah Bolger
/// @student no: C00215747
/// @date: 5/11/2017
/// @approx no hrs: 10 hrs
/// </summary>


//idling animation state
void State::idle(Animation * a)
{
	std::cout << "State::Idling" << std::endl;
}

//jumping animation state
void State::jumping(Animation * a)
{
	std::cout << "State::Jumping" << std::endl;
}

//climbing animation state
void State::climbing(Animation * a)
{
	std::cout << "State::Climbing" << std::endl;
}

//walking animation state
void State::walking(Animation * a)
{
	std::cout << "State::Walking" << std::endl;
}

//swordsmanship animation state
void State::swordsmanship(Animation * a)
{
	std::cout << "State::Swordsmanship" << std::endl;
}

//shoveling animation state
void State::shoveling(Animation * a)
{
	std::cout << "State::Shoveling" << std::endl;
}

//hammering animation state
void State::hammering(Animation * a)
{
	std::cout << "State::Hammering" << std::endl;
}
