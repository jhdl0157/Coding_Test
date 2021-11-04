#include <bits/stdc++.h>
using namespace std;


int N;
stack<pair<int, int>> tower;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    tower.push({ 100000001, 0 }); //초기값세팅

    for (int i = 1; i <= N; i++) {
        int height;
        cin >> height;
        while (tower.top().first < height) { //top의 높이가 입력 받은 높이보다 작을떄 즉 수신불가능  
            tower.pop(); //제거해준다.
        }
        cout << tower.top().second << " "; //top의 높이가 입력 받은 높이보다 크다 수신이 가능하다. 
        tower.push({ height, i });
    }
}