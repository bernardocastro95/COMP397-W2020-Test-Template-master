#pragma once
#ifndef __LEFT_DICE__
#define __LEFT_DICE__
#include "../src/DisplayObject.h"
//Bernardo Castro, 02/18/2020, Definition for the Left Dice
class LeftDice : public DisplayObject {
public:
	LeftDice();
	~LeftDice();

	void draw() override;
	void update() override;
	void clean() override;
};
#endif
