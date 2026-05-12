// *******************************************
// 제목: 실습 과제4
// 날짜: 26년 5월 11일
// 작성자: 2603043 한정우
// *******************************************

#include <iostream>
#include <string>

using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius) {
		this->radius = radius;
	}
	Circle& plus(int n) {
		radius += n;
		return *this;
	}
	Circle& minus(int n) {
		radius -= n;
		return *this;
	}
	int getRadius() {
		return radius;
	}
};



int main() {
	Circle a(5);
	a.plus(1).plus(2).plus(3).minus(3).minus(2).minus(1).minus(5);
	cout << "객체 a의 반지름은 " << a.getRadius();
	return 0;
}
