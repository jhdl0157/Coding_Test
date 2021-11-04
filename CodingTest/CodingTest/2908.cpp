#include<bits/stdc++.h>

using namespace std;
stack<char> Rs1;
stack<char> Rs2;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s1, s2;
	cin >> s1 >> s2;

	for (int i = 0; i < 3; i++) {
		Rs1.push(s1[i]);
		Rs2.push(s2[i]);
	}
	for (int i = 0; i < 3; i++) {
		if (Rs1.top() > Rs2.top()) {
			cout << s1[2] << s1[1] << s1[0];
			
			break; }
		else if (Rs1.top() == Rs2.top()) {
			Rs1.pop();
			Rs2.pop();
		}

		if (Rs1.top() < Rs2.top()) {
			cout << s2[2] << s2[1] << s2[0];
			break;
		}
	}
	
	

}