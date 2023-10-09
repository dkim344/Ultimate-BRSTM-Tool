#pragma once

#include "wx/wx.h"
#include "wx/bookctrl.h"

class AboutWindow : public wxPanel
{
private:

public:
	AboutWindow();
	AboutWindow(wxNotebook* nb);
	~AboutWindow();
};

