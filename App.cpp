#include "App.h"

wxIMPLEMENT_APP(App); //Macro to make the application class (App) known to wxWidgets for dynamic construction

App::App()
{

}

App::~App()
{

}

bool App::OnInit()
{
	m_window = new MainWindow();
	m_window->Show();

	return true;
}