#pragma once

#include "wx/wx.h"
#include "wx/bookctrl.h"
#include "CEWindow.h"
//#include "ConvertWindow.h"
#include "AboutWindow.h"

//The main window of the application, inherits attributes and methods from wxFrame
class MainWindow : public wxFrame
{
private:
	//Tab menu widget, in wxWidgets it is called wxNotebook
	wxNotebook* tab_menu = nullptr;

	//Notebook pages
	CEWindow* create_page = nullptr;
	//ConvertWindow* convert_page = nullptr;
	AboutWindow* about_page = nullptr;

	//Sizer
	wxBoxSizer* base_layout = nullptr;

public:
	MainWindow();
	~MainWindow();
};