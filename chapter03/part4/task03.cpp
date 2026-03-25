// *******************************************
// 제목: 실습 과제3
// 날짜: 26년 3월 25일
// 작성자: 2603043 한정우
// *******************************************

#include <iostream>

using namespace std;


// 클래스 선언
class Triangle {
	// 기본 접근 지정자 private (외부에서 직접 접근을 막기 위함)
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

// 생성자 정의 (초기화 리스트를 사용하여 width와 height를 1로 초기화)
Triangle::Triangle() : width(1), height(1) {
	cout << "폭" << width << ",높이" << height << " 삼각형생성" << endl;
};

// 소멸자 정의
Triangle::~Triangle() {
	cout << "폭" << width << ",높이" << height << " 삼각형소멸" << endl;
}

// 외부에서 값을 설정할 수 있도록 하는 set 함수 정의
void Triangle::setWidth(int w) {
	// 음수 입력을 방지하기 위한 유효성 검사
	if (w < 0) {
		cout << "음수는 입력할 수 없습니다." << endl;
		return;
	}
	else {
		width = w;
	}
}

void Triangle::setHeight(int h) {
	// 음수 입력을 방지하기 위한 유효성 검사
	if (h < 0) {
		cout << "음수는 입력할 수 없습니다." << endl;
		return;
	}
	else {
		height = h;
	}
}

// 외부에서 값을 반환하는 get 함수 정의
int Triangle::getWidth() {
	return width;
}

int Triangle::getHeight() {
	return height;
}

// 삼각형의 면적을 계산하여 반환하는 함수
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
