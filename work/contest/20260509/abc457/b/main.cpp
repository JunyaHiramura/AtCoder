#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> array(n);

    for (int i = 0; i < n; i++) {
        int l;
        cin >> l;
        array[i].resize(l);
        for (int j = 0; j < l; j++) {
            cin >> array[i][j];
        }
    }
    int x, y;
    cin >> x >> y;

    cout << array[x - 1][y - 1] << endl;

    return 0;
}