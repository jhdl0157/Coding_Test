#include<bits/stdc++.h>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;

	string s1, s2;

	while(N--){
		int a[26] = {};
		cin >> s1 >> s2;

		for (auto c : s1) a[c - 'a']++;
		for (auto c : s2) a[c - 'a']--;

		bool isPossible = true;
		for (auto i : a) {
			if (i != 0)isPossible = false;
		}
		if (isPossible) cout << "Possible";
		else cout << "Impossible";
	}
}