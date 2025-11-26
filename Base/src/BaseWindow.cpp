#include "pch.h"
#include "BaseWindow.h"

namespace Base {
	
	void BaseWindow::CreateWindow(std::string windowName, int width, int height)
	{
		mImplementation->CreateWindow(move(windowName), width, height);
	}

	int BaseWindow::GetWidth() const
	{
		return mImplementation->GetWidth();
	}

	int BaseWindow::GetHeight() const
	{
		return mImplementation->GetHeight();
	}
}