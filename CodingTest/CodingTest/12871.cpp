#include<bits/stdc++.h>

using namespace std;
string s, t,fs,ft;


//��Ŭ���� ȣ��� https://dkwjdi.tistory.com/121
//�ִ� ����� 
int GCD(int a, int b) {
	if (b == 0) {
		return a;
	}
	else {
		return GCD(b, a % b);
	}
}
//�ּ� �����
int LCM(int a, int b) {
	return a * b / GCD(a, b);
}


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> s>> t;



	int tmp = LCM(s.size(), t.size());
	for (int i = 0; i < tmp / s.size(); i++) {
		fs += s;
	}
	for (int i = 0; i < tmp / t.size(); i++) {
		ft += t;
	}
	if (fs == ft) cout << 1 << "\n";
	else cout << "0" << "\n";




}