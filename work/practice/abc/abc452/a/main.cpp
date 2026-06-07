#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, d;
    cin >> m >> d;

    if ((m == 1) && (d == 7) ||
        (m == 3) && (d == 3) ||
        (m == 5) && (d == 5) ||
        (m == 6) && (d == 7) ||
        (m == 7) && (d == 9)) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}