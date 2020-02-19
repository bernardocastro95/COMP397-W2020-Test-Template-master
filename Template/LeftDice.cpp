#include "LeftDice.h"
#include "../src/Game.h"
//Bernardo Castro 02/18/2020 Creating the Left Dice
LeftDice::LeftDice()
{
	TheTextureManager::Instance()->load("../Assets/textures/4.png",
		"leftDice", TheGame::Instance()->getRenderer());

	glm::vec2 diceSize = TheTextureManager::Instance()->getTextureSize("leftDice");

	setWidth(diceSize.x);
	setHeight(diceSize.y);
	setPosition(glm::vec2(Config::SCREEN_WIDTH * 0.5f, 300.0f));
	setType(DICE);
}

LeftDice::~LeftDice()
{
}

void LeftDice::draw()
{
	int x = getPosition().x;
	int y = getPosition().y;

	TextureManager::Instance()->draw("leftDice", x, y, 
		TheGame::Instance()->getRenderer(), true);
}

void LeftDice::update()
{
}

void LeftDice::clean()
{
}
