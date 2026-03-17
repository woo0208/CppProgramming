// *******************************************
// 제목: 실습 과제4
// 날짜: 26년 3월 17일
// 작성자: 2603043 한정우
// *******************************************

#include <iostream>

using namespace std;

class Rectangle {
public:
	int x, y;							  // 변수 선언
	int width;
	int height;

	Rectangle() {						 // 생성자를 통한 초기값 할당
		x = 1;
		y = 2;
		width = 3;
		height = 4;
	}
	double getArea();
	double getCir();
	void printRightBottom();
	
};

double Rectangle::getArea() {
	return width * height;																  // 면적 공식
 }

double Rectangle::getCir() {
	return (width + height) * 2;														  // 둘레 공식
}

void Rectangle::printRightBottom() {
	int rightX = x + width;
	int rightY = y - height;
	cout << "사각형의 우측하단 좌표는 (" << rightX << "," << rightY << ")" << endl;		  // 맨 마지막에 사용할 출력함수 이므로 endl 사용
}

int main() {
	Rectangle re;
	cout << "사각형의 면적은 " << re.getArea() << "\n"; 			 // 사람 입장에선 endl을 쓰나  "\n" 쓰나 똑같지만 컴퓨터 입장에선 다름
	cout << "사각형의 둘레길이는 " << re.getCir() << "\n";			 // endl 은 운영체제의 리소스를 낭비함 => 만약 반복문에서 돌리면 매우 큰 자원 낭비 
	re.printRightBottom();											 // 따라서 마지막 출력함수에 endl 을 넣어 메모리 자원 낭비 방지


	return 0;
}
