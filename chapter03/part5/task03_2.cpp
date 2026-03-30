#include <iostream>

using namespace std;

// Coffee 클래스 정의
class Coffee {
    int coffee, sugar, milk, water; 
public:
    Coffee(); 
    Coffee(int c, int s, int m, int w); 
    void show(); 
};

// 기본 생성자 정의: 멤버 초기화 리스트를 사용하여 기본값 할당
Coffee::Coffee() : coffee(10), sugar(0), milk(0), water(0) {};

// 매개변수 생성자 정의: 인스턴스 생성 시 전달받은 인수로 속성 초기화
Coffee::Coffee(int c, int s, int m, int w) : coffee(c), sugar(s), milk(m), water(w) {};

// show 함수 구현: 각 성분 수치만큼 반복문(for)을 통해 '*' 기호 출력
void Coffee::show() {
    cout << "coffee ";
    for (int i = 0; i < coffee; i++) {
        cout << "*";
    }
    cout << "\n";

    cout << "sugar ";
    for (int i = 0; i < sugar; i++) {
        cout << "*";
    }
    cout << "\n";

    cout << "milk ";
    for (int i = 0; i < milk; i++) {
        cout << "*";
    }
    cout << "\n";

    cout << "water ";
    for (int i = 0; i < water; i++) {
        cout << "*";
    }
    cout << endl;
}

int main() {
    Coffee espresso;                     // 기본 생성자 호출
    Coffee americano(5, 0, 0, 10);       // 매개변수 생성자 호출
    Coffee cappucchino(5, 1, 5, 2);
    Coffee mySweet(3, 7, 5, 5);

    espresso.show();
    cout << endl;
    mySweet.show();

    return 0;
}
