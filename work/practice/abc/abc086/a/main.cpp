#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    /*
    forを使う場合
    if ((a * b) % 2) {
        cout << "Odd" << endl;
    } else {
        cout << "Even" << endl;
    }
    */
    // 3項演算子を使う場合
    cout << ((a * b) % 2 ? "Odd" : "Even") << endl;
    return 0;
}