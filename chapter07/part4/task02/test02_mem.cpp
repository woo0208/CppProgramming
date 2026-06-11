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

    Coffee operator+=(Coffee a) {
        Coffee c(
            this->water += a.water,
            this->espresso += a.espresso,
            this->sugar += a.sugar,
            this->cream += a.cream
            );
        return c;
    }

    Coffee operator+=(int a) {
        Coffee c(
            this->water,
            this->espresso += a,
            this->sugar,
            this->cream
        );
        return c;
    }

    Coffee operator++(int a) {
        this->espresso++;

        return *this;
    }


};


int main()
{
    Coffee black(2, 5, 0, 0);
    Coffee dabang(2, 2, 2, 2);
    Coffee c, d;

    black += dabang;
    black += 1;
    black++;
    black.show();

    return 0;
}
