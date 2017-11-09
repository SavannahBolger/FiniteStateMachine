#include "Shoveling.h"
/// <summary>
/// 
/// @author: Savannah Bolger
/// @student no: C00215747
/// @date: 5/11/2017
/// @approx no hrs: 10 hrs
/// </summary>

//when the animation goes from shoveling to idling
void Shoveling::idle(Animation * a)
{
	std::cout << "Going from Shoveling to Idling" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
