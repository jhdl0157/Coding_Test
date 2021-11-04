#include<bits/stdc++.h>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	stack<int> s;
	int N;
	cin >> N;
	while(N--) {
		string str;
		cin >> str;
		if (str == "push") {
			int M;
			cin >> M;
			s.push(M);
			
		}
		else if (str == "top") {
			if (s.empty())
				cout << -1 << '\n';
			else cout << s.top() << '\n';
			
		}
		else if (str == "size") {
			cout << s.size() << "\n";
			
		}
		else if (str == "empty") {
			 cout << (int)s.empty() << "\n";
			
			
		}
		else if (str == "pop") {
			if (s.empty())  cout << -1 << "\n";  
			else {
				cout << s.top() << "\n";
				s.pop();
			}

		}
	}
}