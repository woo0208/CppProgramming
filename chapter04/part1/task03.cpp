#include <iostream>

using namespace std;

// Triangle 클래스 선언부
class Triangle {
    int width, height; // private 멤버 변수: 외부 직접 접근 차단(정보 은닉)
public:
    // 생성자 중복(Overloading): 매개변수의 개수가 다른 여러 생성자 정의
    Triangle();                         // 기본 생성자: 매개변수 없음
    Triangle(int width);                // 매개변수 1개인 생성자
    Triangle(int width, int height);    // 매개변수 2개인 생성자
    
    void setWidth(int width);           // 멤버 변수 width를 변경하는 setter
    void setHeight(int height);         // 멤버 변수 height를 변경하는 setter
    double getArea();                   // 삼각형의 면적을 계산하여 반환
};

// 기본 생성자 구현: 인자 없이 객체 생성 시 1, 1로 초기화
Triangle::Triangle() {
    width = 1;
    height = 1;
}

// 매개변수가 1개인 생성자: 너비만 전달받고 높이는 1로 고정하여 초기화
Triangle::Triangle(int width) {
    this->width = width; // this 포인터: 멤버 변수와 매개변수 이름이 같을 때 구분
    this->height = 1;
}

// 매개변수가 2개인 생성자: 너비와 높이를 모두 전달받아 초기화
Triangle::Triangle(int width, int height) {
    this->width = width;
    this->height = height;
}

void Triangle::setWidth(int width) {
    this->width = width;
}

void Triangle::setHeight(int height) {
    this->height = height;
}

double Triangle::getArea() {
    return width * height / 2.0; // 정수 연산 시 소수점이 잘리지 않도록 2.0(실수)으로 나눔
}

int main() {
    // 1. 기본 생성자 호출: tri1.width=1, tri1.height=1
    Triangle tri1;
    cout << "삼각형의 면적은 " << tri1.getArea() << endl; // 결과: 0.5
    
    // 2. 매개변수 1개 생성자 호출: tri2.width=10, tri2.height=1
    Triangle tri2(10);
    cout << "삼각형의 면적은 " << tri2.getArea() << endl; // 결과: 5
    
    // 3. 매개변수 2개 생성자 호출: tri3.width=10, tri3.height=2
    Triangle tri3(10, 2);
    cout << "삼각형의 면적은 " << tri3.getArea() << endl; // 결과: 10
    
    return 0;
}
