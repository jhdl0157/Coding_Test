#include<bits/stdc++.h>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int A, B, C,a[10] = {};
	cin >> A >> B >> C;
	int t = A * B * C;
	while (t>0)
	{
		a[t % 10]++;
		t = t / 10;
	}
	for (int i = 0; i < 10; i++) cout << a[i]<<'\n';
}