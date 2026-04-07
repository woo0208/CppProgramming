#include <iostream>
using namespace std;

int main() {
	int n = 0;
	cout << "저장할 문자열의 크기를 입력하세요:";
	cin >> n;

	char* word = new char[n + 1];
	if (!word) {
		cout << "메모리를 할당할 수 없습니다.";
		return -1;
	}

	cin.ignore();

	cout << "문자열을 입력하시오:";

	// 마지막에 널 문자를 넣기 위해 i를 for문 밖에서 선언
	int i;
	for (i = 0; i < n; i++) {
		char ch;
		cin.get(ch);

		// 사용자가 엔터(줄바꿈)를 치면 문자열 입력이 끝난 것이므로 반복 중지
		if (ch == '\n') break;

		word[i] = ch;
	}

	// 문자열의 끝을 알리는 널 문자('\0')를 반드시 수동으로 삽입
	word[i] = '\0';

	cout << "입력한 문자열은 " << word << "입니다." << endl;

	// 동적 메모리 반환
	delete[] word;

	return 0;
}
