#include<iostream>
using namespace std;
class Sphere{
int radius;
public:
	Sphere() { radius = 1; }
	~Sphere() {};
	void setRadius(int r) { radius = r; }
	double getVolume() { 
		double v = (4.0 / 3.0) * 3.14 * radius * radius * radius;
		return round(v * 100) / 100;
	}
};
class SphereManager {
	Sphere* pArray = NULL;
	int size = 0;
	void input();
	void decide();
public:
	SphereManager();
	~SphereManager();
	void run();
};
SphereManager::SphereManager() {
	cout << "생성하고자 하는 구의 개수: ";
	cin >> size; 
	if (size <= 0) return;
	pArray = new Sphere[size];
}
SphereManager::~SphereManager() {
	if (pArray != NULL) delete[]pArray;
}


void SphereManager::input() {
	int radius;
	for (int i = 0; i < size; i++) {
		cout << "구" << i + 1 << "의 반지름: ";
		cin >> radius;
		pArray[i].setRadius(radius);
	}
}
void SphereManager::decide() {
	int count = 0;
	for (int i = 0; i < size; i++) {
		cout << "구" << i + 1 << "의 부피" << pArray[i].getVolume() << endl;
	}
}

void SphereManager::run() {
	input();
	decide();
}

int main() {
	SphereManager* pMan = new SphereManager();
	pMan->run();
	delete pMan;
	return 0;
}
