// *******************************************
// 제목: 실습 과제3-3
// 날짜: 26년 3월 30일
// 작성자: 2603043 한정우
// *******************************************

#include <iostream>
#include <cstring> // 문자열 복사(strcpy, strncpy)를 위해 추가
using namespace std;

class Account {
private:
    char owner[30]; // 소유자 이름을 저장할 문자 배열 (넉넉하게 30바이트 할당)
    int balance;    // 잔액

public:
    // 생성자: 매개변수로 받은 문자열을 배열에 복사하고 잔액은 0으로 초기화
    Account(const char* name) {
        // 보안과 버퍼 오버플로우 방지를 위해 strncpy 사용
        strncpy_s(owner, sizeof(owner), name, _TRUNCATE);
        owner[sizeof(owner) - 1] = '\0'; // 마지막에 널 문자(\0) 삽입 보장

        balance = 0;
    }

    // 저금 (입금)
    void deposit(int money) {
        balance += money;
    }

    // 소유자 이름 반환 (출력을 위해 문자 배열의 포인터 반환)
    const char* getOwner() {
        return owner;
    }

    // 잔액 조회
    int inquiry() {
        return balance;
    }

    // 출금
    int withdraw(int money) {
        // 출금 요청 금액이 잔액보다 클 경우, 남은 잔액 모두 출금
        if (balance < money) {
            int ret = balance;
            balance = 0;
            return ret;
        }
        else {
            balance -= money;
            return money;
        }
    }
};

int main() {
    Account a("황수희"); // "황수희" 이름의 계좌 생성
    a.deposit(20000);   

    // a.getOwner()는 char* 를 반환하므로 정상적으로 문자열이 출력
    cout << a.getOwner() << " 잔액은 " << a.inquiry() << endl;

    int money = a.withdraw(15000); 
    cout << money << "원 출금, ";
    cout << a.getOwner() << " 잔액은 " << a.inquiry() << endl;

    money = a.withdraw(8000);
    cout << money << "원 출금, ";
    cout << a.getOwner() << " 잔액은 " << a.inquiry() << endl;

    return 0;
}
