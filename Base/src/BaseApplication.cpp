#include "pch.h"

#include "BaseApplication.h"

namespace Base
{
	void BaseApplication::Initialize()
	{

	}

	void BaseApplication::Update()
	{

	}

	void BaseApplication::Shutdown()
	{

	}

	void BaseApplication::Run()
	{
		Initialize();

		while (true)
		{
			Update();
		}

		Shutdown();
	}
}