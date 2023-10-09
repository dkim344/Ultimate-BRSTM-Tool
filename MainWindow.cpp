#include "MainWindow.h"

MainWindow::MainWindow() : wxFrame(nullptr, wxID_ANY, "Ultimate BRSTM Tool", wxPoint(30, 30))
{
	//Dynamically initialize/create notebook widget
	tab_menu = new wxNotebook(this, wxID_ANY);

	//Dynamically initialize/create the create/edit page and add it to the notebook
	create_page = new CEWindow(tab_menu);
	tab_menu->AddPage(create_page, "Create/Edit");

	//Dynamically initialize/create the convert page and add it to the notebook
	//convert_page = new ConvertWindow(tab_menu);
	//tab_menu->AddPage(convert_page, "Convert");

	//Dynamically initialize/create the about page and add it to the notebook
	about_page = new AboutWindow(tab_menu);
	tab_menu->AddPage(about_page, "About");

	//Dynamically initialize/create the sizer and add widgets to it
	base_layout = new wxBoxSizer(wxVERTICAL);
	base_layout->Add(tab_menu, 1, wxEXPAND);

	//Use the sizer for the layout/size of the main window
	this->SetSizerAndFit(base_layout);
}

MainWindow::~MainWindow()
{

}