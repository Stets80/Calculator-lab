#pragma once
#include "wx/wx.h"
#include "main.h"
class CalcApp : public wxApp
{
public:
	CalcApp();
	~CalcApp();
private:
	main* m_frame1 = nullptr;

public:
	virtual bool OnInit();
};

