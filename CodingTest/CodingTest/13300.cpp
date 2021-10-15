#include<bits/stdc++.h>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N,K,result=0;
	cin >> N>>K; 
	int s[2][7] = {};
	for (int i = 0; i < N; ++i) {
		int a, b;
		cin >> a >> b;
		s[a][b]++;
	}
	
	for (int i = 0; i < 2; i++) {
		for (int j = 1; j < 7; j++) {
			cout << s[i][j] << "\t";
		}
		cout << "\n";
	}
	//이제 방 수를 카운트 해보자 
	for (int i = 0; i < 2; ++i) {
		for (int j = 1; j < 7; ++j) {
			result = result + s[i][j] / K;
			if (s[i][j] % K !=0) ++result;
		}
	}
	cout << result;

}