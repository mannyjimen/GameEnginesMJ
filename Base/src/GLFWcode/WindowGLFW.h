#pragma once

#include "WindowImplementation.h"

namespace Base
{
	class WindowGLFW : public WindowImplementation
	{
	public:
		void CreateWindow(std::string, int width, int height) override;
		int GetWidth() const override;
		int GetHeight() const override;

	private:

	};
}
