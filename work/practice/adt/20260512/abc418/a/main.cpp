#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    if (n >= 3 && s.substr(n - 3) == "tea") {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}