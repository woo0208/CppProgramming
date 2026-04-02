#include <iostream>

using namespace std;

class Triangle {
    int width, height; // private 멤버 변수: 객체의 속성(상태 데이터)
public:
    Triangle();
    void setWidth(int width);
    void setHeight(int height);
    double getArea();
};

Triangle::Triangle() {
    width = 1;
    height = 1;
};


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
    Triangle tri;
    Triangle* p;
    p = &tri;
    p->setWidth(3);
    p->setHeight(5);
    cout << "삼각형의 면적은 " << p->getArea() << endl;
    return 0;
}
