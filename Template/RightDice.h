#pragma once
#ifndef __RIGHT_DICE__
#define __RIGHT_DICE__
#include "../src/DisplayObject.h"
//Bernardo Castro, 02/18/2020, Definition for the Right Dice
class RightDice : public DisplayObject
{
public:
	RightDice();
	~RightDice();

	void draw() override;
	void update() override;
	void clean() override;
};
#endif

