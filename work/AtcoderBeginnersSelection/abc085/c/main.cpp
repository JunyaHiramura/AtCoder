#include <bits/stdc++.h>
using namespace std;

const int MAN = 10000;
const int GOSEN = 5000;
const int SEN = 1000;

int main() {
    // 入力
    int n, y;
    cin >> n >> y;

    int man = -1, gosen = -1, sen = -1;

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j + i <= n; j++) {
            int tempSen = n - (i + j);
            if ((i * MAN + j * GOSEN + tempSen * SEN) == y) {
                cout << i << " " << j << " " << tempSen << endl;
                return 0;
            }
        }
    }

    cout << man << " " << gosen << " " << sen << endl;
    
    return 0;
}