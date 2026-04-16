#include <iostream>
#include <string>

using namespace std;

int main() {
	string st;
	cout << "텍스트 입력(한글 안 됨)>>";
	getline(cin, st);
	string nst;
	string out;
	for (int i = 0; i < st.length(); i++) {
		if ((st[i] >= 'A' && st[i] <= 'Z') || (st[i] >= 'a' && st[i] <= 'z') || (st[i] == ' ')) {
			nst = st[i];
			out.append(nst);
		}
	}
	cout << out << endl;
	return 0;
}
