// *******************************************
// 제목: 실습 과제2
// 날짜: 26년 4월 02일
// 작성자: 2603043 한정우
// *******************************************

#include <iostream>

using namespace std;

// Triangle 클래스 선언부: 객체의 설계도
class Triangle {
    int width, height; // private 멤버 변수: 외부에서 직접 접근할 수 없는 데이터 (정보 은닉)
public:
    Triangle();               // 기본 생성자 선언: 객체 생성 시 초기화 담당
    void setWidth(int width); // setter 함수 선언: 너비 변경 인터페이스
    void setHeight(int height); // setter 함수 선언: 높이 변경 인터페이스
    double getArea();         // 면적 계산 함수 선언
};

// 기본 생성자 구현: 객체가 생성될 때 너비와 높이를 1로 초기화
Triangle::Triangle() {
    width = 1;
    height = 1;
}

// setWidth 구현: 'this' 포인터를 사용하여 매개변수와 멤버 변수(this->width)를 구분함
void Triangle::setWidth(int width) {
    this->width = width;
}

// setHeight 구현
void Triangle::setHeight(int height) {
    this->height = height;
}

// getArea 구현: 삼각형의 면적을 계산하여 반환 (2.0으로 나누어 실수 연산 수행)
double Triangle::getArea() {
    return width * height / 2.0;
}

int main() {
    Triangle tri;      // Triangle 타입의 객체 'tri' 생성 (생성자 자동 호출)
    Triangle* p;       // Triangle 객체를 가리킬 수 있는 객체 포인터 'p' 선언
    
    p = &tri;          // 포인터 p에 객체 tri의 주소를 할당
    
    // 객체 포인터를 이용한 멤버 접근 시 화살표 연산자(->)를 사용
    p->setWidth(3);    // tri.setWidth(3)과 동일한 효과
    p->setHeight(5);   // tri.setHeight(5)와 동일한 효과
    
    // 계산된 면적 출력
    cout << "삼각형의 면적은 " << p->getArea() << endl;
    
    return 0;         
}
