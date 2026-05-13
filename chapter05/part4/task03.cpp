// **********************************************
//  제   목  :  실습과제3
//  날   짜  :  2026년 5월 13일
//  작성자  :  2603043 한정우
// **********************************************

#include <iostream>
using namespace std;

class MyStack {
    int* p; // 동적 배열 포인터
    int size; // 배열 크기
    int tos; // 배열 인덱스

public:
    MyStack();
    MyStack(int size);
    MyStack(const MyStack& src); // 복사 생성자
    ~MyStack();

    bool push(int n);
    bool pop(int& n);
};

// 기본 생성자
MyStack::MyStack() {
    size = 10;
    tos = 0;
    p = new int[size];
}

// 생성자
MyStack::MyStack(int size) {
    this->size = size;
    this->tos = 0;
    p = new int[size];
}

// 복사 생성자 (깊은 복사)
MyStack::MyStack(const MyStack& src) {
    size = src.size;
    tos = src.tos;

    p = new int[size];

    for (int i = 0; i < tos; i++) {
        p[i] = src.p[i];
    }
}

MyStack::~MyStack() {
    delete[] p;
}

bool MyStack::push(int n) {
    if (tos >= size) {
        cout << "범위 초과" << endl;
        return false;
    }
    p[tos] = n;
    tos++;
    return true;
}

bool MyStack::pop(int& n) {
    if (tos <= 0) {
        cout << "스택 초과" << endl;
        return false;
    }
    tos--;
    n = p[tos];
    return true;
}


int main() {
    MyStack a(10);
    a.push(10);
    a.push(20);

    MyStack b = a;

    b.push(30);

    int n;
    a.pop(n);
    cout << "스택 a에서 팝한 값 " << n << endl;
    b.pop(n);
    cout << "스택 b에서 팝한 값 " << n << endl;

    return 0;
}
