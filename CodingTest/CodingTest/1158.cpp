#include<bits/stdc++.h>

using namespace std;
int N, K, len = 0;
int pre[5001];
int nxt[5001];
vector<int> V;

int main(void) { //원형 리스트를 만들어서 해결한다.
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> N >> K;
	
	//원형 리스트 생성 
	for (int i = 1; i <= N; i++) {
		pre[i] = (i == 1) ? N : i - 1;
		nxt[i] = (i == N) ? 1 : i + 1;
		++len;
	}

	int i = 1;
	for (int cur = 1; len != 0; cur = nxt[cur]) {
		if (i == K) {
			pre[nxt[cur]] = pre[cur];
			nxt[pre[cur]] = nxt[cur];
			V.push_back(cur);
			i = 1;
			--len;
		}
		else ++i;
	}
	cout << "<";
	for (size_t i = 0; i < V.size(); ++i) {
		cout << V[i];
		if (i != V.size() - 1) cout << ",";
	}
	cout << ">";
}