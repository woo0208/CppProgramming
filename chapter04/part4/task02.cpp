// *******************************************
// 제목: 실습 과제2
// 날짜: 26년 4월 16일
// 작성자: 2603043 한정우
// *******************************************

#include <iostream>
#include <string>

using namespace std;


int main() {
	string word;
	string plus;
	int count = 1;
	while (true) {
		cout << "문자열 입력: ";
		getline(cin, plus);
		if (plus == "quit") {
			break;
		}
		word.append("<");
		word.append(to_string(count));
		word.append(">");
		word.append(plus);
		count++;
		plus = " ";
		cout << "이어진 문자열: " << word << endl;
	}
}
