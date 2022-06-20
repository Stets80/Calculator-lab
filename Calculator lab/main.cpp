#include "main.h"
#include "buttonfactory.h"
#include "CalcApp.h"
#include "Processor.h"
#include <vector>
#include "IBaseCommand.h"
#include "add.h"
#include "sub.h"
#include "mult.h"
#include "div.h"

wxBEGIN_EVENT_TABLE(main, wxFrame)
EVT_BUTTON(10001, OnButtonCliked)
wxEND_EVENT_TABLE()


int num1, num2;
wxString _num1 = "";
wxString _num2 = "";
bool symbol = false;
wxString sym = "";


main::main() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(50, 50), wxSize(265, 445))
{



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

	std::vector<IBaseCommand*> commands;

	Processor* processor = Processor::Getinstance();
	int idnum = evt.GetId();
	wxString wxfacenum = "";
	wxfacenum << idnum;

	if (idnum >= 0 && idnum <= 9)
	{
		txt1->AppendText(wxfacenum);
		if (symbol == true)
		{
			if (num2 != 0)
			{
				_num2 = std::to_string(num2);
				_num2 += std::to_string(evt.GetId());
			}
			else
			{
				_num2 += std::to_string(evt.GetId());
			}


		}
	}


	switch (evt.GetId())
	{
	case 10:
		_num1 = txt1->GetValue();
		txt1->AppendText("+");
		sym = "+";
		symbol = true;
		//txt1->AppendText("+");
		break;
	case 11:
		_num1 = txt1->GetValue();
		txt1->AppendText("-");
		sym = "-";
		symbol = true;
		//txt1->AppendText("-");
		break;
	case 12:
		_num1 = txt1->GetValue();
		txt1->AppendText("*");
		sym = "*";
		symbol = true;
		//txt1->AppendText("*");
		break;
	case 13:
		_num1 = txt1->GetValue();
		txt1->AppendText("/");
		sym = "/";
		symbol = true;
		//txt1->AppendText("/");
		break;
	case 14:
		txt1->AppendText("%");
		break;
	case 15:
		processor->SetBasenumber(wxAtoi(txt1->GetValue()));
		txt1->Clear();
		txt1->AppendText(processor->GetDecimal());
		break;
	case 16:
		processor->SetBasenumber(wxAtoi(txt1->GetValue()));
		txt1->Clear();
		txt1->AppendText(processor->GetHexadecimal());
		break;
	case 17:
		processor->SetBasenumber(wxAtoi(txt1->GetValue()));
		txt1->Clear();
		txt1->AppendText(processor->GetBinary());
		break;
	case 18:
		symbol = false;
		if (sym == "+")
		{
			add* Add = new add();

			num1 = wxAtoi(_num1);
			num2 = wxAtoi(_num2);

			Add->setnum1(num1);
			Add->setnum2(num2);

			commands.push_back(Add);

			txt1->Clear();
			//txt1->AppendText(processor->GetAddition(num1, num2));
			txt1->AppendText(commands[0]->Execute());

			commands.pop_back();
			delete Add;
		}
		else if (sym == "-")
		{
			sub* Sub = new sub();
			num1 = wxAtoi(_num1);
			num2 = wxAtoi(_num2);

			Sub->setnum1(num1);
			Sub->setnum2(num2);

			commands.push_back(Sub);

			txt1->Clear();
			txt1->AppendText(commands[0]->Execute());
			//txt1->AppendText(processor->GetSubtraction(num1, num2));
			commands.pop_back();
			delete Sub;
		}
		else if (sym == "/")
		{
			_div* Div = new _div();

			num1 = wxAtoi(_num1);
			num2 = wxAtoi(_num2);

			Div->setnum1(num1);
			Div->setnum2(num2);

			commands.push_back(Div);

			txt1->Clear();
			txt1->AppendText(commands[0]->Execute());
			//txt1->AppendText(processor->GetDivide(num1, num2));
			commands.pop_back();
			delete Div;
		}
		else if (sym == "*")
		{
			mult* Mult = new mult();
			num1 = wxAtoi(_num1);
			num2 = wxAtoi(_num2);

			Mult->setnum1(num1);
			Mult->setnum2(num2);

			commands.push_back(Mult);

			txt1->Clear();
			txt1->AppendText(commands[0]->Execute());
			//txt1->AppendText(processor->GetMultiply(num1, num2));
			commands.pop_back();
			delete Mult;
		}
		_num2.Clear();
		_num1.Clear();
		num1 = 0;
		num2 = 0;
		//txt1->AppendText("=");
		break;
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