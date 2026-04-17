#include <iostream>
using namespace std;

class Container {
    int* p;        // 정수 배열에 대한 포인터 (Heap 영역 할당)
    int size;      // 정수 배열의 크기
public:
    Container(int size);  // 생성자
    ~Container();         // 소멸자
    void read();          // 정수 입력 함수
    void write();         // 배열 출력 함수
    void rotate();        // 우측 회전 함수
    double avg();         // 평균 계산 함수
};

// 생성자: 요청된 크기만큼 정수 배열을 동적 할당함
Container::Container(int size) {
    this->size = size;
    p = new int[size];
}

// 소멸자: 할당된 메모리를 해제하여 메모리 누수(Memory Leak)를 방지함
Container::~Container() {
    if (p != nullptr) {
        delete[] p;
    }
}

// 키보드로부터 정수를 읽어 배열의 각 요소에 저장함
void Container::read() {
    cout << "정수 " << size << "개 입력>>";
    for (int i = 0; i < size; i++) {
        cin >> p[i];
    }
}

// 현재 배열 내 모든 원소를 순차적으로 출력함
void Container::write() {
    for (int i = 0; i < size; i++) {
        cout << p[i] << " ";
    }
    cout << endl;
}

// 배열의 원소들을 우측으로 1칸씩 회전함 (마지막 원소는 첫 번째 인덱스로 이동)
void Container::rotate() {
    int last = p[size - 1]; // 마지막 원소를 임시 변수에 보관
    for (int i = size - 1; i > 0; i--) {
        p[i] = p[i - 1];    // 인덱스 n을 n+1로 시프트
    }
    p[0] = last;            // 보관했던 값을 첫 번째 원소에 대입
}

// 배열 원소들의 총합을 구한 뒤 산술 평균을 계산하여 반환함
double Container::avg() {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += p[i];
    }
    return sum / size;
}

int main() {
    Container c(10); // 정수 10개를 저장할 객체 c 생성
    c.read();        // 키보드에서 정수 배열 읽기
    c.write();       // 정수 배열 출력
    c.rotate();      // 정수 배열을 오른쪽으로 회전
    c.write();       // 정수 배열 출력
    cout << "평균은 " << c.avg() << endl;
    
    return 0;
}
