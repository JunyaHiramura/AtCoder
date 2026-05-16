#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int count = 0;

    for (size_t i = 1; i <= s.size(); i++) {
        // 偶数の場合は処理をスキップ
        if (i % 2 == 0) continue;
        for (size_t j = 0; j + i <= s.size(); j++) {
            int strIdx = j + (i - 1) / 2;
            if (s[strIdx] == 'C') count++;
        }
    }

    cout << count << endl;

    return 0;
}