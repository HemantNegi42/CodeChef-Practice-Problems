/* Chef has a bucket having a capacity of K liters. It is already filled with 
X liters of water.
Find the maximum amount of extra water in liters that Chef can fill in the bucket without overflowing. */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int K, X;
        cin >> K >> X;
        cout << K - X << endl;
    }
    return 0;
}
