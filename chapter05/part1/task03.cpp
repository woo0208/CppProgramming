#include <iostream>
#include <string>

using namespace std;

string GetLatterString(string* s1, string* s2);

int main() {
	string s1("hello");
	string s2("world");
	string res;
	res = GetLatterString(&s1, &s2);
	cout << "사전에서 뒤에 나오는 문자열은 " << res << "입니다." << endl;
}

string GetLatterString(string* s1, string* s2) {
	string re;
	if (*s1 > *s2) {
		re = *s1;
		return re;
	}
	else {
		re = *s2;
		return re;
	}
}
