#include <iostream>

using namespace std;

class Triangle {
	int width;
	int height;
public:
	Triangle();
	Triangle(int w, int h);
	~Triangle();
	void setWidth(int w);
	void setHeight(int h);
	int getWidth();
	int getHeight();
};

Triangle::Triangle() : width(1), height(1) {
	cout << "폭" << width << ", 높이" << height << "삼각형생성" << endl;
};

Triangle::Triangle(int w, int h) {
	if (w || h < 0) {
		cout << "길이는 양수여야함 대신 폭1,높이1 삼각형 생성" << endl;
		width = 1;
		height = 1;
	}
	else {
		width = w;
		height = h;
	}
};

Triangle::~Triangle() {
	cout << "폭" << width << ",높이" << height << " 삼각형소멸" << endl;
}

void Triangle::setWidth(int w) {
	if (w < 0) {
		cout << "폭은 양수이어야 함" << endl;
		return;
	}
	else {
		width = w;
	}
}

void Triangle::setHeight(int h) {
	if (h < 0) {
		cout << "높이는 양수이어야 함" << endl;
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


int main() {
	Triangle tri(-10,-5);
	tri.setWidth(-3);
	tri.setHeight(-5);
	tri.setWidth(3);
	tri.setHeight(5);
	cout << "삼각형의 폭은 " << tri.getWidth() << endl;
	cout << "삼각형의 높이는 " << tri.getHeight() << endl;
	return 0;
}
