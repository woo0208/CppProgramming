#include <iostream>

using namespace std;

int main() {

	int n = 0;
	cout << "입력할 정수의 개수를 입력하세요: ";
	cin >> n;
	cout << n << "개의 실수를 입력하시오.\n";
	double* num = new double[n];
	if (!num) {
	cout << "메모리를 할당할 수 없습니다.";
	return -1;
	}
	double max = 0;
	for (int i = 0; i < n; i++) {
		cin >> num[i];
		if (num[i] > max) {
			max = num[i];
		}
	}

	cout << "최대값은 " << max << "입니다" << endl;

	return 0;
}
