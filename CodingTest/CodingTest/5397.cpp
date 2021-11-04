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
		auto p = L.begin(); //���ڿ� ù��°�� �������ش�.

		cin >> s;
		for (auto c : s) { //���ڿ� s�ϳ��� �ɰ��ֱ� 
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
				L.insert(p, c); //p�� ���� �������� ������ ��� �ִ�.
				
			}
		}
		for (auto c : L) cout << c;
		cout << '\n';
	}


}