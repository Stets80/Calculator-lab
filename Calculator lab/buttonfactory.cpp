#include "buttonfactory.h"

buttonfactory::buttonfactory(main* frame1) {
	m_frame1 = frame1;
}
buttonfactory::~buttonfactory() {

}
wxButton* buttonfactory::addbuttons(wxWindow* window, int ID, wxString letter, wxPoint point, wxSize Size) {
	wxButton* btn = new wxButton(window, ID, letter, point, Size);
	return btn;
}

