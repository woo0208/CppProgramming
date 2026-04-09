#include <iostream>

using namespace std;

class Triangle {
private:
    int width;  // 밑변
    int height; // 높이

public:
    // 매개변수가 있는 생성자: 초기화 리스트를 사용하여 멤버 변수 초기화
    Triangle(int w, int h) : width(w), height(h) {
        cout << "밑변 " << width << " 높이 " << height << "인 삼각형 생성" << endl;
    }

    // 기본 생성자: 배열 할당 시 초기값을 지정하지 않을 경우를 대비해 정의
    Triangle() : width(0), height(0) {}

    // 소멸자: 객체가 메모리에서 해제될 때(delete 호출 시) 자동으로 실행
    ~Triangle() {
        cout << "밑변 " << width << " 높이 " << height << "인 삼각형 소멸" << endl;
    }

    // 삼각형 면적 계산: 정수 연산 오차 방지를 위해 2.0(실수)으로 나눔
    double getArea() {
        return (double)width * height / 2.0;
    }
};

int main() {
    // 1. 객체 배열 동적 할당 및 초기화
    // new[]를 사용해 힙에 배열을 생성하고, 중괄호를 통해 각 원소의 생성자를 직접 호출
    Triangle* pArray = new Triangle[3]{
        Triangle(1, 1),
        Triangle(2, 2),
        Triangle(4, 4)
    };

    // 2. 루프를 돌며 각 배열 원소의 getArea() 함수 호출
    for (int i = 0; i < 3; i++) {
        cout << "삼각형의 면적은 " << pArray[i].getArea() << endl;
    }

    // 3. 동적 할당된 배열 해제
    // delete[]를 사용하면 각 원소의 소멸자가 생성 역순으로 호출됨
    delete[] pArray;

    return 0;
}
