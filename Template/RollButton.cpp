#include "RollButton.h"
#include "../src/Game.h"
//Bernardo Castro 02/18/2020 Creating the Roll Button


RollButton::RollButton()
	:Button(
		"../Assets/textures/rollButton.png",
		"startButton",
		START_BUTTON, glm::vec2(400.0f, 300.0f)), m_clicked(false)
{
}

RollButton::~RollButton()
{
}

bool RollButton::ButtonClick()
{
	if (m_mouseOver() && m_mouseButtonClicked)
	{
		if (!m_clicked)
		{
			//int num = Util::RandomRange(1, 6);
			//setLeftDiceNumber(num);
			int num2 = Util::RandomRange(1, 6);
			setRightDiceNumber(num2);
			m_clicked = true;
		}
		return true;
	}
	else
	{
		m_clicked = false;
	}

	return false;
}
int RollButton::getLeftDiceNumber()
{
	return numDiceLeft;
}
int RollButton::getRightDiceNumber()
{
	return numDiceRight;
}
void RollButton::setLeftDiceNumber(int numDiceLeft)
{
	this->numDiceLeft = numDiceLeft;
}
void RollButton::setRightDiceNumber(int numDiceRight)
{
	this->numDiceRight = numDiceRight;
}




