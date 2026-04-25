#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int counter = 0;

    cin >> s;

    for (char c : s) {
        if (c == '1') counter++;
    }

    cout << counter << endl;

    return 0;
}