#include <iostream>

using namespace std;

class Complex {
	int x;
	int y;
public:
	Complex operator-(Complex& c);
	Complex operator-(int c);
	Complex();
	Complex(int x, int y);
	void show();
};

Complex::Complex() : x(0), y(0) {}
Complex::Complex(int a, int b) : x(a), y(b) {}

Complex Complex::operator-(Complex& c) {
	this->x = this->x - c.x;
	this->y = this->y - c.y;
	return *this;
}

Complex Complex::operator-(int c) {
	Complex cm;
	cm.x = this->x - c;
	cm.y = this->y - c;
	return cm;
}

void Complex::show() {
	cout << x << "+" << y << "j" << endl;
}

int main() {
	Complex a(3, 5), b;
	a.show();
	b.show();
	b = a-2;
	a.show();
	b.show();
	return 0;
}
