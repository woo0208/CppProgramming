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

    // friend 함수 선언
    friend Coffee operator+(const Coffee& a, const Coffee& b);
    friend Coffee operator+(const Coffee& a, int coffee);
};

// Coffee + Coffee
Coffee operator+(const Coffee& a, const Coffee& b) {
    Coffee temp(
        a.water + b.water,
        a.espresso + b.espresso,
        a.sugar + b.sugar,
        a.cream + b.cream
    );

    return temp;
}

// Coffee + int
Coffee operator+(const Coffee& a, int coffee) {
    Coffee temp(
        a.water,
        a.espresso + coffee,
        a.sugar,
        a.cream
    );

    return temp;
}

int main()
{
    Coffee black(2, 5, 0, 0);
    Coffee dabang(2, 2, 2, 2);
    Coffee c, d;

    c = black + dabang;
    d = c + 1;

    c.show();
    d.show();

    return 0;
}
