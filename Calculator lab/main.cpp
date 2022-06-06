#include "main.h"

main::main() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(50, 50), wxSize(265, 445))
{
	wxFont font(16, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false);

	txt1 = new wxTextCtrl(this, 21, "", wxPoint(10, 10), wxSize(230, 30));
	txt1->SetFont(font);
	//ROW 1

	btn = new wxButton(this, 20, "CLEAR", wxPoint(10, 45), wxSize(230, 50));
	//ROW 2

	btn = new wxButton(this, 10, "Binary", wxPoint(10, 105), wxSize(50, 50));
	btn = new wxButton(this, 11, "Hex", wxPoint(70, 105), wxSize(50, 50));
	btn = new wxButton(this, 12, "Decimal", wxPoint(130, 105), wxSize(50, 50));
	btn = new wxButton(this, 13, "Mod", wxPoint(190, 105), wxSize(50, 50));
	//ROW 3
	btn = new wxButton(this, 7, "7", wxPoint(10, 165), wxSize(50, 50));
	btn = new wxButton(this, 8, "8", wxPoint(70, 165), wxSize(50, 50));
	btn = new wxButton(this, 9, "9", wxPoint(130, 165), wxSize(50, 50));
	btn = new wxButton(this, 14, "/", wxPoint(190, 165), wxSize(50, 50));
	//ROW 4

	btn = new wxButton(this, 4, "4", wxPoint(10, 225), wxSize(50, 50));
	btn = new wxButton(this, 6, "5", wxPoint(70, 225), wxSize(50, 50));
	btn = new wxButton(this, 7, "6", wxPoint(130, 225), wxSize(50, 50));
	btn = new wxButton(this, 15, "*", wxPoint(190, 225), wxSize(50, 50));
	//ROW 5

	btn = new wxButton(this, 1, "1", wxPoint(10, 285), wxSize(50, 50));
	btn = new wxButton(this, 2, "2", wxPoint(70, 285), wxSize(50, 50));
	btn = new wxButton(this, 3, "3", wxPoint(130, 285), wxSize(50, 50));
	btn = new wxButton(this, 16, "-", wxPoint(190, 285), wxSize(50, 50));
	//ROW 6

	btn = new wxButton(this, 17, "-/+", wxPoint(10, 345), wxSize(50, 50));
	btn = new wxButton(this, 0, "0", wxPoint(70, 345), wxSize(50, 50));
	btn = new wxButton(this, 18, "=", wxPoint(130, 345), wxSize(50, 50));
	btn = new wxButton(this, 19, "+", wxPoint(190, 345), wxSize(50, 50));
	







	
	

}
main::~main()
{
	delete[]btn;

}