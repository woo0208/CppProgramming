#include <iostream>
using namespace std;

class Complex;

// ComplexManager 클래스 선언
class ComplexManager {
public:
    Complex ComplexAdd(Complex a, Complex b);
};

// Complex 클래스 정의
class Complex {
private:
    int real;
    int img;

public:
    // 생성자
    Complex(int r = 0, int i = 0) {
        real = r;
        img = i;

        cout << "복소수 ";
        show();
        cout << " 생성" << endl;
    }

    // show 멤버함수
    void show() {
        cout << real;

        if (img >= 0)
            cout << "+" << img << "j";
        else
            cout << img << "j";
    }

    // ComplexManager가 private 멤버에 접근할 수 있도록 허용
    friend class ComplexManager;
};

// ComplexManager의 멤버함수 정의
Complex ComplexManager::ComplexAdd(Complex a, Complex b) {
    Complex temp;

    temp.real = a.real + b.real;
    temp.img = a.img + b.img;

    return temp;
}

int main() {
    Complex x(2, 3), y(-5, 10), sum;
    ComplexManager man;

    sum = man.ComplexAdd(x, y);

    cout << "두 복소수의 합은 ";
    sum.show();

    return 0;
}
