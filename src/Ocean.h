#pragma once
#ifndef __OCEAN__
#define __OCEAN__

#include "DisplayObject.h"

class Ocean : public DisplayObject
{
public:
	Ocean();
	~Ocean();
	
	void draw() override;
	void update() override;
	void clean() override;
private:
	void m_move();
	void m_checkBounds();
	void m_reset();
};

#endif /* defined (__OCEAN__) */