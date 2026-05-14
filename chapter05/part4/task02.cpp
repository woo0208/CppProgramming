// **********************************************
//  제   목  :  실습과제2
//  날   짜  :  2026년 5월 13일
//  작성자  :  2603043 한정우
// **********************************************

#include <iostream>
#include <string> // string 클래스 사용을 위해 추가
using namespace std;

class Person { // Person 클래스 선언
    string name; // char* name에서 string으로 변경
    int id;
public:
    Person(int id, string name); // 생성자 매개변수 변경
    void changeName(string name);
    void show() { cout << id << ',' << name << endl; }
};

// 생성자 구현
Person::Person(int id, string name) { 
    this->id = id;
    this->name = name; // 동적 할당이나 strcpy 없이 단순 대입으로 처리
}

// 이름 변경 함수 구현
void Person::changeName(string name) {
    this->name = name;
}

int main() {
    Person father(1, "Kitae"); // father 객체 생성자 호출
    
    // 컴파일러가 자동 생성한 디폴트 복사 생성자가 호출됨.
    // string 멤버 변수의 복사 대입이 이루어지며, string 내부적으로 깊은 복사가 안전하게 수행됨.
    Person daughter(father); 
    
    cout << "daughter 객체 생성 직후 ----" << endl;
    father.show(); // father 객체 출력
    daughter.show(); // daughter 객체 출력
    
    daughter.changeName("Grace"); // daughter의 이름을 "Grace"로 변경
    cout << "daughter 이름을 Grace로 변경한 후 ----" << endl;
    father.show(); // father 객체 출력
    daughter.show(); // daughter 객체 출력
    
    return 0; 
}
