#include "RightDice.h"
#include "../src/Game.h"
//Bernardo Castro, 02/18/2020, Creating the Right Dice
RightDice::RightDice()
{
	TheTextureManager::Instance()->load("../Assets/textures/2.png",
		"rightDice", TheGame::Instance()->getRenderer());

	glm::vec2 diceSize = TheTextureManager::Instance()->getTextureSize("rightDice");

	setWidth(diceSize.x);
	setHeight(diceSize.y);
	setPosition(glm::vec2(Config::SCREEN_WIDTH * 0.5f, 300.0f));
	setType(DICE);
}
RightDice::~RightDice()
{
	
}
void RightDice::draw()
{
	int x = getPosition().x;
	int y = getPosition().y;

	TextureManager::Instance()->draw("rightDice", x, y,
		TheGame::Instance()->getRenderer(), true);
}
void RightDice::update()
{
	
}
void RightDice::clean()
{
	
}
void RightDice::setDice(int random)
{
	TheTextureManager::Instance()->load("../Assets/textures/" + std::to_string(random) + ".png",
		"rightDice", TheGame::Instance()->getRenderer());
}





