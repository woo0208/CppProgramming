#include <iostream>
using namespace std;

class Collector {
    int *p; // 데이터를 저장하는 동적 배열
    int size = 0; // 데이터 개수
public:
    Collector(int size, int values[]); // 생성자
    Collector(const Collector& src); // 복사 생성자 (문항 3)
    ~Collector(); // 소멸자 (문항 2)
    void show(); // 데이터 개수와 배열 원소를 화면에 출력
    int getSize() { return size; }
    int get(int index) { return p[index]; }
};

// (1) 생성자 구현
Collector::Collector(int size, int values[]) {
    this->size = size;
    p = new int[size]; // size만큼 동적 메모리 할당
    for (int i = 0; i < size; i++) {
        p[i] = values[i]; // 배열의 값 복사
    }
}

// (3) 복사 생성자 구현 (깊은 복사)
Collector::Collector(const Collector& src) {
    this->size = src.size;
    this->p = new int[src.size]; // 새로운 메모리를 동적 할당하여 깊은 복사 수행
    for (int i = 0; i < src.size; i++) {
        this->p[i] = src.p[i]; // 원본 객체의 데이터를 새 메모리에 복사
    }
}

// (2) 소멸자 구현
Collector::~Collector() {
    delete[] p; // 동적 할당받은 메모리 반환
}

// (1) show() 함수 구현
void Collector::show() {
    cout << "데이터 수 " << size << ": ";
    for (int i = 0; i < size; i++) {
        cout << p[i] << " ";
    }
    cout << endl;
}

// (1) 외부 함수 calcAvg() 구현
// 매개변수로 Collector 객체를 값으로 전달받음 (이때 복사 생성자가 호출됨)
double calcAvg(Collector c) { 
    double sum = 0;
    for (int i = 0; i < c.getSize(); i++) {
        sum += c.get(i);
    }
    return sum / c.getSize();
}

int main() {
    int temp[] = { 69, 70, 71, 72, 74 };
    Collector weight(4, temp); // weight 객체 생성
    
    // calcAvg 함수 호출 시 객체 weight가 매개변수 c로 전달되면서 복사 생성자 호출
    double avg = calcAvg(weight); 
    
    weight.show();
    cout << "평균은 " << avg << endl;

    return 0;
}
