// *******************************************
// 제목: 실습 과제4
// 날짜: 26년 5월 10일
// 작성자: 2603043 한정우
// *******************************************

#include <iostream>
using namespace std;

// 함수 선언: 입력값은 값(num)으로 받고, 결과 저장용 변수는 참조자(&)로 받음
void get_parts(double num, int& int_part, double& frac_part);

int main(void)
{
    double number;
    int integer_part;
    double fractional_part;
    
    cout << "실수를 입력하시오 : ";
    cin >> number;
    
    // 함수 호출: 화면 출력 없이 계산만 수행. integer_part와 fractional_part에 결과가 채워짐
    get_parts(number, integer_part, fractional_part);
    
    // 메인 함수에서 출력 수행
    cout << "정수부 : " << integer_part << endl;
    cout << "소수부 : " << fractional_part << endl;
    
    return 0;
}

// 함수 정의: 계산 및 참조 매개변수에 값 대입
void get_parts(double num, int& int_part, double& frac_part)
{
    int_part = static_cast<int>(num); // 명시적 형변환을 통해 소수점 이하를 버리고 정수부만 추출
    frac_part = num - int_part;       // 원본 실수에서 정수부를 빼서 소수부만 계산
}
