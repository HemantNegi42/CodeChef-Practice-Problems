/* Chef is ordering food online (instead of cooking) and the bill comes out to be Rs. 
X. Chef can use one of the following two coupons to avail a discount.
Get 10 percent off on the bill amount
Get a flat discount of Rs. 100 on the bill amount
What is the maximum discount Chef can avail? */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int X;
        cin >> X;
        if (X > 1000) cout << X / 10 << endl;
        else cout << 100 << endl;
    }
    return 0;
}
