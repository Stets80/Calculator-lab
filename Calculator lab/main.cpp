#include "main.h"
#include "buttonfactory.h"
#include "CalcApp.h"
#include "Processor.h"

wxBEGIN_EVENT_TABLE(main, wxFrame)
EVT_BUTTON(10001, OnButtonCliked)
wxEND_EVENT_TABLE()

main::main() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(50, 50), wxSize(265, 445))
{
	Processor* processor = Processor::Getinstance();

	buttonfactory factory = buttonfactory(this);

	wxFont font(16, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false);

	txt1 = new wxTextCtrl(this, 21, "", wxPoint(10, 10), wxSize(230, 30));
	txt1->SetFont(font);
	//ROW 1

	factory.addbuttons(this, 20, "clear", wxPoint(10, 45), wxSize(230, 50));
	factory.addbuttons(this, 17, "Binary", wxPoint(10, 105), wxSize(50, 50));
	factory.addbuttons(this, 16, "Hex", wxPoint(70, 105), wxSize(50, 50));
	factory.addbuttons(this, 15, "Decimal", wxPoint(130, 105), wxSize(50, 50));
	factory.addbuttons(this, 14, "%", wxPoint(190, 105), wxSize(50, 50));
	//row 2

	factory.addbuttons(this, 7, "7", wxPoint(10, 165), wxSize(50, 50));
	factory.addbuttons(this, 8, "8", wxPoint(70, 165), wxSize(50, 50));
	factory.addbuttons(this, 9, "9", wxPoint(130, 165), wxSize(50, 50));
	factory.addbuttons(this, 13, "/", wxPoint(190, 165), wxSize(50, 50));
	//row 3

	factory.addbuttons(this, 4, "4", wxPoint(10, 225), wxSize(50, 50));
	factory.addbuttons(this, 5, "5", wxPoint(70, 225), wxSize(50, 50));
	factory.addbuttons(this, 6, "6", wxPoint(130, 225), wxSize(50, 50));
	factory.addbuttons(this, 12, "*", wxPoint(190, 225), wxSize(50, 50));
	//row 4
	factory.addbuttons(this, 1, "1", wxPoint(10, 285), wxSize(50, 50));
	factory.addbuttons(this, 2, "2", wxPoint(70, 285), wxSize(50, 50));
	factory.addbuttons(this, 3, "3", wxPoint(130, 285), wxSize(50, 50));
	factory.addbuttons(this, 11, "-", wxPoint(190, 285), wxSize(50, 50));
	//row 5
	factory.addbuttons(this, 19, "-/+", wxPoint(10, 345), wxSize(50, 50));
	factory.addbuttons(this, 0, "0", wxPoint(70, 345), wxSize(50, 50));
	factory.addbuttons(this, 18, "=", wxPoint(130, 345), wxSize(50, 50));
	factory.addbuttons(this, 10, "+", wxPoint(190, 345), wxSize(50, 50));

	


	Bind(wxEVT_COMMAND_BUTTON_CLICKED, &main::OnButtonCliked, this);

}

void main::OnButtonCliked(wxCommandEvent& evt)
{
	int idnum = evt.GetId();
	wxString wxfacenum = "";
	wxfacenum << idnum;

	if (idnum >= 0 && idnum <= 9)
	{
		txt1->AppendText(wxfacenum);
	}
	switch (evt.GetId())
	{
	case 10:
		txt1->AppendText("+");
		break;
	case 11:
		txt1->AppendText("-");
		break;
	case 12:
		txt1->AppendText("*");
		break;
	case 13:
		txt1->AppendText("/");
		break;
	case 14:
		txt1->AppendText("%");
		break;
	case 15:
		txt1->AppendText("Dec");
		break;
	case 16:
		txt1->AppendText("Hex");
		break;
	case 17:
		txt1->AppendText("Bin");
		break;
	case 18:
		txt1->AppendText("=");
	case 19:
		txt1->AppendText("-");
		break;
	case 20:
		txt1->Clear();
		break;
	default:
		break;
	}
}



main::~main()
{
	delete[]btn;

}