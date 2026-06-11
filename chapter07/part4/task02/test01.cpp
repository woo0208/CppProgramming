#include <iostream>

using namespace std;

class Coffee {
	int water, espresso, sugar, cream;
public:
	Coffee(int water = 1, int coffee = 1, int sugar = 0, int cream = 0) {
		this->water = water; this->espresso = coffee;
		this->sugar = sugar; this->cream = cream;
	}

	void show() {
		cout << "물 " << water << ", 커피 " << espresso;
		cout << ", 설탕 " << sugar << ", 크림 " << cream << endl;
	}

	Coffee operator+(Coffee co) {
		this->water += co.water;
		this->espresso += co.espresso;
		this->sugar += co.sugar;
		this->cream += co.cream;
		return *this;
	}
	Coffee operator+(int co) {
		Coffee n = Coffee(this->water, this->espresso+co, this->sugar, this->cream);
		return n;
	}
};

int main()
{
	Coffee black(2, 5, 0, 0), dabang(2, 2, 2, 2), c, d;
	c = black + dabang;
	d = c + 1;
	c.show(); d.show();
}
