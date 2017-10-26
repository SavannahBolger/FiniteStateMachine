#include <iostream>
#include <thread>
#include <chrono>

#include "CurrentState.h"
#include "FiniteStateMachine.h"

int main()
{
	Animation fsm;
	int i = 0;
	while (true)
	{
		if (i == 0)
		{
			fsm.jumping();
			std::this_thread::sleep_for(std::chrono::milliseconds dura(1000));
			i = 1;
		}
		else
		{
			fsm.walking();
			std::this_thread::sleep_for(std::chrono::milliseconds dura(1000));
			i = 0;
		}
	}
}