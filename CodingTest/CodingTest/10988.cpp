#include<bits/stdc++.h>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s;
	cin >> s;
	for (int i = 0; i < s.size() / 2; i++) {
		if (s[i] != s[s.size() - i - 1]) {
			cout << "0";
			return 0;
		}

	}
	cout << "1";
	return 0;

}