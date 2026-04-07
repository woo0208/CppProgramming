#include <iostream>

using namespace std;

int main() {

	int n = 0;
	cout << "입력할 정수의 개수를 입력하세요: ";
	cin >> n;
	cout << n << "개의 정수를 입력하시오.\n";
	int* num = new int[n];
	if (!num) {
	cout << "메모리를 할당할 수 없습니다.";
	return -1;
	}
	int total = 0;
	for (int i = 0; i < n; i++) {
		cin >> num[i];
		total += num[i];
	}

	int avg = total / n;

	cout << "평균값은 " << avg << "입니다" << endl;

	delete[] num;

	return 0;
}
