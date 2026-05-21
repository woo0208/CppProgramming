#include <iostream>
using namespace std;

class Vector {
    int* mem; // 생성자에서 배열 할당. 할당받은 배열의 주소 저장
    int size; // 생성자에서 할당받은 배열의 크기

public:
    // 매개변수가 없는 기본 생성자 (크기 5, 0으로 초기화)
    Vector() {
        size = 5;
        mem = new int[size];
        for (int i = 0; i < size; ++i) mem[i] = 0;
    }

    // 매개변수가 2개인 생성자 (지정된 크기와 값으로 할당 및 초기화)
    Vector(int s, int v) {
        size = s;
        mem = new int[size];
        for (int i = 0; i < size; ++i) mem[i] = v;
    }

    // 소멸자: 동적 할당된 메모리 반환
    ~Vector() {
        delete[] mem;
    }

    // 모든 원소를 출력하는 함수
    void show() {
        for (int i = 0; i < size; ++i) {
            cout << mem[i] << " ";
        }
        cout << endl;
    }

    // 앞의 지정된 개수만큼만 출력하는 함수
    void show(int count) {
        for (int i = 0; i < count; ++i) {
            cout << mem[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Vector x;
    Vector y(10, 8);

    x.show();
    y.show();
    y.show(3);

    return 0;
}
