// **********************************************
//  제   목  :  chapter 06 실습과제3
//  날   짜  :  2026년 5월 13일
//  작성자  :  2603043 한정우
// **********************************************

#include <iostream>

using namespace std;

class Rectangle {
	int width, height;
public:
	Rectangle() {
		width = 1;
		height = 1;
	}
	Rectangle(int w) {
		width = w;
		height = 1;
	}
	Rectangle(int w, int h) {
		width = w;
		height = h;
	}
	void show() {
		cout << "사각형 폭은 " << width << "높이는 " << height << endl;
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
