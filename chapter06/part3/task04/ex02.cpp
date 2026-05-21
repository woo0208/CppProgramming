#include <iostream>
using namespace std;

// 1. 매개변수가 없는 경우: 2x2 크기, '*' 문자 출력
void printMatrix() {
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << '*';
        }
        cout << endl;
    }
}

// 2. 행, 열, 문자를 모두 지정하는 경우
void printMatrix(int r, int c, char ch) {
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            cout << ch;
        }
        cout << endl;
    }
}

// 3. 행, 열만 지정하는 경우: 문자는 '*'로 고정
void printMatrix(int r, int c) {
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            cout << '*';
        }
        cout << endl;
    }
}

int main() {
    printMatrix();
    printMatrix(2, 5, 'a');
    printMatrix(1, 10);
    return 0;
}
