#include<bits/stdc++.h>

using namespace std;
string s[100];
void func();
bool fa(string x);
int k;
int main()
{
	cin.tie(0); cin.sync_with_stdio(false);
	int t;
	cin >> t;
	while (t--)
	{
		func();
	}
}
bool fa(string x)
{
	for (int i = 0; i < x.size() / 2; i++)
	{
		if (x[i] != x[x.size() - i - 1])
			return false;
	}
	return true;
}
void func()
{
	cin >> k;
	for (int i = 0; i < k; i++)
		cin >> s[i];

	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j < k; j++)
		{
			//i==j�� ���� �����̹Ƿ� ���� �Ұ���
			if (i == j)continue;
			//�Ӹ�����̸�
			if (fa(s[i] + s[j]))
			{
				cout << s[i] + s[j] << '\n';
				return;
			}
		}
	}
	//�� ���ߴµ��� �Ӹ���Ҿƴϸ� 0���
	cout << 0 << '\n';
}