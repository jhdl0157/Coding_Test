#include<bits/stdc++.h>

using namespace std;
stack<int>s;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;
	int sum = 0;
	while (N--){
		int c;
		cin >> c;
		if (c != 0) {
			s.push(c);
			sum += s.top();
		}
		else { sum -= s.top(); 
		s.pop();
		}
	}
	cout << sum;
}