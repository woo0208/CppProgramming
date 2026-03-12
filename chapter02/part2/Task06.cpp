// *********************************
// 제 목  : 실습과제6
// 날 짜  : 2026년 3월 12일
// 작성자 : 2603043 한정우
// *********************************

#include <iostream>
#include <cstring> // strcmp 함수를 사용하기 위해 포함

using namespace std;

int main() {
    char buf[1000]; // 넉넉한 크기의 입력 버퍼 선언

    while (true) {
        cout << "영문 텍스트를 입력하세요(빈칸 포함 가능)>> ";

        // 1. 공백을 포함한 한 라인 전체를 입력받음
        cin.getline(buf, 1000);

        // 2. 종료 조건 확인 ("exit" 입력 시 루프 탈출)
        if (strcmp(buf, "exit") == 0) {  // 문자열 비교함수 사용
            break;
        }

        int count = 0;
        bool inWord = false; // 현재 단어 내부에 있는지 확인하는 상태 변수

        // 3. 단어 개수 세기 (배열의 끝 '\0'을 만날 때까지 반복)
        for (int i = 0; buf[i] != '\0'; i++) {
            if (buf[i] != ' ') { // 현재 문자가 공백이 아님
                if (!inWord) {   // 이전까지 단어 밖이었다면 새로운 단어 시작
                    count++;
                    inWord = true;
                }
            }
            else {             // 현재 문자가 공백임
                inWord = false;  // 단어 밖으로 나갔음을 표시
            }
        }

        cout << "단어의 개수는 " << count << "개이다.\n";
    }

    return 0;

}
