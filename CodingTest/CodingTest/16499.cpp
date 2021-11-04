#include<bits/stdc++.h>

using namespace std;
int n;
map<string, int> M;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		sort(s.begin(), s.end());
		M[s] = i;
	}
	cout << M.size();


}