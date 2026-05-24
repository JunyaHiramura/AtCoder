#include <bits/stdc++.h>
using namespace std;

int main() {
    string StoC = "22233344455566677778889999";
    int n;
    cin >> n;
    string s, ans;

    for (int i = 0; i < n; i++) {
        cin >> s;
        ans += StoC[s[0] - 'a'];
    }

    cout << ans << endl;

    return 0;

    // 以下自身で実装したコード、コーディング量多い...
    // int n;
    // cin >> n;

    // vector<string> strArray(n);

    // for (int i = 0; i < n; i++) cin >> strArray[i];

    // for (int i = 0; i < n; i++) {
    //     if (strArray[i][0] == 'a' || strArray[i][0] == 'b' || strArray[i][0] == 'c') cout << 2;
    //     if (strArray[i][0] == 'd' || strArray[i][0] == 'e' || strArray[i][0] == 'f') cout << 3;
    //     if (strArray[i][0] == 'g' || strArray[i][0] == 'h' || strArray[i][0] == 'i') cout << 4;
    //     if (strArray[i][0] == 'j' || strArray[i][0] == 'k' || strArray[i][0] == 'l') cout << 5;
    //     if (strArray[i][0] == 'm' || strArray[i][0] == 'n' || strArray[i][0] == 'o') cout << 6;
    //     if (strArray[i][0] == 'p' || strArray[i][0] == 'q' || strArray[i][0] == 'r' || strArray[i][0] == 's') cout << 7;
    //     if (strArray[i][0] == 't' || strArray[i][0] == 'u' || strArray[i][0] == 'v') cout << 8;
    //     if (strArray[i][0] == 'w' || strArray[i][0] == 'x' || strArray[i][0] == 'y' || strArray[i][0] == 'z') cout << 9;
    // }

    // cout << endl;
}