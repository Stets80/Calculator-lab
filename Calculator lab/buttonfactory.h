#pragma once
#include "wx/wx.h"
#include "main.h"
class buttonfactory
{
public:
	wxButton* btn = nullptr;
	main* m_frame1 = nullptr;
	wxButton* addbuttons(wxWindow* window, int ID, wxString letter, wxPoint point, wxSize Size);
	buttonfactory(main* frame);
	~buttonfactory();
};

