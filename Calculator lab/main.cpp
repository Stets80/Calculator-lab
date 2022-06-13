#include "main.h"
#include "buttonfactory.h"
#include "CalcApp.h"

wxBEGIN_EVENT_TABLE(main, wxFrame)
EVT_BUTTON(10001, OnButtonCliked)
wxEND_EVENT_TABLE()

main::main() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(50, 50), wxSize(265, 445))
{
	buttonfactory factory = buttonfactory(this);


	wxFont font(16, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false);

	txt1 = new wxTextCtrl(this, 21, "", wxPoint(10, 10), wxSize(230, 30));
	txt1->SetFont(font);
	//ROW 1

	factory.btn0();
	factory.btn1();
	factory.btn2();
	factory.btn3();
	factory.btn4();
	factory.btn5();
	factory.btn6();
	factory.btn7();
	factory.btn8();
	factory.btn9();
	factory.btn10();
	factory.btn11();
	factory.btn12();
	factory.btn13();
	factory.btn14();
	factory.btn15();
	factory.btn16();
	factory.btn17();
	factory.btn18();
	factory.btn19();
	factory.btn20();

	//btn = new wxButton(this, 20, "CLEAR", wxPoint(10, 45), wxSize(230, 50));
	////ROW 2

	//btn = new wxButton(this, 17, "Binary", wxPoint(10, 105), wxSize(50, 50));
	//btn = new wxButton(this, 16, "Hex", wxPoint(70, 105), wxSize(50, 50));
	//btn = new wxButton(this, 15, "Decimal", wxPoint(130, 105), wxSize(50, 50));
	//btn = new wxButton(this, 14, "%", wxPoint(190, 105), wxSize(50, 50));
	////ROW 3
	//btn = new wxButton(this, 7, "7", wxPoint(10, 165), wxSize(50, 50));
	//btn = new wxButton(this, 8, "8", wxPoint(70, 165), wxSize(50, 50));
	//btn = new wxButton(this, 9, "9", wxPoint(130, 165), wxSize(50, 50));
	//btn = new wxButton(this, 13, "/", wxPoint(190, 165), wxSize(50, 50));
	////ROW 4

	//btn = new wxButton(this, 4, "4", wxPoint(10, 225), wxSize(50, 50));
	//btn = new wxButton(this, 5, "5", wxPoint(70, 225), wxSize(50, 50));
	//btn = new wxButton(this, 6, "6", wxPoint(130, 225), wxSize(50, 50));
	//btn = new wxButton(this, 12, "*", wxPoint(190, 225), wxSize(50, 50));
	////ROW 5

	//btn = new wxButton(this, 1, "1", wxPoint(10, 285), wxSize(50, 50));
	//btn = new wxButton(this, 2, "2", wxPoint(70, 285), wxSize(50, 50));
	//btn = new wxButton(this, 3, "3", wxPoint(130, 285), wxSize(50, 50));
	//btn = new wxButton(this, 11, "-", wxPoint(190, 285), wxSize(50, 50));
	////ROW 6

	//btn = new wxButton(this, 19, "-/+", wxPoint(10, 345), wxSize(50, 50));
	//btn = new wxButton(this, 0, "0", wxPoint(70, 345), wxSize(50, 50));
	//btn = new wxButton(this, 18, "=", wxPoint(130, 345), wxSize(50, 50));
	//btn = new wxButton(this, 10, "+", wxPoint(190, 345), wxSize(50, 50));
	
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
	case 18:
		txt1->AppendText("=");
		break;
	default:
		break;
	}

	if (idnum == 20)
	{
		txt1->Clear();
	}
}



main::~main()
{
	delete[]btn;

}