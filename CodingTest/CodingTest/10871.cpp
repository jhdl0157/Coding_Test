#include <bits/stdc++.h>

using namespace std;

int main(void) {
	int N, X, a[10005];
	ios::sync_with_stdio(0); //�̰ž��� printf/scanf�� cin/cout ���� ���� ����ȭ ���� �ϴ� ��� (�ӵ� ��)
	cin.tie(0); //�̰ž��� ����� �ð� ���� ���� ��뷮�ÿ� ���� (����)
	cin >> N >> X;
	for (int i = 0; i < N; i++) cin >> a[i];
	for (int i = 0; i < N; i++) 
		if (a[i] < X) cout << a[i] << ' ';
	

	return 0;
	
}