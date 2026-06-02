// **********************************************
//  제   목  :  chapter 07 실습과제3
//  날   짜  :  2026년 6월 02일
//  작성자  :  2603043 한정우
// **********************************************

#include <iostream>

using namespace std;

class Complex {
	int x;
	int y;
public:
	Complex operator+=(Complex& c);
	Complex();
	Complex(int x, int y);
	void show();
};

Complex::Complex() : x(0), y(0) {}
Complex::Complex(int a, int b) : x(a), y(b) {}

Complex Complex::operator+=(Complex& c) {
	this->x = this->x + c.x;
	this->y = this->y + c.y;
	return *this;
}

void Complex::show() {
	cout << x << "+" << y << "j" << endl;
}

int main() {
	Complex a(3, 5), b(1, 1);
	a.show();
	b.show();
	b += a;
	a.show();
	b.show();
	return 0;
}



