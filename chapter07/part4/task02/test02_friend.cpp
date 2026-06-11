#include <iostream>

using namespace std;

class Coffee {
    int water, espresso, sugar, cream;

public:
    Coffee(int water = 1, int coffee = 1, int sugar = 0, int cream = 0) {
        this->water = water;
        this->espresso = coffee;
        this->sugar = sugar;
        this->cream = cream;
    }

    void show() {
        cout << "물 " << water << ", 커피 " << espresso;
        cout << ", 설탕 " << sugar << ", 크림 " << cream << endl;
    }

    Coffee& operator+=(const Coffee& a) {
        water += a.water;
        espresso += a.espresso;
        sugar += a.sugar;
        cream += a.cream;
        return *this;
    }

    Coffee& operator+=(int a) {
        espresso += a;
        return *this;
    }

    // friend 함수 선언
    friend Coffee& operator++(Coffee& a);       // 전위 ++
    friend Coffee operator++(Coffee& a, int);   // 후위 ++
};

// 전위 증가: ++black
Coffee& operator++(Coffee& a) {
    a.espresso++;
    return a;
}

// 후위 증가: black++
Coffee operator++(Coffee& a, int) {
    Coffee temp = a;
    a.espresso++;
    return temp;
}

int main()
{
    Coffee black(2, 5, 0, 0);
    Coffee dabang(2, 2, 2, 2);

    black += dabang;
    black += 1;
    black++;

    black.show();

    return 0;
}
