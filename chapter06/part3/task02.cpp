#include <iostream>
using namespace std;

class MyMath {
public:
    static int GetMax(const int arr[], int size) {
        int max_val = arr[0]; // 배열의 첫 번째 요소를 초기 최대값으로 설정
        for (int i = 1; i < size; ++i) {
            if (arr[i] > max_val) {
                max_val = arr[i]; // 더 큰 값이 발견되면 갱신
            }
        }
        return max_val;
    }

    static int GetMin(const int arr[], int size) {
        int min_val = arr[0]; // 배열의 첫 번째 요소를 초기 최소값으로 설정
        for (int i = 1; i < size; ++i) {
            if (arr[i] < min_val) {
                min_val = arr[i]; // 더 작은 값이 발견되면 갱신
            }
        }
        return min_val;
    }
};

int main() {
    int x[5] = { 20, 30, -5, 2, -30 };

    // 객체 생성 없이 클래스 소속 지정자(::)를 사용하여 정적 함수 호출
    cout << "최대값은 :" << MyMath::GetMax(x, 5) << endl;
    cout << "최소값은 :" << MyMath::GetMin(x, 5) << endl;

    return 0;
}
