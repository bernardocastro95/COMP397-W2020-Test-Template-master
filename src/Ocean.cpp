#include "Ocean.h"
#include "Game.h"

Ocean::Ocean()
{
	TheTextureManager::Instance()->load("../Assets/textures/ocean.gif",
		"ocean", TheGame::Instance()->getRenderer());

	// measure size by querying the texture
	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("ocean");
	setWidth(size.x);
	setHeight(size.y);

	setPosition(glm::vec2(0.0f, -960.0f));
	setIsColliding(false);
	setType(OCEAN);
	setVelocity(glm::vec2(0.0f, 5.0f));

}

Ocean::~Ocean()
{
}

void Ocean::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;

	TheTextureManager::Instance()->draw("ocean", xComponent, yComponent,
		TheGame::Instance()->getRenderer(), 0, 255, false);
}

void Ocean::update()
{
	m_move();
	m_checkBounds();
}

void Ocean::clean()
{
}

void Ocean::m_move()
{
	setPosition(getPosition() + getVelocity());
}

void Ocean::m_checkBounds()
{
	if(getPosition().y >= 0.0f)
	{
		m_reset();
	}
}

void Ocean::m_reset()
{
	setPosition(glm::vec2(0.0f, -960.0f));
}
