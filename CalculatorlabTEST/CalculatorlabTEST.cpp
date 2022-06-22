#include "pch.h"
#include "CppUnitTest.h"
#include "../Calculator lab/add.h"
#include "../Calculator lab/sub.h"
#include "../Calculator lab/mult.h"
#include "../Calculator lab/div.h"
#include "../Calculator lab/Processor.h"
#include "../Calculator lab/buttonfactory.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CalculatorlabTEST
{
	TEST_CLASS(CalculatorlabTEST)
	{
	public:

		TEST_METHOD(twoaddtwoequalsfour)
		{
			wxString ans;
			add* Add = new add();
			ans = Add->GetAddition(2, 2);
			Assert::AreEqual(ans, "4");
		}
		TEST_METHOD(twosuboneequalsone)
		{
			wxString ans;
			sub* Sub = new sub();
			ans = Sub->GetSubtraction(2, 1);
			Assert::AreEqual(ans, "1");
		}
		TEST_METHOD(fourmultfourequalssixteen)
		{
			wxString ans;
			mult* Mult = new mult();
			ans = Mult->GetMultiply(4, 4);
			Assert::AreEqual(ans, "16");
		}
		TEST_METHOD(sixteendivfourequalsfour)
		{
			wxString ans;
			_div* Div = new _div();
			ans = Div->GetDivide(16, 4);
			Assert::AreEqual(ans, "4");
		}
		TEST_METHOD(decimaltenisdecimalten)
		{
			Processor* processor = Processor::Getinstance();
			wxString ans;
			processor->SetBasenumber(10);
			ans = processor->GetDecimal();
			Assert::AreEqual(ans, "10");
		}
		TEST_METHOD(decimal24ishex0x18)
		{
			Processor* processor = Processor::Getinstance();
			wxString ans;
			processor->SetBasenumber(24);
			ans = processor->GetHexadecimal();
			Assert::AreEqual(ans, "0x18");
		}
		TEST_METHOD(decimal215ishex0xD7)
		{
			Processor* processor = Processor::Getinstance();
			wxString ans;
			processor->SetBasenumber(215);
			ans = processor->GetHexadecimal();
			Assert::AreEqual(ans, "0xD7");
		}
		TEST_METHOD(decimal400ishex0x190)
		{
			Processor* processor = Processor::Getinstance();
			wxString ans;
			processor->SetBasenumber(400);
			ans = processor->GetHexadecimal();
			Assert::AreEqual(ans, "0x190");
		}
		TEST_METHOD(decimal18isbin10010)
		{
			Processor* processor = Processor::Getinstance();
			wxString ans;
			processor->SetBasenumber(18);
			ans = processor->GetBinary();
			Assert::AreEqual(ans, "00000000000000000000000000010010");
		}
		TEST_METHOD(decimal1500isbin10111011100)
		{
			Processor* processor = Processor::Getinstance();
			wxString ans;
			processor->SetBasenumber(1500);
			ans = processor->GetBinary();
			Assert::AreEqual(ans, "00000000000000000000010111011100");
		}
		TEST_METHOD(button1)
		{
		main* frame = new main();
		wxButton* btn = nullptr;
		buttonfactory* factory = new buttonfactory(frame);
		btn = factory->addbuttons(frame, 1, "1", wxPoint(10, 285), wxSize(50, 50));
		Assert::AreEqual(btn->GetId(), 1);
		}
		TEST_METHOD(button2)
		{
			main* frame = new main();
			wxButton* btn = nullptr;
			buttonfactory* factory = new buttonfactory(frame);
			btn = factory->addbuttons(frame, 2, "2", wxPoint(10, 285), wxSize(50, 50));
			Assert::AreEqual(btn->GetId(), 2);
		}
		TEST_METHOD(button3)
		{
			main* frame = new main();
			wxButton* btn = nullptr;
			buttonfactory* factory = new buttonfactory(frame);
			btn = factory->addbuttons(frame, 3, "3", wxPoint(10, 285), wxSize(50, 50));
			Assert::AreEqual(btn->GetId(), 3);
		}
		TEST_METHOD(button4)
		{
			main* frame = new main();
			wxButton* btn = nullptr;
			buttonfactory* factory = new buttonfactory(frame);
			btn = factory->addbuttons(frame, 4, "4", wxPoint(10, 285), wxSize(50, 50));
			Assert::AreEqual(btn->GetId(), 4);
		}
		TEST_METHOD(button5)
		{
			main* frame = new main();
			wxButton* btn = nullptr;
			buttonfactory* factory = new buttonfactory(frame);
			btn = factory->addbuttons(frame, 5, "5", wxPoint(10, 285), wxSize(50, 50));
			Assert::AreEqual(btn->GetId(), 5);
		}
		TEST_METHOD(button6)
		{
			main* frame = new main();
			wxButton* btn = nullptr;
			buttonfactory* factory = new buttonfactory(frame);
			btn = factory->addbuttons(frame, 6, "6", wxPoint(10, 285), wxSize(50, 50));
			Assert::AreEqual(btn->GetId(), 6);
		}
		TEST_METHOD(button7)
		{
			main* frame = new main();
			wxButton* btn = nullptr;
			buttonfactory* factory = new buttonfactory(frame);
			btn = factory->addbuttons(frame, 7, "7", wxPoint(10, 285), wxSize(50, 50));
			Assert::AreEqual(btn->GetId(), 7);
		}
		TEST_METHOD(button8)
		{
			main* frame = new main();
			wxButton* btn = nullptr;
			buttonfactory* factory = new buttonfactory(frame);
			btn = factory->addbuttons(frame, 8, "8", wxPoint(10, 285), wxSize(50, 50));
			Assert::AreEqual(btn->GetId(), 8);
		}
		TEST_METHOD(button9)
		{
			main* frame = new main();
			wxButton* btn = nullptr;
			buttonfactory* factory = new buttonfactory(frame);
			btn = factory->addbuttons(frame, 9, "9", wxPoint(10, 285), wxSize(50, 50));
			Assert::AreEqual(btn->GetId(), 9);
		}
		TEST_METHOD(button0)
		{
			main* frame = new main();
			wxButton* btn = nullptr;
			buttonfactory* factory = new buttonfactory(frame);
			btn = factory->addbuttons(frame, 0, "0", wxPoint(10, 285), wxSize(50, 50));
			Assert::AreEqual(btn->GetId(), 0);
		}

	};
}
