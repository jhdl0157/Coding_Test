#include<bits/stdc++.h>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		list<char> L = {};
		string s;
		auto p = L.begin(); //문자열 첫번째를 가르켜준다.

		cin >> s;
		for (auto c : s) { //문자열 s하나씩 쪼개주기 
			if (c == '<') {
				if (p != L.begin()) p--;
			}
			else if (c == '>') {
				if (p != L.end()) p++;
			}
			else if (c == '-') {
				if (p != L.begin()) {
					p--;
					p = L.erase(p);
				}
			}
			else {
				L.insert(p, c); //p는 다음 데이터의 번지를 담고 있다.
				
			}
		}
		for (auto c : L) cout << c;
		cout << '\n';
	}


}