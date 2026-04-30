#include <bits/stdc++.h>
using namespace std;


int main() {
    int n, a, b;
    cin >> n >> a >> b;

    int total = 0;
    for (int i = 1; i <= n; i++) {
        int tempNum = i;
        int tempSum = 0;
        while (tempNum > 0) {
            tempSum += tempNum % 10;
            tempNum /= 10;
        }
        if (a <= tempSum && tempSum <= b) {
            total += i;
        }
    }

    cout << total << endl;

    return 0;
}