#pragma once

#include "Utilities.h"
#include "pch.h"
#include "WindowImplementation.h"

namespace Base
{
	class BASE_API BaseWindow
	{
	public:
		void CreateWindow(std::string windowName, int width, int height);
		int GetWidth() const;
		int GetHeight() const;


	private:
		std::unique_ptr<WindowImplementation> mImplementation;
	};
}