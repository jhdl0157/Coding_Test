#include<bits/stdc++.h>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N = 1;
	int index_num = 0;
	string org[1001];
	string word;
	while (true) {
		cin >> N;
		string VS = "zzzzzzzzzzzzzzzzzzzzz";
		if (N == 0) {
			break;
		}
		for (int i = 0; i < N; i++) {
			cin >> word;
			
			org[i] = word;

			for (int i = 0; i < word.length(); i++) {
				word[i] = toupper(word[i]);
			}
			for (int i = 0; i < VS.length(); i++) {
				VS[i] = toupper(VS[i]);
			}
			//�빮�ڷ� �� ��ȯ���ѹ����� 


			//���ϱ� 
			if (VS > word) {
				index_num = i;
				VS = org[i]; //�񱳹� �ٲ�ġ��
			}
		}
		cout << org[index_num] << '\n';
	}
}