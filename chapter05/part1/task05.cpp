// *******************************************
// 제목: 실습 과제5
// 날짜: 26년 5월 06일
// 작성자: 2603043 한정우
// *******************************************

#include <iostream>
#include <string>
using namespace std;

string findLastString(string arr[], int size);

int main() {
    string names[5];
    for (int i = 0; i < 5; i++) {
        cout << "이름 >> ";
        getline(cin, names[i], '\n');
    }

    // 함수 호출: names 배열의 시작 주소와 크기(5)를 인자로 전달합니다.
    string res = findLastString(names, 5);

    cout << "사전에서 가장 뒤에 나오는 문자열은 " << res << endl;

    return 0;
}

// 함수 정의 추가
string findLastString(string arr[], int size) {
    // 첫 번째 원소를 초기 최댓값으로 설정
    string last = arr[0];

    for (int i = 1; i < size; i++) {
        // string 클래스에 오버로딩된 '>' 연산자를 통해 사전순 비교
        if (arr[i] > last) {
            last = arr[i];
        }
    }

    // 가장 뒤에 나오는 문자열 객체를 값에 의한 반환으로 전달
    return last;
}
