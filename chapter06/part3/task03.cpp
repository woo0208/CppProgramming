#include <iostream>
using namespace std;

class Triangle {
private:
    static int numOfTriangles;

public:
    Triangle() {
        numOfTriangles++;
    }

    ~Triangle() {
        numOfTriangles--;
    }

    static int getNumofTriangle() {
        return numOfTriangles;
    }
};

// 정적 멤버 변수는 반드시 클래스 외부 전역 스코프에서 정의 및 초기화해야 함
int Triangle::numOfTriangles = 0;

int main() {
    // 동적 할당
    Triangle* tri1 = new Triangle[5];
    cout << "생성된 삼각형의 개수 :" << Triangle::getNumofTriangle() << endl; // 출력: 5

    // 동적 할당 해제
    delete[] tri1;

    // 정적 할당
    Triangle tri2[15];
    cout << "생성된 삼각형의 개수 :" << Triangle::getNumofTriangle() << endl; // 출력: 15

    return 0;
}
