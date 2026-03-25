#include <iostream>

using namespace std;

// 클래스 선언
class Circle {
	// 기본 접근 지정자 private
	int radius;
	// 외부 접근을 위해 public 사용
public:
	Circle();
	void setRadius(int r);
	int getRadius();
};

// 생성자 선언 (기본값 1로 초기화)
Circle::Circle() {
	radius = 1;
}


// 외부에서 값에 접근하여 수정할 수 있도록 set 함수 추가
void Circle::setRadius(int r) {
	// 매개변수가 음수일 경우 예외로직 추가
	if (r < 0) {
		cout << "음수는 입력할 수 없습니다." << endl;
		radius = 1;
		return;
	}
	else {
		radius = r;
	}
}

// 외부에서 값을 읽어올 수 있도록 get 함수 추가
int Circle::getRadius() {
	return radius;
}



int main() {
	Circle waffle;
	waffle.setRadius(5);
	cout << "원의 반지름은 " << waffle.getRadius() << endl;
	return 0;
}
