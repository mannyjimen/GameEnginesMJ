#pragma once

#include "pch.h"

namespace Base
{
	class WindowImplementation
	{
	public:
		virtual void CreateWindow(std::string, int width, int height) = 0;
		virtual int GetWidth() const = 0;
		virtual int GetHeight() const = 0;

		virtual ~WindowImplementation() {};
	};
}