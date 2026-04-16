#include <iostream>
#include <string>

using namespace std;

int main() {
	int n;
	cout << "구입할 물품의 개수>>";
	cin >> n;
	int* count = new int[n];
	cout << "물품 " << n << "개의 가격 입력>>";
	int max = INT_MIN;
	int min = INT_MAX;
	for (int i = 0; i < n; i++) {
		cin >> count[i];
		if (max < count[i]) {
			max = count[i];
		} 
		if (min > count[i]) {
			min = count[i];
		}
	}
	cout << "제일 싼 가격은 " << min << endl;
	cout << "제일 비싼 가격은 " << max << endl;

	delete[] count;
	return 0;
}
