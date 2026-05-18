#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> players(n);
    
    for (int i = 0; i < n; i++) {
        cin >> players[i].first;
        players[i].second = i + 1;
    }
    
    sort(players.begin(), players.end(), greater<pair<int, int>>());
    
    cout << players[1].second << endl;
    return 0;
}