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
			num = word.find(words[i]);//입력값과 벡터를 비교하기 
			if (num == string::npos)//word에서 words값이 없으면 npos를 반환하니 브레이크로 빠져나간다.
				break;
			word.replace(num, words[i].length(), "#"); //num번째부터 words의i번쨰 길이만큼 #으로 바꿔주기
		}
	}
	cout << word.length();

}