#include<bits/stdc++.h>

using namespace std;


    int main() {
        string s;
        cin >> s;
        int count = 0;
        while (s.size() > 1) { // 문자열 자릿수가 1보다 클 때
            int sum = 0; // 합
            for (int i = 0; i < s.size(); i++) { // 문자열 자릿수만큼 반복
                sum += s[i] - '0'; // 문자 숫자로 변환해 sum에 저장(아스키코드)
            }
            s = to_string(sum); // 숫자 문자로 변환해 s에 저장
            count++;
        }

        cout << count << "\n"; 
        if (stoi(s) % 3 == 0) // s가 3의 배수일 때 (string to int) 
            cout << "YES";
        else
            cout << "NO";
}