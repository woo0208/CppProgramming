#include <iostream>

using namespace std;

class Triangle {
public:
	double width;			 // 밑변
	double height;			 // 높이
	double getArea();		 // 면적 계산 함수
};

double Triangle::getArea() {
	return (width * height) / 2;	// 삼각형 면적 공식
}

int main() {
	Triangle tr;
	tr.width = 3;			  // 면적 할당
	tr.height = 5;			  // 높이 할당
	cout << "삼각형의 면적은 " << tr.getArea() << endl;
}
