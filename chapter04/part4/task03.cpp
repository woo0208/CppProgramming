// *******************************************
// 제목: 실습 과제3
// 날짜: 26년 4월 16일
// 작성자: 2603043 한정우
// *******************************************

#include <iostream>
#include <string>

using namespace std;


int main() {
	string st;
	cout << "문자열 입력: ";
	getline(cin, st);
	int count = 0;
	for (int i = 0; i < st.length(); i++) {
		if (st[i] == 'a') {
			count++;
		}
	}

	cout << "문자 a는 " << count << "개 있습니다." << endl;
	return 0;
}
