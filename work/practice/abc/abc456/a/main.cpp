#include <bits/stdc++.h>
using namespace std;

int main() {
    int y;
    cin >> y;

    /* 別解
    取りうる値は3 <= y <= 18であるため、
    for分で回さなくてもよい
    コード例：
    if (3 <= y && y <= 18) cout << "Yes" << endl;
    else cout << "No" << endl;
    */

    if (3 <= y) {
        for (int i = 1; i <= 6; i++) {
            for (int j = 1; j <= 6; j++) {
                for (int k = 1; k <= 6; k++) {
                    if (i + j + k == y) {
                        cout << "Yes" << endl;
                        return 0;
                    }
                }
            }
        }
    }

    cout << "No" << endl;
    return 0;
}