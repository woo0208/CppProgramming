// *******************************************
// 제목: 실습 과제4
// 날짜: 26년 4월 07일
// 작성자: 2603043 한정우
// *******************************************

#include <iostream>

using namespace std;

int main() {

	int n = 0;
	cout << "입력할 정수의 개수를 입력하세요: ";
	cin >> n; // 입력할 실수의 개수 결정
	
	cout << n << "개의 실수를 입력하시오.\n";
	
	// 1. n개의 실수(double)를 저장할 메모리 동적 할당
	double* num = new double[n];
	
	// 2. 동적 메모리 할당 성공 여부 확인
	if (!num) {
		cout << "메모리를 할당할 수 없습니다.";
		return -1;
	}

	double max = 0; // 최대값을 저장할 변수 초기화
	for (int i = 0; i < n; i++) {
		cin >> num[i]; // 실수 입력
		
		// 3. 현재 입력값이 기존 최대값(max)보다 크면 max 갱신
		if (num[i] > max) {
			max = num[i];
		}
	}

	cout << "최대값은 " << max << "입니다" << endl;

	// 4. 할당받은 배열 메모리 해제 (힙 메모리 반환)
	delete[] num;

	return 0;
}
