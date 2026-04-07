// *******************************************
// 제목: 실습 과제4
// 날짜: 26년 4월 02일
// 작성자: 2603043 한정우
// *******************************************

#include <iostream>

using namespace std;

// Triangle 클래스 선언부
class Triangle {
    int width, height; // private 멤버 변수: 객체의 속성 데이터
public:
    // 생성자 중복(Overloading)
    Triangle();
    Triangle(int width);
    Triangle(int width, int height);
    
    // 소멸자(Destructor): 객체가 소멸될 때 자동으로 호출되는 함수
    ~Triangle(); 

    // 멤버 함수들 (Getters & Setters)
    void setWidth(int width);
    void setHeight(int height);
    int getWidth();
    int getHeight();
    double getArea();
};

// 기본 생성자: 1, 1로 초기화
Triangle::Triangle() {
    width = 1;
    height = 1;
}

// 소멸자 구현: 객체가 소멸되는 시점에 메시지를 출력하여 생명 주기를 확인
Triangle::~Triangle() {
    cout << "밑변 " << this->width << ", 높이 " << this->height << "인 삼각형 소멸" << endl;
}

// 매개변수 1개 생성자
Triangle::Triangle(int width) {
    this->width = width;
    this->height = 1;
}

// 매개변수 2개 생성자: 생성 시 메시지 출력
Triangle::Triangle(int width, int height) {
    this->width = width;
    this->height = height;
    cout << "밑변 " << this->width << ", 높이 " << this->height << "인 삼각형 생성" << endl;
}

void Triangle::setWidth(int width) { this->width = width; }
void Triangle::setHeight(int height) { this->height = height; }
int Triangle::getWidth() { return width; }
int Triangle::getHeight() { return height; }

double Triangle::getArea() {
    return width * height / 2.0;
}

int main() {
    // 객체 배열 생성 및 초기화: 각 원소 생성 시 생성자가 호출됨
    // 초기화 리스트를 사용하여 각 원소에 특정 생성자(int, int)를 명시적으로 호출
    Triangle triArray[3] = { Triangle(2, 2), Triangle(4, 4), Triangle(6, 6) };

    for (int i = 0; i < 3; i++) {
        cout << "삼각형 " << i << "의 면적은 " << triArray[i].getArea() << endl;
    }

    return 0; 
    // main 함수가 종료되면서 지역 변수인 triArray[3]가 스택에서 소멸됨
    // 이때 배열의 원소 역순(triArray[2] -> [1] -> [0])으로 소멸자가 호출됨
}
