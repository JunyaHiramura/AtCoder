#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<vector<int>> array(n + 1);
    
    for (int i = 1; i <= n; i++) {
        int k;
        cin >> k;
        for (int j = 0; j < k; j++) {
            int tmpNum;
            cin >> tmpNum;
            array[tmpNum].push_back(i);
        }
    }
    
    for (int i = 1; i <= n; i++) {
        cout << array[i].size();
        for (size_t j = 0; j < array[i].size(); j++) {
            cout << " " << array[i][j];
        }
        cout << "\n";
    }
    
    return 0;
}