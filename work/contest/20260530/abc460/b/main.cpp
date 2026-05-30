#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    long long x1, y1, r1, x2, y2, r2;
    for (int i = 0; i < t; i++) {
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        long long tmpX, tmpY, tmpOutR, tmpInR;
        tmpX = abs(x2 - x1) * abs(x2 - x1);
        tmpY = abs(y2 - y1) * abs(y2 - y1);
        tmpOutR = (r1 + r2) * (r1 + r2);
        tmpInR = (r1 - r2) * (r1 - r2);
        if (tmpInR <= tmpX + tmpY && tmpX + tmpY <= tmpOutR) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}