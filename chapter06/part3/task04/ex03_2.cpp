#include <iostream>
#include <string>
using namespace std;

bool equals(string x, string y, int n = 0, string z = "") {
    // n이 0이면 전체 길이 비교
    if (n == 0) {
        return x == y;
    }
    // z가 빈 문자열이면 x와 y 2개의 문자열만 n만큼 비교
    if (z == "") {
        return x.substr(0, n) == y.substr(0, n);
    }
    // 인자가 4개 모두 유효한 경우 세 문자열을 모두 n만큼 비교
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
