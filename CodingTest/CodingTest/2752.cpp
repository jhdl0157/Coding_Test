#include <bits/stdc++.h>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a, b, c;
	cin >> a >> b >> c;
	
	int x, y, z;
	x = min({ a,b,c });
	z = max({ a,b,c });
	y = a + b + c - x - z;

	cout << x << ' ' << y << ' ' << z;
}