#include <iostream>
#include <cmath> // round 함수 사용을 위해 포함

using namespace std;

// 구의 속성과 기능을 정의하는 클래스
class Sphere {
    int radius;
public:
    Sphere() { radius = 1; } // 기본 생성자: 반지름을 1로 초기화
    ~Sphere() {};
    void setRadius(int r) { radius = r; } // 반지름 설정 함수 (Setter)

    // 구의 부피 계산: (4/3) * pi * r^3 및 소수점 둘째 자리 반올림
    double getVolume() {
        double v = (4.0 / 3.0) * 3.14 * radius * radius * radius;
        return round(v * 100) / 100;
    }
};

// Sphere 객체들을 관리하고 제어하는 클래스
class SphereManager {
    Sphere* pArray = NULL; // Sphere 객체 배열을 가리킬 포인터
    int size = 0;          // 생성할 구의 개수
    void input();
    void decide();
public:
    SphereManager();
    ~SphereManager();
    void run();
};

// 생성자: 사용자로부터 개수를 입력받아 Sphere 객체 배열을 동적 할당함
SphereManager::SphereManager() {
    cout << "생성하고자 하는 구의 개수: ";
    cin >> size;
    if (size <= 0) return;
    pArray = new Sphere[size]; // Heap 영역에 Sphere 객체 배열 생성
}

// 소멸자: 동적 할당된 배열 메모리를 해제하여 메모리 누수 방지
SphereManager::~SphereManager() {
    if (pArray != NULL) delete[] pArray; // delete[]를 사용하여 배열 전체 해제
}

// 사용자로부터 각 구의 반지름을 입력받아 배열 요소에 저장
void SphereManager::input() {
    int radius;
    for (int i = 0; i < size; i++) {
        cout << "구" << i + 1 << "의 반지름: ";
        cin >> radius;
        pArray[i].setRadius(radius); // 각 객체의 데이터 설정
    }
}

// 계산된 각 구의 부피를 화면에 출력
void SphereManager::decide() {
    for (int i = 0; i < size; i++) {
        cout << "구" << i + 1 << "의 부피: " << pArray[i].getVolume() << endl;
    }
}

// 전체적인 실행 흐름(입력 -> 결과 출력)을 관리
void SphereManager::run() {
    input();
    decide();
}

int main() {
    // SphereManager 객체를 힙에 동적 할당
    SphereManager* pMan = new SphereManager();

    pMan->run(); // 프로그램 실행

    delete pMan; // 객체 해제 (이때 내부 pArray도 소멸자에서 해제됨)

    return 0;
}
