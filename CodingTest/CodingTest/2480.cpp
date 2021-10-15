#include <bits/stdc++.h>

using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a[3];
	cin >> a[0] >> a[1] >> a[2];

	sort(a, a + 3);
	if (a[0] == a[2]) cout << 1000 + a[0] * 1000;
	else if (a[0] == a[1] || a[1] == a[2]) cout << 1000 + a[1] * 100;
	else cout << a[2] * 100;
}


/*
int a[3];
int count = 0;
int num;
for (int i = 0; i < 3; i++) cin >> a[i];
sort(a, a + 2);
for (int i = 0; i < 3; i++)
	for (int j = i + 1; j < 3 + 1; j++)
	{
		if (a[i] == a[j]) {
			num = a[i];
			count++;
		}
	}
if (count >= 2) {
	cout << 10000 + num * 1000;
}
else if (count >= 1) {
	cout << 1000 + num * 100;
}
else  cout << a[2] * 100;
*/