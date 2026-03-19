#include <iostream>

using namespace std;

struct Point {															   // 좌표를 담을 구조체 선언
	int x, y;
};

class Rectangle {
public:
	int x, y, width, height;											 
	Rectangle();														   // 기본 생성자
	Rectangle(int a, int b);											   // 생성자 2 선언
	Rectangle(int a, int b, int c, int d);								   // 생성자 3 선언
	int getVolume();
	int getPerimeter();
	Point getBottomRight();
};

Rectangle::Rectangle() : Rectangle(1,1,1,1) {};											  // 기본 생성자 구현
Rectangle::Rectangle(int a, int b) : x(a), y(b), width(1), height(1) {};				  // 생성자 2 구현
Rectangle::Rectangle(int a, int b, int c, int d) : x(a), y(b), width(c), height(d) {};	  // 생성자 3 구현

int Rectangle::getVolume() {															  // 면적 공식
	return width * height;
}

int Rectangle::getPerimeter() {															  // 둘레 공식
	return 2 * (width + height);
}

Point Rectangle::getBottomRight() {														  // 좌표 공식
	Point p = { x + width, y + height };
	return p;
}


int main() {
	Rectangle rect1;
	Rectangle rect2(3,5);
	Rectangle rect3(3, 5, 2, 4);

	cout << "rect1의 면적은 " << rect1.getVolume() << "\n";
	cout << "rect2의 둘레길이는 " << rect2.getPerimeter() << "\n";
	Point br = rect3.getBottomRight();
	cout << "rect3의 우측하단의 좌표는 (" << br.x << ", " << br.y << ")" << endl;
	return 0;						    
}
