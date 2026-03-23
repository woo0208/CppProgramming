#include <iostream>

using namespace std;

class Triangle {
public:
	double width;
	double height;
	Triangle();
	Triangle(double a, double b);
	double getArea();
	void printTra();
	void printDead();
};

Triangle::Triangle() : Triangle(1, 1) {
};

Triangle::Triangle(double a, double b) : width(a), height(b){
	cout << "밑변 " << width << "높이 " << height << "인 삼각형 생성" << endl;
}

double Triangle::getArea() {
	return width * height / 2;
}

void Triangle::printTra() {
	cout << "삼각형의 면적은 " << getArea() << endl;
}


void Triangle::printDead() {
	cout << "밑변 " << width << "높이 " << height << "인 삼각형 소멸" << endl;
}





int main() {
	Triangle tr1;
	tr1.printTra();

	Triangle tr2(2, 4);
	tr2.printTra();

	tr2.printDead();
	tr1.printDead();


	return 0;
}
