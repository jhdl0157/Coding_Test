#include<bits/stdc++.h>

using namespace std;

int N, cnt = 0;
vector<pair<string, int>> ans;
vector<string> ex; // extension
string input, tmp;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> input;
		input.erase(0, input.find('.') + 1);
		ex.push_back(input);

	}
	sort(ex.begin(), ex.end()); // ���� ���������� ����

	tmp = ex[0]; // �ʱⰪ
	for (int i = 0; i < ex.size(); i++)
	{
		if (tmp == ex[i]) cnt++;   //������ ī��Ʈ ���ְ�
		else if (tmp != ex[i]) //�ٸ��� ���ݱ��� ī��Ʈ�� Ȯ���� �Ѱ��ش�.
		{
			ans.push_back(pair<string, int>(tmp, cnt));
			tmp = ex[i];
			cnt = 1;
		}
	}
	ans.push_back(pair<string, int>(tmp, cnt));

	for (int i = 0; i < ans.size(); i++)
	{
		cout << ans[i].first << " " << ans[i].second<<"\n";
	}
}