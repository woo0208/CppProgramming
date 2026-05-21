#include <iostream>
#include <string>
using namespace std;

// 1. 두 문자열 전체가 같은지 비교
bool equals(string x, string y) {
    return x == y;
}

// 2. 두 문자열의 처음 n글자가 같은지 비교
bool equals(string x, string y, int n) {
    return x.substr(0, n) == y.substr(0, n);
}

// 3. 세 문자열의 처음 n글자가 모두 같은지 비교
bool equals(string x, string y, int n, string z) {
    return (x.substr(0, n) == y.substr(0, n)) && (y.substr(0, n) == z.substr(0, n));
}

int main() {
    string x = "Prof. Hwang";
    string y = "Prof. Kim";
    string z = "Prof. Lee";

    if (equals(x, y)) cout << "같음" << endl;
    if (equals(x, y, 3)) cout << "앞 3글자 같음" << endl;
    if (equals(x, y, 5, z)) cout << "앞 5글자 같음" << endl;

    return 0;
}
