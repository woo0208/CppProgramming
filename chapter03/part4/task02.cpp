#include <iostream>

using namespace std;

class Circle {
	int radius;
public:
	Circle();
	void setRadius(int r);
	int getRadius();
};

Circle::Circle() {
	radius = 1;
}


void Circle::setRadius(int r) {
	if (r < 0) {
		cout << "음수는 입력할 수 없습니다." << endl;
		radius = 1;
		return;
	}
	else {
		radius = r;
	}
}

int Circle::getRadius() {
	return radius;
}



int main() {
	Circle waffle;
	waffle.setRadius(5);
	cout << "원의 반지름은 " << waffle.getRadius() << endl;
	return 0;
}
