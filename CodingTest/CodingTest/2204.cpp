#include<bits/stdc++.h>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N = 1;
	int index_num = 0;
	string org[1001];
	string word;
	while (true) {
		cin >> N;
		string VS = "zzzzzzzzzzzzzzzzzzzzz";
		if (N == 0) {
			break;
		}
		for (int i = 0; i < N; i++) {
			cin >> word;
			
			org[i] = word;

			for (int i = 0; i < word.length(); i++) {
				word[i] = toupper(word[i]);
			}
			for (int i = 0; i < VS.length(); i++) {
				VS[i] = toupper(VS[i]);
			}
			//대문자로 다 변환시켜버리기 


			//비교하기 
			if (VS > word) {
				index_num = i;
				VS = org[i]; //비교문 바꿔치기
			}
		}
		cout << org[index_num] << '\n';
	}
}