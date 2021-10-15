#include <bits/stdc++.h>

using namespace std;

int main(void) {
	int N, X, a[10005];
	ios::sync_with_stdio(0); //이거쓰면 printf/scanf랑 cin/cout 같이 못씀 동기화 해제 하는 기능 (속도 업)
	cin.tie(0); //이거쓰면 입출력 시간 제한 해제 대용량시에 좋음 (버퍼)
	cin >> N >> X;
	for (int i = 0; i < N; i++) cin >> a[i];
	for (int i = 0; i < N; i++) 
		if (a[i] < X) cout << a[i] << ' ';
	

	return 0;
	
}