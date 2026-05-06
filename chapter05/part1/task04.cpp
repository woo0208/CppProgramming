// *******************************************
// 제목: 실습 과제4
// 날짜: 26년 5월 06일
// 작성자: 2603043 한정우
// *******************************************

#include <iostream>
#include <string>
using namespace std;

// 함수 선언 추가: 원본 변수의 값을 변경하기 위해 참조자(&)를 매개변수로 사용합니다.
void SwapString(string& a, string& b);

int main() {
    string s1("hello");
    string s2("world");

    cout << "호출전 s1:" << s1 << " s2:" << s2 << endl;

    SwapString(s1, s2);

    cout << "호출후 s1:" << s1 << " s2:" << s2 << endl;

    return 0;
}

// 함수 정의 추가
void SwapString(string& a, string& b) {
    string temp = a; // 임시 변수에 a의 값을 저장
    a = b;           // a에 b의 값을 대입
    b = temp;        // b에 임시 변수에 저장해둔 a의 원래 값을 대입
}
