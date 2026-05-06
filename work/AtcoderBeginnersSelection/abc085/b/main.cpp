// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int x;
//     cin >> x;

//     int arr[x];
//     for (int i = 0; i < x; i++) {
//         cin >> arr[i];
//     }

//     // max値算出
//     int maxNum = arr[0];
//     for (int i = 1; i < x; i++) {
//         if (maxNum < arr[i]) maxNum = arr[i];
//     }

//     // 段数算出
//     int counter = 1;
//     for (int i = maxNum - 1; 0 < i; i--) {
//         for (int j = 0; j < x; j++) {
//             if (arr[j] == i) {
//                 counter++;
//                 break;
//             }
//         }
//     }

//     cout << counter << endl;

//     return 0;
// }

// バケット法による解
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int arr[110];
    int bucket[110] = {0};
    int counter = 0;

    cin >> n;
    for (int i = 0; i < n; i++) cin >> arr[i];

    for (int i = 0; i < n; i++) {
        bucket[arr[i]]++;
    }

    for (int i = 1; i <= 100 ; i++) {
        if (bucket[i]) {
            counter++;
        }
    }

    cout << counter << endl;

    return 0;
}
