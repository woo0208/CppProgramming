// *******************************************
// 제목: 실습 과제2
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
	Circle plus(int n) {
		radius += n;
		return *this;
	}
};



int main() {

	return 0;
}
