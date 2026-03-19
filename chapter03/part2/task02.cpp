// *******************************************
// 제목: 실습 과제2
// 날짜: 26년 3월 19일
// 작성자: 2603043 한정우
// *******************************************

#include <iostream>

using namespace std;

class Triangle {
public:
	double width;			
	double height;	 
	Triangle();														// 생성자1 선언
	Triangle(double a, double b);									// 생성자2 선언
	double getArea();												// 면적 계산 함수
};

Triangle::Triangle() : Triangle(1, 1) {};							// 생성자1 구현
Triangle::Triangle(double a, double b) : width(a), height(b) {}		// 생성자2 구현

double Triangle::getArea() {
	return (width * height) / 2;									// 삼각형 면적 공식
}

int main() {
	Triangle tr1;
	cout << "삼각형의 면적은 " << tr1.getArea() << endl;

	Triangle tr2(2, 4);
	cout << "삼각형의 면적은 " << tr2.getArea() << endl;
	return 0;
}
