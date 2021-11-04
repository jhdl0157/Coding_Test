#include<bits/stdc++.h>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		stack<char>st;
		string s;
		cin >> s;

		for (int j = 0; j < s.length(); j++) {
			if (st.empty() || s[j] == '(') st.push(s[j]);
			else if (st.top() == '(') st.pop();
		}

		if (st.empty()) cout << "YES";
		else cout << "NO";
	}

}