#pragma once

#include "wx/wx.h"
#include "wx/bookctrl.h"
#include "wx/propgrid/propgrid.h"
#include "wx/spinctrl.h"

//The create/edit window, used as a page in the notebook, inherits attributes and methods from wxPanel
class CEWindow : public wxPanel
{
private:
	//File selection button
	wxButton* file_btn = nullptr;

	//File information property grid
	wxPropertyGrid* file_info = nullptr;

	//Amplify module widgets and sizers
	wxStaticText* amp_text = nullptr;
	wxSpinCtrlDouble* amp_value = nullptr;
	wxStaticText* peakamp_text = nullptr;
	wxTextCtrl* peakamp_value = nullptr;

	wxStaticBoxSizer* amp_layout = nullptr;
	wxBoxSizer* amp_layout_r1 = nullptr;
	wxBoxSizer* amp_layout_r2 = nullptr;

	//Loop Points module widgets and sizers

	wxStaticBoxSizer* loop_layout = nullptr;

	//Multi-Channel module widgets and sizers

	wxStaticBoxSizer* mc_layout = nullptr;

	//Final Lap / Speed Change module widgets and sizers

	wxStaticBoxSizer* fl_layout = nullptr;

	//Create/Edit window sizer, along with the additional sizers it uses to manage the rows
	wxBoxSizer* ce_layout = nullptr;
	wxBoxSizer* ce_layout_r1 = nullptr;
	wxBoxSizer* ce_layout_r2 = nullptr;
	wxBoxSizer* ce_layout_r3 = nullptr;

public:
	CEWindow();
	CEWindow(wxNotebook* nb);
	~CEWindow();
};