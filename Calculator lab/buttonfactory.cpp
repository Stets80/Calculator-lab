#include "buttonfactory.h"

buttonfactory::buttonfactory(main* frame1) {
	m_frame1 = frame1;
}
buttonfactory::~buttonfactory() {

}
wxButton* buttonfactory::btn0() {
btn = new wxButton(m_frame1, 0, "0", wxPoint(70, 345), wxSize(50, 50));
return btn;
}
wxButton* buttonfactory::btn1() {
btn = new wxButton(m_frame1, 1, "1", wxPoint(10, 285), wxSize(50, 50));
return btn;
}
wxButton* buttonfactory::btn2() {
btn = new wxButton(m_frame1, 2, "2", wxPoint(70, 285), wxSize(50, 50));
return btn;
}
wxButton* buttonfactory::btn3() {
btn = new wxButton(m_frame1, 3, "3", wxPoint(130, 285), wxSize(50, 50));
return btn;
}
wxButton* buttonfactory::btn4() {
btn = new wxButton(m_frame1, 4, "4", wxPoint(10, 225), wxSize(50, 50));
return btn;
}
wxButton* buttonfactory::btn5() {
btn = new wxButton(m_frame1, 5, "5", wxPoint(70, 225), wxSize(50, 50));
return btn;
}
wxButton* buttonfactory::btn6() {
btn = new wxButton(m_frame1, 6, "6", wxPoint(130, 225), wxSize(50, 50));
return btn;
}
wxButton* buttonfactory::btn7() {
btn = new wxButton(m_frame1, 7, "7", wxPoint(10, 165), wxSize(50, 50));
return btn;
}
wxButton* buttonfactory::btn8() {
btn = new wxButton(m_frame1, 8, "8", wxPoint(70, 165), wxSize(50, 50));
return btn;
}
wxButton* buttonfactory::btn9() {
btn = new wxButton(m_frame1, 9, "9", wxPoint(130, 165), wxSize(50, 50));
return btn;
}
wxButton* buttonfactory::btn10() {
btn = new wxButton(m_frame1, 10, "+", wxPoint(190, 345), wxSize(50, 50));
return btn;
}
wxButton* buttonfactory::btn11() {
btn = new wxButton(m_frame1, 11, "-", wxPoint(190, 285), wxSize(50, 50));
return btn;
}
wxButton* buttonfactory::btn12() {
btn = new wxButton(m_frame1, 12, "*", wxPoint(190, 225), wxSize(50, 50));
return btn;
}
wxButton* buttonfactory::btn13() {
btn = new wxButton(m_frame1, 13, "/", wxPoint(190, 165), wxSize(50, 50));
return btn;
}
wxButton* buttonfactory::btn14() {
btn = new wxButton(m_frame1, 14, "%", wxPoint(190, 105), wxSize(50, 50));
return btn;
}
wxButton* buttonfactory::btn15() {
btn = new wxButton(m_frame1, 15, "Decimal", wxPoint(130, 105), wxSize(50, 50));
return btn;
}
wxButton* buttonfactory::btn16() {
btn = new wxButton(m_frame1, 16, "Hex", wxPoint(70, 105), wxSize(50, 50));
return btn;
}
wxButton* buttonfactory::btn17() {
btn = new wxButton(m_frame1, 17, "Binary", wxPoint(10, 105), wxSize(50, 50));
return btn;
}
wxButton* buttonfactory::btn18() {
btn = new wxButton(m_frame1, 18, "=", wxPoint(130, 345), wxSize(50, 50));
return btn;
}
wxButton* buttonfactory::btn19() {
btn = new wxButton(m_frame1, 19, "-/+", wxPoint(10, 345), wxSize(50, 50));
return btn;
}
wxButton* buttonfactory::btn20() {
btn = new wxButton(m_frame1, 20, "CLEAR", wxPoint(10, 45), wxSize(230, 50));
return btn;
}
