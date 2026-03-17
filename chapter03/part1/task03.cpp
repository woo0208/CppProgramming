#include <iostream>

using namespace std;


class Sphere {
public:
	double radius;				   // 반지름
	const double pie = 3.14;	   // 원주율
	double getVolume();			   // 부피 계산 함수
	double getArea();			   // 표면적 계산 함수
};


double Sphere::getVolume() {
	return (4.0 / 3.0) * pie * (radius * radius * radius);
}
double Sphere :: getArea() {
	return 4.0 * pie * (radius*radius);
}

int main() {
	Sphere sp;
	sp.radius = 3;
	cout << "구의 부피는 " << sp.getVolume() << endl;
	cout << "구의 표면적은 " << sp.getArea() << endl;

	return 0;
}
