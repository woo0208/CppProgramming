#include <iostream>

using namespace std;

int main() {
	int x;
	cout << "정수 x를 입력 하시오: ";
	cin >> x;
	int y = (x * x) + (x * 2) - 5;	// y를 x에 값이 들어오기 전에 선언하면 오류가 발생한다 이 점을 유의하자
	cout << "x=" << x << "일때 y의 값은 " << y << "입니다." << endl;	// 항상 endl 을 사용해 버퍼를 초기화 하자
}			  