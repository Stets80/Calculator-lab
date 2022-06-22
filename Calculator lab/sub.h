#pragma once
#include "IBaseCommand.h";
#include <string>
class sub :public IBaseCommand
{
public:
	int _num1;
	int _num2;

	sub() {

	}
	void setnum1(int num) {
		_num1 = num;
	}
	void setnum2(int num) {
		_num2 = num;
	}
	std::string GetSubtraction(int _num1, int _num2)
	{
		std::string sub = std::to_string(_num1 - _num2);
		return sub;
	}
	wxString Execute() {
		std::string ans = GetSubtraction(_num1, _num2);
		return ans;
	}
};

