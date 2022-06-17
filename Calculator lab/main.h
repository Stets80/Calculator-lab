#pragma once
#include "wx/wx.h"
class main : public wxFrame
{
public:
	main();
	~main();

public:
	wxButton* btn;
	wxTextCtrl *txt1 = nullptr;
	

	void OnButtonCliked(wxCommandEvent& evt);

	wxDECLARE_EVENT_TABLE();
	
};

