#include <iostream>

using namespace std;
int main() {

	for (int i = 0; i < 4; i++) {	// 행(Row) 반복 (4번)
		for (int j = 0; j <= i; j++) {	// 열(Column)을 제어 (j <= i 조건하여 별 갯수 1개씩 증가)
			cout << "*";
		}
		cout << "\n";	// 한 행이 끝나면 줄바꿈
	}
	return 0;
}