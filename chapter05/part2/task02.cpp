#include <iostream>
using namespace std;

/*
[작동하지 않은 이유]
'값에 의한 호출(Call by Value)' 방식이 적용되어, 원본 변수(number)의 복사본이 전달되었기 때문입니다. 함수 내부에서 값을 변경해도 독립적인 메모리에 할당된 복사본만 수정될 뿐, 원본 데이터에는 반영되지 않습니다.

[수정 방법]
'참조에 의한 호출(Call by Reference)' 방식으로 변경해야 합니다. 함수의 매개변수 자료형에 참조자(&)를 추가(int& value)하여, 복사본을 생성하지 않고 원본 변수에 직접 접근하여 값을 수정하도록 코드를 변경했습니다.
*/

void add2(int& value); 

int main(void)
{
    int number;
    cout << "정수를 입력하세요 : ";
    cin >> number;
    
    add2(number); 
    
    cout << "2만큼 증가한 값 : " << number << endl;
    return 0;
}

void add2(int& value) 
{
    value += 2; 
}
