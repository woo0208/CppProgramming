#include <iostream>

using namespace std;

class Complex {
	int x;
	int y;
public:
	Complex(int x = 0, int y = 0) {
		this->x = x; this->y = y;
	}
	friend istream& operator>>(istream& op1, Complex& op2);
	friend ostream& operator<<(ostream& op1, Complex& op2);
};

istream& operator>> (istream& op1, Complex& op2) {
	cout << "실수부:";
	op1 >> op2.x;
	cout << "허수부:";
	op1 >> op2.y;
	return op1;
}

ostream& operator<< (ostream& op1, Complex& op2) {
	op1 << op2.x << op2.y << "j" << endl;
	return op1;
}

int main() {
	Complex x, y;
	cin >> x >> y;
	cout << x << y;
	return 0;
}
