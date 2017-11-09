/// <summary>
/// 
/// @author: Savannah Bolger
/// @student no: C00215747
/// @date: 5/11/2017
/// @approx no hrs: 10 hrs
/// </summary>

#ifdef _DEBUG 
#pragma comment(lib,"sfml-graphics-d.lib") 
#pragma comment(lib,"sfml-audio-d.lib") 
#pragma comment(lib,"sfml-system-d.lib") 
#pragma comment(lib,"sfml-window-d.lib") 
#pragma comment(lib,"sfml-main-d.lib")
#pragma comment(lib,"sfml-network-d.lib") 
#else 
#pragma comment(lib,"sfml-graphics.lib") 
#pragma comment(lib,"sfml-audio.lib") 
#pragma comment(lib,"sfml-system.lib") 
#pragma comment(lib,"sfml-main.lib")
#pragma comment(lib,"sfml-window.lib") 
#pragma comment(lib,"sfml-network.lib") 
#endif 
#pragma comment(lib,"opengl32.lib") 
#pragma comment(lib,"glu32.lib")


#include <iostream>

#include "Game.h"

int main()
{
	//instructons on how to use to program
	std::cout << "Don't press anything for the Idling state" << std::endl;
	std::cout << "Press the Left or Right key for the Walking state" << std::endl;
	std::cout << "Press the Up key for the Climbing state" << std::endl;
	std::cout << "Press the Spacebar for the Jumping state" << std::endl;
	std::cout << "Press the Down key for the Shoveling state" << std::endl;
	std::cout << "Press S for the Swordsmanship state" << std::endl;
	std::cout << "Press H for the Hammering state" << std::endl;
	std::cout << "-------------------------------------------------------" << std::endl;
	std::cout << std::endl;

	//game class variable to run game
	Game game;
	//run the game in the game.run function
	game.run();
	return 0;
}