// **********************************************
//  제   목  :  chapter 06 실습과제2
//  날   짜  :  2026년 5월 18일
//  작성자  :  2603043 한정우
// **********************************************
#include <iostream>
#include <string>

using namespace std;

// 함수 오버로딩: 동일한 이름의 big 함수를 매개변수 타입별로 정의

// 정수형(int) 인자 중 큰 값을 반환
int big(int a, int b) {
	if (a > b) {
		return a;
	}
	else {
		return b;
	}
}

// 실수형(double) 인자 중 큰 값을 반환
double big(double a, double b) {
	if (a > b) {
		return a;
	}
	else {
		return b;
	}
}

// 문자열(string) 인자 중 사전 순으로 뒤에 나오는 값을 반환
string big(string a, string b) {
	if (a > b) {
		return a;
	}
	else {
		return b;
	}
}

int main() {
	// 정수형 big 호출
	int x = big(10, 20);
	cout << "큰 정수값은 " << x << endl;

	// 실수형 big 호출
	double y = big(3.14, 1.05);
	cout << "큰 실수값은 " << y << endl;

	// 문자열형 big 호출
	string z = big("hello", "world");
	cout << "사전에서 뒤에 나오는 단어는 " << z << endl;

	return 0;
}
