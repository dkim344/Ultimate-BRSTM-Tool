#include "AboutWindow.h"

AboutWindow::AboutWindow() : wxPanel(nullptr, wxID_ANY)
{
	SetBackgroundColour(wxColor(255, 255, 255));
}

AboutWindow::AboutWindow(wxNotebook* nb) : wxPanel(nb, wxID_ANY)
{
	SetBackgroundColour(wxColor(255, 255, 255));
}

AboutWindow::~AboutWindow()
{

}