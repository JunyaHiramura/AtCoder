#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int maxCount = 0;
    int result = 1;

    for (int i = 1; i <= n; i++) {
        int tmpNum = i;
        int count = 0;
        while (tmpNum % 2 == 0) {
            count++;
            tmpNum /= 2;
        }
        if (maxCount < count) {
            maxCount = count;
            result = i;
        }
    }

    cout << result << endl;

    return 0;
}