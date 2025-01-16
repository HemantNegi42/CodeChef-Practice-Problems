/* You are given 3 numbers A, B and C. Determine whether the average 
of A and B is strictly greater than C or not? */


#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int A, B, C;
        cin >> A;
        cin >> B;
        cin >> C;
        if (A + B > 2 * C) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
