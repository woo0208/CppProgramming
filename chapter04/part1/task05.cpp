// *******************************************
// 제목: 실습 과제5
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
    
    // 소멸자 (객체 소멸 시 호출)
    ~Triangle() { } 

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

// 매개변수 1개 생성자
Triangle::Triangle(int width) {
    this->width = width;
    this->height = 1;
}

// 매개변수 2개 생성자
Triangle::Triangle(int width, int height) {
    this->width = width;
    this->height = height;
}

void Triangle::setWidth(int width) { this->width = width; }
void Triangle::setHeight(int height) { this->height = height; }
int Triangle::getWidth() { return width; }
int Triangle::getHeight() { return height; }

// 면적 계산 함수
double Triangle::getArea() {
    return width * height / 2.0;
}

int main() {
    // 1. 객체 배열 생성 및 초기화: 3개의 Triangle 객체가 메모리에 연속적으로 배치됨
    Triangle triArray[3] = { Triangle(2, 2), Triangle(4, 4), Triangle(6, 6) };
    
    // 2. 객체 포인터 선언 및 배열의 시작 주소로 초기화
    Triangle* p;
    p = triArray; // 배열명 'triArray'는 첫 번째 원소의 주소(&triArray[0])와 같음

    // 3. 포인터 연산을 이용한 배열 순회
    for (int i = 0; i < 3; i++) {
        // p가 가리키는 현재 객체의 getArea() 호출 (화살표 연산자 사용)
        cout << "삼각형 " << i << "의 면적은 " << p->getArea() << endl;
        
        // 포인터 연산: p를 다음 Triangle 객체의 주소로 이동시킴
        // 실제 주소값은 sizeof(Triangle) 바이트만큼 증가함
        p++; 
    }
    
    return 0;
}
