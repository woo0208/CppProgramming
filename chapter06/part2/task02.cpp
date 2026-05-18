// **********************************************
//  제   목  :  chapter 06 실습과제2
//  날   짜  :  2026년 5월 18일
//  작성자  :  2603043 한정우
// **********************************************

#include <iostream>

using namespace std;

class Rectangle {
	int width, height;
public:
	Rectangle(int x=1, int y=1) {
		width = x;
		height = y;
	}
	void show() {
		cout << "사각형 폭은 " << width << " 높이는 " << height << endl;
	}
};

int main() {
	Rectangle rect0;
	rect0.show();
	Rectangle rect1(10);
	rect1.show();
	Rectangle rect2(10, 20);
	rect2.show();
	return 0;
}
