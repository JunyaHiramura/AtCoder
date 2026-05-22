#include <bits/stdc++.h>
using namespace std;

int main() {
    int l, r;
    cin >> l >> r;

    int count = 0;

    for (int i = l; i <= r; i++) {
        count++;
    }

    cout << count << endl;
    
    return 0;
}