#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    for (size_t i = 0; i < s.length(); i++) {
        if (isdigit(s[i])) cout << s[i];
    }
    cout << "\n";
    
    return 0;
}