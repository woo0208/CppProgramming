// *******************************************
// 제목: 실습 과제3
// 날짜: 26년 3월 19일
// 작성자: 2603043 한정우
// *******************************************

#include <iostream>

using namespace std;

class Sphere {
public:
	double radius;                    // 반지름
	Sphere();                        // 생성자1  선언
	Sphere(double a);                // 생성자2  선언

	double getVolume();		 

};

Sphere::Sphere() : radius(1) {};                                    // 생성자1 구현																 
Sphere::Sphere(double a) : radius(a) {};                            // 생성자2 구현


double Sphere::getVolume() {
	return (4.0 / 3.0) * 3.14 * radius * radius * radius;             // 구의 면적 공식
}

int main() {
	Sphere sp1;
	cout << "구의 부피는 " << sp1.getVolume() << endl;

	Sphere sp2(3);
	cout << "구의 부피는 " << sp2.getVolume() << endl;
	return 0;
}
