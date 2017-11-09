#pragma once
#ifndef GAME
#define GAME
/// <summary>
/// 
/// @author: Savannah Bolger
/// @student no: C00215747
/// @date: 5/11/2017
/// @approx no hrs: 10 hrs
/// </summary>

#include <thread>
#include <chrono>
#include <SFML\Graphics.hpp>
#include "Animation.h"

class Game
{
public:
	Game();
	void run();

private:
	void    processEvents();
	void    update();
	void    render();

	// display window
	sf::RenderWindow m_window;
	// sprite for the imported image
	sf::Sprite m_sprite;
	// image textures used for the sprite
	sf::Texture m_idling;		//idling animation image
	sf::Texture m_walking;		//walking animation image
	sf::Texture m_jumping;		//jumping animation image
	sf::Texture m_climbing;		//climbing animation image
	sf::Texture m_shoveling;		//shoveling animation image
	sf::Texture m_hammering;		//hammering animation image
	sf::Texture m_swordsmanship;	//swordsmanship animation image
};


#endif // !GAME
