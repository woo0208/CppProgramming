#include <iostream>

using namespace std;

class Point3D {
	int arr[3];
public:
	Point3D(int x = 0, int y = 0, int z = 0) {
		arr[0] = x;
		arr[1] = y;
		arr[2] = z;
	}
	void show() {
		cout << "3차원 점의 좌표는 (" << arr[0] << "," << arr[1] << "," << arr[2] << ")" << endl;
	}
};

int main() {
	Point3D p0;
	p0.show();
	Point3D p1(1);
	p1.show();
	Point3D p2(1, 2);
	p2.show();
	Point3D p3(1, 2, 3);
	p3.show();
	return 0;
}
