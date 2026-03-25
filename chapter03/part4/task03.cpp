#include <iostream>

using namespace std;


// 클래스 선언
class Triangle {
	// 기본 접근 지정자 private
	int width;
	int height;

	// 외부에서 접근하기 위해 public 사용
public:
	Triangle();
	~Triangle();
	void setWidth(int w);
	void setHeight(int h);
	int getWidth();
	int getHeight();
	double getArea();
};

// 생성자 => 초기화 리스트 사용
Triangle::Triangle() : width(1), height(1) {
	cout << "폭" << width << ",높이" << height << " 삼각형생성" << endl;
};

// 소멸자 선언
Triangle::~Triangle() {
	cout << "폭" << width << ",높이" << height << " 삼각형소멸" << endl;
}

// 외부에서 값에 접근하여 수정할 수 있도록 set 함수 추가
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

// 외부에서 값을 읽어올 수 있도록 get 함수 추가
int Triangle::getWidth() {
	return width;
}

int Triangle::getHeight() {
	return height;
}

// 면적 계산 함수
double Triangle::getArea() {
	return width * height / 2.0;
}


int main() {
	Triangle tri;
	tri.setWidth(3);
	tri.setHeight(5);
	cout << "삼각형의 폭은 " << tri.getWidth() << endl;
	cout << "삼각형의 높이는 " << tri.getHeight() << endl;
	cout << "삼각형의 면적은 " << tri.getArea() << endl;
	return 0;
}
