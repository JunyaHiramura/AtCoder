#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int counter = 0;
    int minIdx = 0;
    for (int i = 0; i < n; i++) {
        if (m < minIdx) break;
        if ((long long) b[minIdx] <= (long long) a[i] * 2) {
            counter++;
            minIdx++;
        }
    }
    cout << counter << endl;

    return 0;
}