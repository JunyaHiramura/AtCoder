#include <bits/stdc++.h>
using namespace std;

int main() {
    int array[3][6];

    int count[3] = {0};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++) {
            cin >> array[i][j];
            if (4 <= array[i][j]) count[i]++;
        }
    }

    double result = 1;
    bool isAllZero = true;
    bool isFirst = true;

    for (int i = 0; i < 3; i++) {
        if (count[i]) {
            if (isFirst) {
                result = (double) 6 / count[i];
                isFirst = false;
                isAllZero = false;
            } else {
                result *= (double) 6 / count[i];
                isAllZero = false;
            }
        }
    }
    if (isAllZero) cout << 0 << endl;
    else cout << result << endl;

    return 0;
}