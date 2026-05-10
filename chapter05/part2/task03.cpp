#include <iostream>
using namespace std;

// 함수 선언: 매개변수 타입에 참조자(&)를 사용하여 '참조에 의한 호출(Call by Reference)' 지정
void swap(int& a, int& b);

int main(void)
{
    int x, y;
    
    cout << "정수x를 입력 하시오: ";
    cin >> x;
    
    cout << "정수y를 입력 하시오: ";
    cin >> y;
    
    cout << "swap함수 호출 전 x=" << x << ", y=" << y << endl;
    
    // 함수 호출: 인자로 변수명만 전달하지만, 참조를 통해 원본 변수(x, y)에 직접 접근하게 됨
    swap(x, y);
    
    cout << "swap함수 호출 후 x=" << x << ", y=" << y << endl;
    
    return 0;
}

// 함수 정의: 참조 매개변수 a와 b는 각각 main 함수의 x와 y의 별칭(Alias)으로 작동함
void swap(int& a, int& b)
{
    int temp = a; // 임시 변수(temp)를 생성하여 값 교환 알고리즘 수행
    a = b;        // a(즉, x)에 b(즉, y)의 값을 대입
    b = temp;     // b(즉, y)에 미리 저장해둔 a의 원래 값을 대입
}
