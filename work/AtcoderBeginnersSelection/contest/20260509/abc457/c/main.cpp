#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long k;
    cin >> n >> k;
    vector<vector<int>> arrayA(n);
    vector<long long> arrayC(n);

    for (int i = 0; i < n; i++) {
        int l;
        cin >> l;
        arrayA[i].resize(l);
        for (int j = 0; j < l; j++) cin >> arrayA[i][j];
    }

    for (int i = 0; i < n; i++) cin >> arrayC[i];

    long long count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < arrayC[i]; j++) {
            for (size_t m = 0; m < arrayA[i].size(); m++) {
                count++;
                if (count == k) {
                    cout << arrayA[i][m] << endl;
                    return 0;
                }
            }            
        }
    }

    return 0;
}