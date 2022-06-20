#pragma once
#include "IBaseCommand.h";
#include <string>
class mult :public IBaseCommand
{
public:
	int _num1;
	int _num2;

	mult() {

	}

	void setnum1(int num) {
		_num1 = num;
	}
	void setnum2(int num) {
		_num2 = num;
	}
	std::string GetMultiply(int _num1, int _num2)
	{
		std::string multi = std::to_string(_num1 * _num2);
		return multi;
	}
	wxString Execute() {
		std::string ans = GetMultiply(_num1, _num2);
		return ans;
	}
};

