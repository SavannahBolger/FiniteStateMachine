/// <summary>
/// 
/// @author: Savannah Bolger
/// @student no: C00215747
/// @date: 5/11/2017
/// @approx no hrs:
/// </summary>

#include <thread>
#include <chrono>
#include <iostream>

#include "Animation.h"

int main()
{
	Animation fsm;
	int i = 0;
	while (true)
	{
		if (i == 0)
		{
			fsm.jumping();
			std::this_thread::sleep_for(std::chrono::milliseconds { 1000 });
			i = 1;
		}
		else
		{
			fsm.climbing();
			std::this_thread::sleep_for(std::chrono::milliseconds{1000});
			i = 0;
		}
	}
}