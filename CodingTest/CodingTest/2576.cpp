#include <bits/stdc++.h>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int sum=0;
	int a[8];
	int x[8] = {100,100,100,100,100,100,100,100};
	for (int i = 0; i < 7; i++) {
		cin >> a[i];
		if (a[i] & 1) {
			sum += a[i];
			x[i] = a[i];
		}
	}
	if (sum == 0) {
		cout << -1;
		return 0;
	}
	cout << sum<<"\n";
	cout << *min_element(x, x + 8);
}