#include<bits/stdc++.h>

using namespace std;


    int main() {
        string s;
        cin >> s;
        int count = 0;
        while (s.size() > 1) { // ���ڿ� �ڸ����� 1���� Ŭ ��
            int sum = 0; // ��
            for (int i = 0; i < s.size(); i++) { // ���ڿ� �ڸ�����ŭ �ݺ�
                sum += s[i] - '0'; // ���� ���ڷ� ��ȯ�� sum�� ����(�ƽ�Ű�ڵ�)
            }
            s = to_string(sum); // ���� ���ڷ� ��ȯ�� s�� ����
            count++;
        }

        cout << count << "\n"; 
        if (stoi(s) % 3 == 0) // s�� 3�� ����� �� (string to int) 
            cout << "YES";
        else
            cout << "NO";
}