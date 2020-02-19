#include "Level1Scene.h"
#include "Game.h"
#include <iostream>

Level1Scene::Level1Scene()
{
	start();
}

Level1Scene::~Level1Scene()
{
}

void Level1Scene::draw()
{
	m_pLeftDice->draw();
	m_pRightDice->draw();
	m_pRollButton->draw();
	m_pLeftDiceLabel->draw();
	m_pRightDiceLabel->draw();
}

void Level1Scene::updateLabel()
{
	//m_pLeftDiceLabel->setText(std::to_string(m_pRollButton->getLeftDiceNumber()));
	m_pRightDiceLabel->setText(std::to_string(m_pRollButton->getRightDiceNumber()));
	
}

void Level1Scene::update()
{
	m_pRollButton->setMousePosition(m_mousePosition);
	m_pRollButton->ButtonClick();

}

void Level1Scene::clean()
{
}

void Level1Scene::handleEvents()
{
	int wheel = 0;

	SDL_Event event;
	while(SDL_PollEvent(&event))
	{
		switch (event.type)
		{
		case SDL_QUIT:
			TheGame::Instance()->quit();
			break;
		case SDL_MOUSEMOTION:
			m_mousePosition.x = event.motion.x;
			m_mousePosition.y = event.motion.y;
			break;

		case SDL_MOUSEBUTTONDOWN:
			switch(event.button.button)
			{
			case SDL_BUTTON_LEFT:
				m_pRollButton->setMouseButtonClicked(true);
				break;
			}
		
			break;
		case SDL_MOUSEBUTTONUP:
			switch (event.button.button)
			{
			case SDL_BUTTON_LEFT:
				m_pRollButton->setMouseButtonClicked(false);
				updateLabel();
				break;
			}
			break;
		case SDL_MOUSEWHEEL:
			wheel = event.wheel.y;
			break;
		case SDL_KEYDOWN:
			switch (event.key.keysym.sym)
			{
			case SDLK_ESCAPE:
				TheGame::Instance()->quit();
				break;
			case SDLK_1:
				TheGame::Instance()->changeSceneState(SceneState::START_SCENE);
				break;
			case SDLK_2:
				TheGame::Instance()->changeSceneState(SceneState::END_SCENE);
				break;
			

				/************************************************************************/
			case SDLK_w:
				
				break;
			case SDLK_s:
				
				break;
			case SDLK_a:

				break;
			case SDLK_d:

				break;
			}
			
			break;
		case SDL_KEYUP:
			switch (event.key.keysym.sym)
			{
			case SDLK_w:
				
				break;

			case SDLK_s:
				
				break;

			case SDLK_a:

				break;
			case SDLK_d:

				break;
			}
			
			break;
		default:
			break;
		}
	}
}

void Level1Scene::start()
{
	m_pLeftDice = new LeftDice();
	m_pLeftDice->setPosition(glm::vec2(Config::SCREEN_WIDTH * 0.3f, Config::SCREEN_HEIGHT * 0.3f));
	addChild(m_pLeftDice);

	m_pRightDice = new RightDice();
	m_pRightDice->setPosition(glm::vec2(Config::SCREEN_WIDTH * 0.7f, Config::SCREEN_HEIGHT * 0.3f));
	addChild(m_pRightDice);

	m_pRollButton = new RollButton();
	m_pRollButton->setPosition(glm::vec2(Config::SCREEN_WIDTH * 0.5f, Config::SCREEN_HEIGHT * 0.7f));

	SDL_Color black = { 0, 0, 0, 255 };
	m_pLeftDiceLabel = new Label("4", "Consolas", 40, black, 
		glm::vec2(Config::SCREEN_WIDTH * 0.3f, Config::SCREEN_HEIGHT * 0.6f));
	addChild(m_pLeftDiceLabel);
	m_pRightDiceLabel = new Label("2", "Consolas", 40, black,
		glm::vec2(Config::SCREEN_WIDTH * 0.7f, Config::SCREEN_HEIGHT * 0.6f));
}

glm::vec2 Level1Scene::getMousePosition()
{
	return m_mousePosition;
}

