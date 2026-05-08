#include <bits/stdc++.h>
using namespace std;

int main() {
    // 入力
    int n;
    cin >> n;

    vector<vector<int>> numInfo(n, vector<int>(3, 0));
    for (int i = 0; i < n; i++) {
        cin >> numInfo[i][0];
        cin >> numInfo[i][1];
        cin >> numInfo[i][2];
    }

    int cuurentX = 0, cuurentY = 0;
    int cuurentTime = 0;
    bool isGoal = true;

    for (int i = 0; i < n; i++) {
        int goalPointX = numInfo[i][1], goalPointY = numInfo[i][2];
        int targetTime = numInfo[i][0];
        int dist = abs(goalPointX - cuurentX) + abs(goalPointY - cuurentY);
        int dt = targetTime - cuurentTime;

        if (dist > dt || ((dt - dist) % 2 != 0)) {
            isGoal = false;
            break;
        }
    }

    if (isGoal) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}