#include<bits/stdc++.h>
#include <vector>
using namespace std;

int minOperations(vector<int> a) {
    int evenCount = 0, oddCount = 0;
    for (int num : a) {
        if (num % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    if (abs(evenCount - oddCount) % 2 != 0) {
      
        return -1;
    }

    int diff = abs(evenCount - oddCount) / 2;  
    return diff;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int result = minOperations(a);
        cout << result << endl;
    }

    return 0;
}
