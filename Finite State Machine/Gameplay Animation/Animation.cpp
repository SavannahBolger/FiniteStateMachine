#include "Animation.h"
/// <summary>
/// 
/// @author: Savannah Bolger
/// @student no: C00215747
/// @date: 5/11/2017
/// @approx no hrs: 10 hrs
/// </summary>

//new animation
Animation::Animation()
{
	current = new Idle();
}

//idle animation
void Animation::idle()
{
	current->idle(this);
}

//jumping animation
void Animation::jumping()
{
	current->jumping(this);
}

//climbing animation
void Animation::climbing()
{
	current->climbing(this);
}

//walking animation
void Animation::walking()
{
	current->walking(this);
}

//swordsmanship animation
void Animation::swordsmanship()
{
	current->swordsmanship(this);
}

//shoveling animation
void Animation::shoveling()
{
	current->shoveling(this);
}

//hammering animation
void Animation::hammering()
{
	current->hammering(this);
}