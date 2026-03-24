// *******************************************
// 제목: 실습 과제2
// 날짜: 26년 3월 24일
// 작성자: 2603043 한정우
// *******************************************


#include <iostream>

using namespace std;

// 클래스 선언
class Triangle {											
public:
	double width;
	double height;
	Triangle();
	Triangle(double a, double b);
	double getArea();
	~Triangle();
};

// (위임)생성자1 - 생성자 초기화 리스트를 통해 다른 생성자 호출
Triangle::Triangle() : Triangle(1, 1) {						
};

// 생성자2 선언 (바디가 아닌 초기화 리스트 사용 / 바로 출력 생성)
Triangle::Triangle(double a, double b) : width(a), height(b) {     
	cout << "밑변 " << width << "높이 " << height << "인 삼각형 생성" << endl;
}

// 소멸자 선언 (매개변수&중복불가 / 바로 출력 생성)
Triangle::~Triangle() {										 
	cout << "밑변 " << width << "높이 " << height << "인 삼각형 소멸" << endl;
};


// 면적 계산 함수
double Triangle::getArea() {								
	return width * height / 2;
}


int main() {
	Triangle tri1;			
	cout << "삼각형의 면적은 " << tri1.getArea() << endl;
	Triangle tri2(2, 4);
	cout << "삼각형의 면적은 " << tri2.getArea() << endl;
	return 0;
}
