#include <iostream>

using namespace std;

class Triangle {
private:
    int width;  
    int height; 

public:
    Triangle(int w, int h) : width(w), height(h) {
        cout << "밑변 " << width << " 높이 " << height << "인 삼각형 생성" << endl;
    }

    Triangle() : width(0), height(0) {}

    ~Triangle() {
        cout << "밑변 " << width << " 높이 " << height << "인 삼각형 소멸" << endl;
    }

    double getArea() {
        return (double)width * height / 2.0;
    }
};

int main() {
    Triangle* pArray = new Triangle[3]{
        Triangle(1, 1),
        Triangle(2, 2),
        Triangle(4, 4)
    };

    for (int i = 0; i < 3; i++) {
        cout << "삼각형의 면적은 " << pArray[i].getArea() << endl;
    }

    delete[] pArray;

    return 0;
}
