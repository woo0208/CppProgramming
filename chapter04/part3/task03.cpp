#include <iostream>
using namespace std;

class Circle {
    int radius;
public:
    Circle() { radius = 1; }
    Circle(int r) { radius = r; }
    double getArea() { return 3.14 * radius * radius; }
};

int main() {
    Circle* pArray = new Circle[3];

    for (int i = 0; i < 3; i++) {
        cout << pArray[i].getArea() << '\n';
    }

    delete[] pArray;

    return 0;
}


// 배열 인덱스([]) 사용(권장) : 포인터 변수 자체를 이동시키는 대신, 인덱스를 사용하여 각 요소에 접근합니다.

//  임시 포인터 사용 : 포인터 연산이 반드시 필요하다면, 원본 주소를 보관할 별도의 포인터를 할당하여 사용합니다.
