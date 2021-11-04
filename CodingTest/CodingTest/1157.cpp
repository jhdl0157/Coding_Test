#include<bits/stdc++.h>

using namespace std;
int  alp[26] = { 0 ,}; //대문자 65~90 소문자 97~122
string s;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> s;
	
	for (int i = 0; i < s.length(); i++) {
		s[i] = toupper(s[i]);
			alp[s[i] - 65]++;
	}
	/*
	for (int i = 0; i < 26; i++) {
		cout << alp[i]<<"\n";
	}
	*/
	int max = 0, max_index = 0;
	for (int i = 0; i < 26; i++) { //가장 큰수 체킹
		if (max < alp[i]) {
			max = alp[i];
			max_index = i;
		}
	}
	int cnt = 0;
	for (int i = 0; i < 26; i++) {
		if (max == alp[i]) cnt++;
	}

	if (cnt > 1) cout << "?";
	else cout << (char)(max_index + 65);


}