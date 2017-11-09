#include "Idle.h"
/// <summary>
/// 
/// @author: Savannah Bolger
/// @student no: C00215747
/// @date: 5/11/2017
/// @approx no hrs: 10 hrs
/// </summary>


//when jumping animation is being performed the text
//is displayed
void Idle::jumping(Animation * a)
{
  	std::cout << "Jumping" << std::endl;
   	a->setCurrent(new Jumping());
	delete this;
}

//when climbing animation is being performed the text
//is displayed
void Idle::climbing(Animation * a)
{
	std::cout << "Climbing" << std::endl;
	a->setCurrent(new Climbing());
	delete this;
}

//when walking animation is being performed the text
//is displayed
void Idle::walking(Animation * a)
{
	std::cout << "Walking" << std::endl;
	a->setCurrent(new Walking());
	delete this;
}

//when swordsmanship animation is being performed the text
//is displayed
void Idle::swordsmanship(Animation * a)
{
	std::cout << "Swordsmanship" << std::endl;
	a->setCurrent(new Swordsmanship());
	delete this;
}

//when shoveling animation is being performed the text
//is displayed
void Idle::shoveling(Animation * a)
{
	std::cout << "Shoveling" << std::endl;
	a->setCurrent(new Shoveling());
	delete this;
}

//when hammering animation is being performed the text
//is displayed
void Idle::hammering(Animation * a)
{
	std::cout << "Hammering" << std::endl;
	a->setCurrent(new Hammering());
	delete this;
}
