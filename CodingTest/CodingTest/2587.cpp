#include<bits/stdc++.h>

using namespace std;
int num[6];
int sum=0;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	for (int i = 0; i < 5; i++) {
		cin >> num[i];
		sum += num[i];
	}
	sort(num, num + 6);
	
	cout << sum / 5 << "\n";
	cout << num[3];
}