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
