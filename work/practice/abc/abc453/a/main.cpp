#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string str;
    cin >> str;

    auto it = str.begin();
    while (*it == 'o') it++;
    for (; it != str.end(); it++) {
        cout << *it;
    }
    cout << endl;
    return 0;
}