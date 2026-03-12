// *********************************
// 제 목  : 실습과제3
// 날 짜  : 2026년 3월 12일
// 작성자 : 2603043 한정우
// *********************************

#include <iostream>

using namespace std;

int main() {
	int gradeNumber;
	char name[30] = " ";
	char address[100] = " ";
	cout << "학번을 입력하시오: ";
	cin >> gradeNumber;
	cout << "이름을 입력하시오: ";
	cin >> name;

	// 핵심: 앞선 cin >> 에서 남겨둔 개행 문자(\n)를 버퍼에서 제거합니다.
	// 괄호를 써서 함수를 호출해야 합니다.
	cin.ignore();

	cout << "주소를 입력하시오: ";
	// 공백을 포함하여 읽기 위해 cin.getline()을 사용합니다.
	cin.getline(address, 100);

	cout << "1.학번:" << gradeNumber << "\n";
	cout << "2.이름:" << name << "\n";
	cout << "3.주소:" << address << endl;

	return 0;

}
