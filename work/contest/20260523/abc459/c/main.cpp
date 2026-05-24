#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    vector<int> array(n);

    int offset = 0;
    for (int i = 0; i < q; i++) {
        int tmpQuery, tmpNum;
        cin >> tmpQuery >> tmpNum;
        if (tmpQuery == 1) {
            array[tmpNum - 1]++;
            int tmpMin = *min_element(array.begin(), array.end());
            if (tmpMin >= 1) offset++;
        } else {
            
        }
    }
    return 0;
}