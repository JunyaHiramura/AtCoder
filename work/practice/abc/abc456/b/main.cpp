#include <bits/stdc++.h>
using namespace std;

int main() {
    int array[3][6];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++) {
            cin >> array[i][j];
        }
    }

    int count = 0;
        for (int i = 0; i < 6; i++) {
            for (int j = 0; j < 6; j++) {
                for (int k = 0; k < 6; k++) {
                    if (array[0][i] * array[1][j] * array[2][k] == 120) {
                        count++;
                    }
                }
            }
        }
        cout << (double) count / 216 << endl;
        
    return 0;
}