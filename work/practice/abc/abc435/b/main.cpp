#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> array(n);
    for (int i = 0; i < n; i++) cin >> array[i];

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            int tmpSum = 0;
            for (int k = i - 1; k < j - 1; k++) {
                tmpSum += array[k];
            }
        }
    }
    return 0;
}