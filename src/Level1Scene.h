#pragma once
#ifndef __LEVEL_1_SCENE__
#define __LEVEL_1_SCENE__

#include "Scene.h"
#include "../Template/LeftDice.h"
#include "../Template/RightDice.h"
#include "../Template/RollButton.h"
#include "Label.h"

class Level1Scene : public Scene
{
public:
	Level1Scene();
	~Level1Scene();
	
	void draw() override;
	void update() override;
	void clean() override;
	void handleEvents() override;
	void start() override;

	// getters
	glm::vec2 getMousePosition();

private:
	// game objects
	LeftDice* m_pLeftDice;
	RightDice* m_pRightDice;
	RollButton* m_pRollButton;
	Label* m_pLeftDiceLabel;
	Label* m_pRightDiceLabel;


	// private data member
	glm::vec2 m_mousePosition;
	
	
};

#endif /* defined (__LEVEL_1_SCENE__) */
