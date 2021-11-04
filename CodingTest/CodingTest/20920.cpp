#include<bits/stdc++.h>

using namespace std;
map<string, int> mp;
vector<string> wordzip;
bool compare(string a, string b) {
	if (a.size() == b.size() && mp[a] == mp[b]) {
		return a < b;
	}
	else if (mp[a] == mp[b]) {
		return a.size() > b.size();
	}
	return mp[a] > mp[b];
}

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, M;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		string s;
		cin >> s;
		if (s.size() < M) continue;
		if (mp.find(s) == mp.end()) { //입력받은 단어가 단어장에 없다면 추가해주자
			mp[s] = 0;
			wordzip.push_back(s);
		}
		else mp[s]++; //있다면 카운트 해주자 
	}
	sort(wordzip.begin(), wordzip.end(), compare);
	for (string& s : wordzip) cout << s << "\n";
	return 0;
}