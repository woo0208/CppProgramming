#include <iostream>

using namespace std;

class Triangle {
    int width, height; // private 멤버 변수: 객체의 속성(상태 데이터)
public:
    Triangle();
    Triangle(int width);
    Triangle(int width, int height);
    ~Triangle();
    void setWidth(int width);
    void setHeight(int height);
    int getWidth();
    int getHeight();
    double getArea();
};

Triangle::Triangle() {
    width = 1;
    height = 1;
};

Triangle::~Triangle() {
    cout << "밑변" << this->width << ", 높이" << this->height << "인 삼각형 소멸" << endl;
}

Triangle::Triangle(int width) {
    this->width = width;
    this->height = 1;
}

Triangle::Triangle(int width, int height) {
    this->width = width;
    this->height = height;
    cout << "밑변" << this->width << ", 높이" << this->height << "인 삼각형 생성" << endl;
}

void Triangle::setWidth(int width) {
    this->width = width;
};

void Triangle::setHeight(int height) {
    this->height = height;
};

int Triangle::getWidth() {
    return width;
}

int Triangle::getHeight() {
    return height;
}

double Triangle::getArea() {
    return width * height / 2.0;
};

int main() {
    Triangle triArray[3] = { Triangle(2,2), Triangle(4,4), Triangle(6,6) };
    for (int i = 0; i < 3; i++) {
        cout << "삼각형" << i << "의 면적은 " << triArray[i].getArea() << endl;
    }
    return 0;
}
