#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, m;
    cin >> n >> k >> m;
    vector<vector<int>> array(2, vector<int>(n));
    vector<int> colorArray(200010, 0);

    for (int i = 0; i < n; i++) {
        cin >> array[i][0] >> array[i][1];
        colorArray[array[i][0]];
    }
    // 降順に並べる
    sort(array.rbegin(), array.rend());
    long long sum = 0;
    for (int i = 0; i < k; i++) {
        sum += array[i][1];
    }

    cout << sum << endl;
    return 0;
}