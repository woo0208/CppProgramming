#include <iostream>

using namespace std;

class Picture {
    int width, height;
    char name[32];          
public:
    Picture();              
    Picture(int x, int y, const char name[]); 
    int getWidth();         
    int getHeight();        
    const char* getPlace(); 
};

// 기본 생성자 정의: 멤버 초기화 리스트(Member Initializer List)를 사용하여 기본값 설정
Picture::Picture() : width(5), height(7) {
    strcpy_s(name, sizeof(name), "모름");
};

// 매개변수를 갖는 생성자 정의: 전달받은 인수로 객체 상태 초기화
Picture::Picture(int x, int y, const char n[]) : width(x), height(y) {
    strcpy_s(name, sizeof(name), n);
};

// 가로 길이를 반환하는 멤버 함수 구현
int Picture::getWidth() {
    return width;
}

// 세로 길이를 반환하는 멤버 함수 구현
int Picture::getHeight() {
    return height;
}

// 이름(명칭)을 반환하는 멤버 함수 구현
const char* Picture::getPlace() {
    return name;
}

int main() {
    Picture pic;                        
    Picture mt(10, 14, "한라산");        

    
    cout << pic.getWidth() << "x" << pic.getHeight() << " " << pic.getPlace() << endl;
    cout << mt.getWidth() << "x" << mt.getHeight() << " " << mt.getPlace() << endl;

    return 0;
}
