#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= w; j++) {
            int tmpCount = 0;
            if (i - 1 >= 1 && (abs((i - 1) - i) + abs(j - j) == 1)) {
                tmpCount++;
            }
            if (i + 1 <= h && (abs((i + 1) - i) + abs(j - j) == 1)) {
                tmpCount++;
            }
            if (j - 1 >= 1 && (abs(i - i) + abs((j - 1) - j) == 1)) {
                tmpCount++;
            }
            if (j + 1 <= w && (abs(i - i) + abs((j + 1) - j) == 1)) {
                tmpCount++;
            }
            if (j != w) {
                cout << tmpCount << " ";
            } else {
                cout << tmpCount;
            }
            
        }
        cout << endl;
    }

    return 0;
}