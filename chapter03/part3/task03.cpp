// *******************************************
// 제목: 실습 과제3
// 날짜: 26년 3월 24일
// 작성자: 2603043 한정우
// *******************************************


#include <iostream>

using namespace std;

class Triangle {											// 클래스 선언
public:
	double width;
	double height;
	Triangle();
	Triangle(double a, double b);
	double getArea();
	~Triangle();
};

Triangle::Triangle() : Triangle(1, 1) {						// 생성자1 선언 (바디가 아닌 초기화 리스트 사용)
};

Triangle::Triangle(double a, double b) : width(a), height(b) {     // 생성자2 선언 (바디가 아닌 초기화 리스트 사용 / 바로 출력 생성)
	cout << "밑변 " << width << "높이 " << height << "인 삼각형 생성" << endl;
}

Triangle::~Triangle() {										// 소멸자 선언 (중복불가니까 1개만 / 바로 출력 생성) 
	cout << "밑변 " << width << "높이 " << height << "인 삼각형 소멸" << endl;
};


double Triangle::getArea() {								// 면적 계산 함수
	return width * height / 2;
}


Triangle tri1(4,8);
Triangle tri2(2, 2);
int main() {
	cout << "--- main 함수 시작 ---" << endl;				// 보다 정확한 확인을 위해 출력문 추가
	cout << "삼각형의 면적은 " << tri2.getArea() << endl;
	cout << "삼각형의 면적은 " << tri1.getArea() << endl;
	cout << "--- main 함수 종료 ---" << endl;
	return 0;
}
