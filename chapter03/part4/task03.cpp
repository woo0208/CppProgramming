#include <iostream>

using namespace std;

class Triangle {
	int width;
	int height;
public:
	Triangle();
	void setWidth(int w);
	void setHeight(int h);
	int getWidth();
	int getHeight();
	double getArea();
};

Triangle::Triangle() : width(1), height(1) {};

void Triangle::setWidth(int w) {
	if (w < 0) {
		cout << "음수는 입력할 수 없습니다." << endl;
		return;
	}
	else {
		width = w;
	}
}

void Triangle::setHeight(int h) {
	if (h < 0) {
		cout << "음수는 입력할 수 없습니다." << endl;
		return;
	}
	else {
		height = h;
	}
}


int Triangle::getWidth() {
	return width;
}

int Triangle::getHeight() {
	return height;
}

double Triangle::getArea() {
	return width * height / 2.0;
}


int main() {
	Triangle tri;
	tri.setWidth(3);
	tri.setHeight(5);
	cout << "삼각형의 폭은 " << tri.getWidth() << endl;
	cout << "삼각형의 높이는 " << tri.getWidth() << endl;
	cout << "삼각형의 면적은 " << tri.getArea() << endl;
	return 0;
}
