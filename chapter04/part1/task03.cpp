#include <iostream>

using namespace std;

class Triangle {
    int width, height; // private 멤버 변수: 객체의 속성(상태 데이터)
public:
    Triangle();
    Triangle(int width);
    Triangle(int width, int height);
    void setWidth(int width);
    void setHeight(int height);
    double getArea();
};

Triangle::Triangle() {
    width = 1;
    height = 1;
};

Triangle::Triangle(int width) {
    this->width = width;
    this->height = 1;
}

Triangle::Triangle(int width, int height) {
    this->width = width;
    this->height = height;
}

void Triangle::setWidth(int width) {
    this->width = width;
};

void Triangle::setHeight(int height) {
    this->height = height;
};

double Triangle::getArea() {
    return width * height / 2.0;
};

int main() {
    Triangle tri1;
    cout << "삼각형의 면적은 " << tri1.getArea() << endl;
    Triangle tri2(10);
    cout << "삼각형의 면적은 " << tri2.getArea() << endl;
    Triangle tri3(10,2);
    cout << "삼각형의 면적은 " << tri3.getArea() << endl;
    return 0;
}
