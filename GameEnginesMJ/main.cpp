#include "Base.h"

#include <iostream>

class MyGame : public Base::BaseApplication
{
	void Update() override
	{
		BASE_LOG("Game is running");
	}
};

START_BASE_GAME(MyGame);