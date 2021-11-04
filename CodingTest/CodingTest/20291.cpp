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
	sort(ex.begin(), ex.end()); // 벡터 사전순으로 정렬

	tmp = ex[0]; // 초기값
	for (int i = 0; i < ex.size(); i++)
	{
		if (tmp == ex[i]) cnt++;   //맞으면 카운트 해주고
		else if (tmp != ex[i]) //다르면 지금까지 카운트랑 확장자 넘겨준다.
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