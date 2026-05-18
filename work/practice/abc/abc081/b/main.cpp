#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int count = 0;
    while (true) {
        bool hasOdd = false;
        for (int num : arr) {
            if (num % 2) {
                hasOdd = true;
                break;
            }
        }
        if (hasOdd) break;
        
        for (int& num : arr) {
            num /= 2;
        }
        count++;
    }
    
    cout << count << endl;
}