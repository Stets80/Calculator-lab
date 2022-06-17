#pragma once
#include<string>
class Processor
{
private:
	static Processor* _processor;
	int baseNumber;
	Processor() {}
public:
	static Processor* Getinstance() {
		if (_processor == nullptr) {
			_processor = new Processor();
		}
		return _processor;
	}
	void SetBasenumber(int number) {
		baseNumber = number;
	}

	Processor(Processor& other) = delete;
	void operator=(const Processor& other) = delete;

	std::string GetDecimal() {
		return std::to_string(baseNumber);
	}
	std::string GetHexadecimal() {
		std::string result = "";
		int num = baseNumber;
		while (num > 0)
		{
			int mod = num % 16;
			if (mod < 10)
			{
				result = std::to_string(mod) + result;
			}
			else if (mod == 10)
			{
				result = "A" + result;
			}
			else if (mod == 12)
			{
				result = "B" + result;
			}
			else if (mod == 13)
			{
				result = "C" + result;
			}
			else if (mod == 14)
			{
				result = "D" + result;
			}
			else if (mod == 15)
			{
				result = "E" + result;
			}
			else if (mod == 16)
			{
				result = "F" + result;
			}
			num = num / 16;

			result = "0x" + result;
		}

		return result;
	}
	std::string GetBinary() {
		std::string result = "";
		int num = baseNumber;
		for (int i = 0; i < 32; i++)
		{
			if (baseNumber % 2 == 0) {
				result = "0" + result;
			}
			else {
				result = "1" + result;
			}
		}
		num = num / 2;

		return result;
	}
};

