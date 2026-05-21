#include <iostream>
using namespace std;

class Vector {
    int* mem;
    int size;

public:
    // 디폴트 매개변수를 활용한 단일 생성자
    // Vector x; 와 Vector y(10, 8); 을 모두 이 하나의 생성자로 처리
    Vector(int s = 5, int v = 0) {
        size = s;
        mem = new int[size];
        for (int i = 0; i < size; ++i) {
            mem[i] = v;
        }
    }

    ~Vector() {
        delete[] mem;
    }

    // 디폴트 매개변수를 활용한 단일 show 멤버 함수
    // -1을 디폴트 값으로 지정하여, 인자가 없을 시 limit를 전체 size로 변환
    void show(int limit = -1) {
        if (limit == -1 || limit > size) {
            limit = size; // 출력 개수가 생략되거나 배열 크기를 초과하면 전체 크기로 지정
        }
        
        for (int i = 0; i < limit; ++i) {
            cout << mem[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Vector x; 
    Vector y(10, 8); 
    
    x.show(); 
    y.show(); 
    y.show(3); 
    
    return 0;
}
