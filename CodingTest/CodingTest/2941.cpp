#include<bits/stdc++.h>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	vector<string> words= { "c=","c-","dz=","d-","lj","nj","s=","z=" };
	int num;
	string word;
	cin >> word;
	for (int i = 0; i < words.size(); i++) {
		while (1) {
			num = word.find(words[i]);//�Է°��� ���͸� ���ϱ� 
			if (num == string::npos)//word���� words���� ������ npos�� ��ȯ�ϴ� �극��ũ�� ����������.
				break;
			word.replace(num, words[i].length(), "#"); //num��°���� words��i���� ���̸�ŭ #���� �ٲ��ֱ�
		}
	}
	cout << word.length();

}