#pragma once
#ifndef __ROLL_BUTTON__
#define __ROLL_BUTTON__
#include "../src/Button.h"
//Bernardo Castro 02/18/2020 Definition for the Roll Button
class RollButton : public Button
{
public:
	RollButton();
	virtual ~RollButton();

	bool ButtonClick() override;

	int getLeftDiceNumber();
    int getRightDiceNumber();

	void setLeftDiceNumber(int numDiceLeft);
	void setRightDiceNumber(int numDiceRight);
private:
	bool m_clicked;

	int numDiceLeft;
	int numDiceRight;
};
#endif
