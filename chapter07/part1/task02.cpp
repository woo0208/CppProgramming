#include <iostream>
using namespace std;

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

    // show 멤버 함수
    void show() {
        cout << real;

        if (img >= 0)
            cout << "+" << img << "j";
        else
            cout << img << "j";
    }

    // 전역 함수가 private 멤버에 접근할 수 있도록 friend 선언
    friend Complex ComplexAdd(Complex a, Complex b);
};

// 전역 함수
Complex ComplexAdd(Complex a, Complex b) {
    Complex temp;

    temp.real = a.real + b.real;
    temp.img = a.img + b.img;

    return temp;
}

int main() {
    Complex x(2, 3), y(-5, 10), sum;

    sum = ComplexAdd(x, y);

    cout << "두 복소수의 합은 ";
    sum.show();

    return 0;
}
