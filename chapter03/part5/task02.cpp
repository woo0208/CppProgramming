// *******************************************
// 제목: 실습 과제2
// 날짜: 26년 3월 30일
// 작성자: 2603043 한정우
// *******************************************

#include <iostream>

using namespace std;

class Triangle {
    int width, height; // private 멤버 변수: 객체의 속성(상태 데이터)
public:
    Triangle(); // 기본 생성자 선언
    ~Triangle();
    void setWidth(int w);
    void setHeight(int h);
    double getArea();
};

// 기본 생성자 정의: 멤버 초기화 리스트를 사용하여 기본값 할당
Triangle::Triangle() : width(1),height(1) {
    cout << "폭"<< width << ",높이"<< height << "인 삼각형 생성" << endl;
};

Triangle::~Triangle() {
    cout << "폭" << width << ",높이" << height << "인 삼각형 소멸" << endl;
}

void Triangle::setWidth(int w) {
    width = w;
};

void Triangle::setHeight(int h) {
    height = h;
};

double Triangle::getArea() {
    return width * height / 2;
};

int main() {
    Triangle tri;
    tri.setWidth(3);
    tri.setHeight(5);
    cout << "삼각형의 면적은 " << tri.getArea() << endl;
    return 0;
}
