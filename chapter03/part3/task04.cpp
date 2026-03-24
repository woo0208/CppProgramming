// *******************************************
// 제목: 실습 과제3
// 날짜: 26년 3월 19일
// 작성자: 2603043 한정우
// *******************************************

#include <iostream>

using namespace std;
// 원주율 상수로 정의
const double PI = 3.14; 
// 클래스 정의
class Sphere {
public:
	double radius;                    
	Sphere();                        
	Sphere(double a);                
	~Sphere();
	double getVolume();

};

// (위임)생성자1 - 생성자 초기화 리스트를 통해 다른 생성자 호출(중요! 그냥 radius(1) 로 넣으면 출력값 호출 불가)
Sphere::Sphere() : Sphere(1) {
};                          

// 생성자2 선언 (바디가 아닌 초기화 리스트 사용 / 바로 출력 생성)
Sphere::Sphere(double a) : radius(a) {
	cout << "반지름 " << radius << "인 구 생성" << endl;
};        

// 소멸자 선언 (매개변수&중복불가 / 바로 출력 생성)
Sphere::~Sphere() {
	cout << "반지름 " << radius << "인 구 소멸" << endl;
}

// 구의 부피 계산 함수
double Sphere::getVolume() {
	return (4.0 / 3.0) * PI * radius * radius * radius;           
}

int main() {
	Sphere sp1;
	cout << "구의 부피는 " << sp1.getVolume() << endl;

	Sphere sp2(3);
	cout << "구의 부피는 " << sp2.getVolume() << endl;
	return 0;
}
