#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int counter = 0;
    while (m != 0) {
        int x;
        x = n % m;
        m = x;
        counter++;
    }
    cout << counter << endl;
    
    return 0;
}