#include <iostream>

using namespace std;

int main() {
	char text[100] = "";
	cout << "빈칸 없이 문자열을 입력하세요>>";
	cin >> text;
	for (int i = 0; i < sizeof(text) / sizeof(text[0]); i++) {	 // 추후 배열 길이 변경시 반복문 코드 수정없게 하기 위해 수식 사용
		if (i == (sizeof(text) / sizeof(text[0])) - 1) {		 // 만약 반복문의 마지막 즉 입력한 배열의 마지막일 경우 endl 로 버퍼 초기화
			cout << text[i] << endl;
			break;
		}
		cout << text[i] << " ";									 // 한칸씩 분리하는 것이 목적이므로 공백 추가
	}
	return 0;
}