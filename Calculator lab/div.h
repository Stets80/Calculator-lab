#pragma once
#include "IBaseCommand.h"
#include <string>
class _div :public IBaseCommand
{
public:
	int _num1;
	int _num2;

	_div(){

	}
	void setnum1(int num) {
		_num1 = num;
	}
	void setnum2(int num) {
		_num2 = num;
	}
	std::string GetDivide(int _num1, int _num2)
	{
		std::string div = std::to_string(_num1 / _num2);
		return div;
	}
	wxString Execute() {
		std::string ans = GetDivide(_num1, _num2);
		return ans;
	}
};

