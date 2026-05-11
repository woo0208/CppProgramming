// *******************************************
// 제목: 실습 과제3
// 날짜: 26년 5월 11일
// 작성자: 2603043 한정우
// *******************************************

#include <iostream>
#include <string>

using namespace std;


void SwapString(string& s1, string& s2);

int main() {
	string s1("hello");
	string s2("world");
	cout << "교환전 문자열 " << s1 << s2 << endl;
	SwapString(s1, s2);
	cout << "교환후 문자열 " << s1 << s2 << endl;
	return 0;
}

void SwapString(string& s1, string& s2) {
	string temp;
	temp = s1;
	s1 = s2;
	s2 = temp;
}
