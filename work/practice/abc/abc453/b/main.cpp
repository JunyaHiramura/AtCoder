#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, x;
    cin >> t >> x;
    vector<int> array(t + 1);
    for (int i = 0; i <= t; i++) cin >> array[i];

    cout << 0 << " " << array[0] << endl;
    int tmpNum = array[0];
    for (int i = 1; i <= t; i++) {
        if (abs(tmpNum - array[i]) >= x) {
            cout << i << " " << array[i] << endl;
            tmpNum = array[i];
        }
    }
    return 0;
}