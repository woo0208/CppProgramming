// *******************************************
// 제목: 실습 과제2
// 날짜: 26년 5월 11일
// 작성자: 2603043 한정우
// *******************************************

#include <iostream>
#include <string>

using namespace std;

void Uppercase(string &s) {
	for (int i = 0; i < s.length(); i++) {
		s[i] = toupper(s[i]);
	}
}

int main() {
	string s1("hello");
	cout << "변환전 문자열" << s1 << endl;
	Uppercase(s1);
	cout << "변환후 문자열" << s1 << endl;
	return 0;
}
