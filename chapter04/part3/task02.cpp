// *******************************************
// 제목: 실습 과제2
// 날짜: 26년 4월 09일
// 작성자: 2603043 한정우
// *******************************************

#include <iostream>
using namespace std;

class Circle {
    int radius;
public:
    Circle(int r) { radius = r; }
    double getArea() { return 3.14 * radius * radius; }
};

int main() {
    int radius;
    while (true) {
        cout << "반지름 입력(음수이면 종료)>> ";
        cin >> radius;

        if (radius < 0) break;

        // 1. 객체를 힙 영역에 동적 할당
        Circle* p = new Circle(radius);

        // 2. 객체 멤버 함수 호출 및 결과 출력
        cout << "원의 면적:" << p->getArea() << endl;

        // 3. [해결 방법] 사용이 끝난 객체 메모리 해제
        // 이 코드가 추가되어야 메모리 누수를 방지할 수 있습니다.
        delete p;
    }
    return 0;
}
