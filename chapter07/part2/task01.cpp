// **********************************************
//  제   목  :  chapter 07 실습과제1
//  날   짜  :  2026년 6월 02일
//  작성자  :  2603043 한정우
// **********************************************

#include <iostream>

using namespace std;

class Complex {
	int x;
	int y;
public:
	Complex operator+(int c);
	Complex operator+(Complex c);
	Complex();
	Complex(int x, int y);
	void show();
};

Complex::Complex() : x(0), y(0) {}
Complex::Complex(int a, int b) : x(a), y(b) {}

Complex Complex::operator+(int x) {
	Complex cm;
	cm.x = this->x + x;
	cm.y = this->y + x;
	return cm;
}

Complex Complex::operator+(Complex c) {
	Complex cm;
	cm.x = this->x + c.x;
	cm.y = this->y + c.y;
	return cm;
}

void Complex::show() {
	cout << x << "+" << y << "j" << endl;
}

int main() {
	Complex x(2, 3), y(-5, 10), sum;
	sum = x + y;
	//sum = x.operator+(y);
	cout << "두 복소수의 합은";
	sum.show();
	return 0;
}



// 사칙연산 연산자 만들기 => 시험 출제 예상
