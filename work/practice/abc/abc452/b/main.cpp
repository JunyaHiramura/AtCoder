#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    // 上段
    for (int i = 0; i < w; i++) cout << "#";
    cout << "\n";

    // 中段
    for (int i = 0; i < h - 2; i++) {
        for (int j = 0; j < w; j++) {
            if (j == 0 || j == w - 1) cout << "#";
            else cout << ".";
        }
        cout << "\n";
    }
    // 下段
    for (int i = 0; i < w; i++) cout << "#";
    cout << "\n";

    return 0;
}