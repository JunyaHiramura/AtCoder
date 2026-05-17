#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.size();
    long long count = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == 'C') {
            count += min(i + 1, n - i);
        }
    }

    // 以下は計算量がO(N^2)であるため、TLEになる可能性が高い
    // 計算量の目安は10^8以下
    // for (size_t i = 1; i <= s.size(); i++) {
    //     // 偶数の場合は処理をスキップ
    //     if (i % 2 == 0) continue;
    //     for (size_t j = 0; j + i <= s.size(); j++) {
    //         int strIdx = j + (i - 1) / 2;
    //         if (s[strIdx] == 'C') count++;
    //     }
    // }

    cout << count << endl;

    return 0;
}