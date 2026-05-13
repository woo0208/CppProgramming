#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;

class Person {
    char* name;
    int id;

public:
    Person(int id, const char* name);            // 생성자
    Person(const Person& person);               // 복사 생성자
    ~Person();                                  // 소멸자

    void changeName(const char* name);

    void show() {
        cout << id << ',' << name << endl;
    }
};

// 생성자
Person::Person(int id, const char* name) {
    this->id = id;

    int len = strlen(name);
    this->name = new char[len + 1];   // 메모리 할당
    strcpy(this->name, name);
}

// 복사 생성자 (깊은 복사)
Person::Person(const Person& person) {
    this->id = person.id;

    int len = strlen(person.name);
    this->name = new char[len + 1];   // 새 메모리 할당
    strcpy(this->name, person.name);

    cout << "복사 생성자 실행. 원본 객체의 이름 "
        << this->name << endl;
}

// 소멸자
Person::~Person() {
    if (name)
        delete[] name;
}

// 이름 변경
void Person::changeName(const char* name) {
    if (strlen(name) > strlen(this->name))
        return;

    strcpy(this->name, name);
}

int main() {
    Person father(1, "Kitae");      // 생성자 호출
    Person daughter(father);       // 복사 생성자 호출

    cout << "daughter 객체 생성 직후 ----" << endl;

    father.show();
    daughter.show();

    daughter.changeName("Grace");

    cout << "daughter 이름을 Grace로 변경한 후 ----" << endl;

    father.show();
    daughter.show();

    return 0;
}
