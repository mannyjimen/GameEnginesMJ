#pragma once

#include "Utilities.h"

namespace Base
{
	class BASE_API BaseApplication
	{
	public:
		virtual void Initialize();
		virtual void Update();
		virtual void Shutdown();

		void Run();
	private:

	};
}