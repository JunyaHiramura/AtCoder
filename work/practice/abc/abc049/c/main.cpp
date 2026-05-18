#include <bits/stdc++.h>
using namespace std;

int main() {
    // 一致確認対象文字列
    string strArray[] = {"dream", "dreamer", "erase", "eraser"};
    // 文字列を逆さに変換
    for (int i = 0; i < 4; i++) reverse(strArray[i].begin(), strArray[i].end());

    // 入力
    string s = "";
    cin >> s;
    // 入力を逆さに変換
    reverse(s.begin(), s.end());

    // 入力文字列の文字数
    int strSize = s.size();
    
    bool isAllMatch = true;
    for (int i = 0; i < strSize;) {
        bool isPartsMatch = false;
        for(int j = 0; j < 4; j++) {
            if (s.substr(i, strArray[j].size()) == strArray[j]) {
                i += strArray[j].size();
                isPartsMatch = true;
            }
        }

        if (!isPartsMatch) {
            isAllMatch = false;
            break;
        }
    }
    if (isAllMatch) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}