#include "CEWindow.h"

CEWindow::CEWindow() : wxPanel(nullptr, wxID_ANY)
{

}

CEWindow::CEWindow(wxNotebook* nb) : wxPanel(nb, wxID_ANY)
{
	//Dynamically initialize/create file selection button
	file_btn = new wxButton(this, wxID_ANY, "Select or Drag && Drop\nMusic File Here");

	//Dynamically initialize/create file information property grid
	file_info = new wxPropertyGrid(this, wxID_ANY, wxPoint(-1, 50)/*, wxSize(300, 50)*/);
	file_info->Append(new wxPropertyCategory("Audio Information"));
	file_info->Append(new wxStringProperty("Format"));

	//Dynamically initialize/create amplify module widgets and sizers, setup the sizers
	amp_layout = new wxStaticBoxSizer(wxVERTICAL, this, "Amplify");
	amp_layout_r1 = new wxBoxSizer(wxHORIZONTAL);
	amp_layout_r2 = new wxBoxSizer(wxHORIZONTAL);

	amp_text = new wxStaticText(amp_layout->GetStaticBox(), wxID_ANY, "Amplification (dB)");
	amp_value = new wxSpinCtrlDouble(amp_layout->GetStaticBox(), wxID_ANY);
	peakamp_text = new wxStaticText(amp_layout->GetStaticBox(), wxID_ANY, "Peak Amplification (dB)");
	peakamp_value = new wxTextCtrl(amp_layout->GetStaticBox(), wxID_ANY);

	amp_layout_r1->Add(amp_text, 1, wxEXPAND | wxALL, 0);
	amp_layout_r1->Add(amp_value, 1, wxEXPAND | wxALL, 0);
	amp_layout_r2->Add(peakamp_text, 1, wxEXPAND | wxALL, 0);
	amp_layout_r2->Add(peakamp_value, 1, wxEXPAND | wxALL, 0);

	amp_layout->Add(amp_layout_r1, 1, wxEXPAND | wxALL, 0);
	amp_layout->Add(amp_layout_r2, 1, wxEXPAND | wxALL, 0);

	//Dynamically initialize/create loop points module widgets and sizers, setup the sizers
	loop_layout = new wxStaticBoxSizer(wxVERTICAL, this, "Loop Points");

	//Dynamically initialize/create multi-channel module widgets and sizers, setup the sizers
	mc_layout = new wxStaticBoxSizer(wxVERTICAL, this, "Multi-Channel");

	//Dynamically initialize/create final lap / speed change module widgets and sizers, setup the sizers
	fl_layout = new wxStaticBoxSizer(wxVERTICAL, this, "3rd Lap Creator");

	//Dynamically initialize/create the create/edit window sizers, setup the sizers
	ce_layout = new wxBoxSizer(wxVERTICAL);
	ce_layout_r1 = new wxBoxSizer(wxHORIZONTAL);
	ce_layout_r2 = new wxBoxSizer(wxHORIZONTAL);
	ce_layout_r3 = new wxBoxSizer(wxHORIZONTAL);

	ce_layout_r1->Add(file_btn, 1, wxEXPAND | wxALL, 0);
	ce_layout_r1->Add(file_info, 1, wxEXPAND | wxALL, 0);
	ce_layout_r2->Add(amp_layout, 1, wxEXPAND | wxALL, 0);
	ce_layout_r2->Add(loop_layout, 1, wxEXPAND | wxALL, 0);
	ce_layout_r3->Add(mc_layout, 1, wxEXPAND | wxALL, 0);
	ce_layout_r3->Add(fl_layout, 1, wxEXPAND | wxALL, 0);

	ce_layout->Add(ce_layout_r1, 1, wxEXPAND | wxALL, 0);
	ce_layout->Add(ce_layout_r2, 1, wxEXPAND | wxALL, 0);
	ce_layout->Add(ce_layout_r3, 1, wxEXPAND | wxALL, 0);

	//Use the ce_layout sizer for the layout of the create/edit window
	this->SetSizer(ce_layout);
}

CEWindow::~CEWindow()
{

}