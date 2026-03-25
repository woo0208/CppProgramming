#include <iostream>

using namespace std;

// 클래스 선언
class Triangle {
	int width;
	int height;

	// 외부에서 접근하기 위해 public 사용
public:
	Triangle();
	Triangle(int w, int h);
	~Triangle();
	void setWidth(int w);
	void setHeight(int h);
	int getWidth();
	int getHeight();
};

// 생성자1 => 초기화 리스트 사용
Triangle::Triangle() : width(1), height(1) {
	cout << "폭" << width << ", 높이" << height << "삼각형생성" << endl;
};

// 생성자2 => 예외로직이 추가되었으므로 초기화 리스트 X
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

// 소멸자 선언
Triangle::~Triangle() {
	cout << "폭" << width << ",높이" << height << " 삼각형소멸" << endl;
}

// 외부에서 값에 접근하여 수정할 수 있도록 set 함수 추가
void Triangle::setWidth(int w) {
	// 음수일 경우 예외 발생
	if (w < 0) {
		cout << "폭은 양수이어야 함" << endl;
		return;
	}
	else {
		width = w;
	}
}

void Triangle::setHeight(int h) {
	// 음수일 경우 예외 발생
	if (h < 0) {
		cout << "높이는 양수이어야 함" << endl;
		return;
	}
	else {
		height = h;
	}
}

// 외부에서 값을 읽어올 수 있도록 get 함수 추가
int Triangle::getWidth() {
	return width;
}

int Triangle::getHeight() {
	return height;
}


int main() {
	Triangle tri(-10, -5);
	tri.setWidth(-3);
	tri.setHeight(-5);
	tri.setWidth(3);
	tri.setHeight(5);
	cout << "삼각형의 폭은 " << tri.getWidth() << endl;
	cout << "삼각형의 높이는 " << tri.getHeight() << endl;
	return 0;
}
