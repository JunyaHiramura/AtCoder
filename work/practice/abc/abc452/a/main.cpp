#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, d;
    cin >> m >> d;

    set<pair<int, int>> array = {{1, 7}, {3, 3}, {5, 5}, {7, 7}, {9, 9}};
     cout << (array.count({m, d}) ? "Yes" : "No") << endl;

    return 0;
}