#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n;
    cin >> n;

    // 末尾削除
    s.erase(s.size() - n, n);

    cout << s.substr(n) << endl;

    return 0;
}