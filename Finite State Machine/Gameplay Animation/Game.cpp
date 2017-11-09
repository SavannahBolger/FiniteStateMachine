#include "Game.h"
/// <summary>
/// 
/// @author: Savannah Bolger
/// @student no: C00215747
/// @date: 5/11/2017
/// @approx no hrs: 10 hrs
/// </summary>


Game::Game() :
	m_window(sf::VideoMode(800, 600), "Gameplay Animation")
{
	//loading idling image
	if (!m_idling.loadFromFile("Assets\\Idling.png"))
	{
		//this message will be displayed if the program has difficulty 
		//loading the texture from the file
		std::cout << "Error loading texture";
	}
	//loading walking image
	if (!m_walking.loadFromFile("Assets\\Walking.png"))
	{
		//this message will be displayed if the program has difficulty 
		//loading the texture from the file
		std::cout << "Error loading texture";
	}
	//loading jumping image
	if (!m_jumping.loadFromFile("Assets\\Jumping.png"))
	{
		//this message will be displayed if the program has difficulty 
		//loading the texture from the file
		std::cout << "Error loading texture";
	}
	//loading climbing image
	if (!m_climbing.loadFromFile("Assets\\Climbing.png"))
	{
		//this message will be displayed if the program has difficulty 
		//loading the texture from the file
		std::cout << "Error loading texture";
	}
	//loading shoveling image
	if (!m_shoveling.loadFromFile("Assets\\Shoveling.png"))
	{
		//this message will be displayed if the program has difficulty 
		//loading the texture from the file
		std::cout << "Error loading texture";
	}
	//loading hammering image
	if (!m_hammering.loadFromFile("Assets\\Hammering.png"))
	{
		//this message will be displayed if the program has difficulty 
		//loading the texture from the file
		std::cout << "Error loading texture";
	}
	//loading swordsmanship image
	if (!m_swordsmanship.loadFromFile("Assets\\Swordsmanship.png"))
	{
		//this message will be displayed if the program has difficulty 
		//loading the texture from the file
		std::cout << "Error loading texture";
	}

	//setting the sprite position
	m_sprite.setPosition(0, 0);
}

void Game::run()
{
	sf::Clock clock;
	sf::Time timeSinceLastUpdate = sf::Time::Zero;
	sf::Time timePerFrame = sf::seconds(1.f / 60.f);
	while (m_window.isOpen())
	{
		//process the program events
		processEvents();
		timeSinceLastUpdate += clock.restart();

		while (timeSinceLastUpdate > timePerFrame)
		{
			timeSinceLastUpdate -= timePerFrame;
			processEvents();
		}

		//update the game
		update();
		//render the sprite
		render();
	}
}

void Game::processEvents()
{
	sf::Event event;
	while (m_window.pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
		{
			m_window.close();
		}
	}
}

void Game::update()
{
	//variable for the animation
	Animation fsm;
	//variable for seting which animation
	int i;

	//if key pressed is the spacebar then the animation is set to 1 
	//which is the jumping state
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
	{
		i = 1;
	}
	//if key pressed is the spacebar then the animation is set to 2 
	//which is the walking state
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right) || sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	{
		i = 2;
	}
	//if key pressed is the spacebar then the animation is set to 3 
	//which is the swordsmanship state
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
	{
		i = 3;
	}
	//if key pressed is the spacebar then the animation is set to 4 
	//which is the shoveling state
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
	{
		i = 4;
	}
	//if key pressed is the spacebar then the animation is set to 5 
	//which is the hammering state
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::H))
	{
		i = 5;
	}
	//if key pressed is the spacebar then the animation is set to 6 
	//which is the climbing state
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
	{
		i = 6;
	}
	//if key pressed is the spacebar then the animation is set to 0 
	//which is the idling state
	else
	{
		i = 0;
	}

	//setting the jumping animation image and displaying animation text 
	if (i == 1)
	{
		fsm.jumping();
		m_sprite.setTexture(m_jumping);
		std::this_thread::sleep_for(std::chrono::milliseconds{ 1000 });
	}
	//setting the walking animation image and displaying animation text 
	else if (i == 2)
	{
		fsm.walking();
		m_sprite.setTexture(m_walking);
		std::this_thread::sleep_for(std::chrono::milliseconds{ 1000 });
	}
	//setting the swordsmanship animation image and displaying animation text 
	else if (i == 3)
	{
		fsm.swordsmanship();
		m_sprite.setTexture(m_swordsmanship);
		std::this_thread::sleep_for(std::chrono::milliseconds{ 1000 });
	}
	//setting the shoveling animation image and displaying animation text 
	else if (i == 4)
	{
		fsm.shoveling();
		m_sprite.setTexture(m_shoveling);
		std::this_thread::sleep_for(std::chrono::milliseconds{ 1000 });
	}
	//setting the hammering animation image and displaying animation text 
	else if (i == 5)
	{
		fsm.hammering();
		m_sprite.setTexture(m_hammering);
		std::this_thread::sleep_for(std::chrono::milliseconds{ 1000 });
	}
	//setting the climbing animation image and displaying animation text 
	else if (i == 6)
	{
		fsm.climbing();
		m_sprite.setTexture(m_climbing);
		std::this_thread::sleep_for(std::chrono::milliseconds{ 1000 });
	}
	//setting the idling animation image and displaying animation text 
	else
	{
		fsm.idle();
		m_sprite.setTexture(m_idling);
		std::this_thread::sleep_for(std::chrono::milliseconds{ 1000 });
	}

}


void Game::render()
{
	//drawing the sprite to the screen when 
	//the buttons are pressed or not
	m_window.clear();
	m_window.draw(m_sprite);
	m_window.display();
}
