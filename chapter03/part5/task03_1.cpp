#include <iostream>

// 시험은 책의 시험 문제 위주로 출제
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

Picture::Picture() : width(5), height(7) {
	strcpy_s(name, sizeof(name), "모름");
};
Picture::Picture(int x, int y, const char n[]) : width(x), height(y) {
	strcpy_s(name, sizeof(name), n);
};

int Picture::getWidth() {
	return width;
}

int Picture::getHeight() {
	return height;
}

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
