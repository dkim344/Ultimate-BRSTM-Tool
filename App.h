#pragma once

#include "wx/wx.h"
#include "MainWindow.h"

//Initializes, creates, and displays the application window
class App : public wxApp
{
private:
	MainWindow* m_window = nullptr;

public:
	App();
	~App();

	virtual bool OnInit();
};