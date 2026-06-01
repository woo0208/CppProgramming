#include <iostream>

using namespace std;

class Complex {
	int x;
	int y;
public:
	Complex operator*(int c);
	Complex operator*(Complex c);
	Complex();
	Complex(int x, int y);
	void show();
};

Complex::Complex() : x(0), y(0) {}
Complex::Complex(int a, int b) : x(a), y(b) {}

Complex Complex::operator*(int x) {
	Complex cm;
	cm.x = this->x + x;
	cm.y = this->y + x;
	return cm;
}

Complex Complex::operator*(Complex c) {
	Complex cm;
	cm.x = this->x * c.x - y * c.y;
	cm.y = this->x * c.y + y * c.x;
	return cm;
}

void Complex::show() {
	cout << x << "+" << y << "j" << endl;
}

int main() {
	Complex x(2, 3), y(-5, 10), sum;
	sum = x * y;
	//sum = x.operator+(y);
	cout << "두 복소수의 합은";
	sum.show();
	return 0;
}



