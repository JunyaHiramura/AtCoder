#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    // int arr[n] = {0};

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // 降順に並び替え
    sort(arr.rbegin(), arr.rend());
    // for (int i = 0; i < n-1; i++) {
    //     int maxIdx = i;
    //     for (int j = i + 1; j < n; j++) {
    //         if (arr[maxIdx] < arr[j]) {
    //             maxIdx = j;
    //         }
    //     }
        
    //     if (maxIdx != i) {
    //         int temp = arr[i];
    //         arr[i] = arr[maxIdx];
    //         arr[maxIdx] = temp;
    //     }
    // }

    // 数字割り当て
    int alice = 0;
    int bob = 0;
    for (int num : arr) {
        i % 2 ? bob += arr[i] : alice += arr[i];
        // if (i % 2 == 0) {
        //     alice += arr[i];
        // } else {
        //     bob += arr[i];
        // }
    }

    cout << alice - bob << endl;
    return 0;
}