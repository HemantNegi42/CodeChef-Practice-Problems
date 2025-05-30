/* Chef recently started selling a special fruit.He has been selling the fruit for X rupees 
(X is a multiple of 100). He earns a profit of Y rupees on selling the fruit currently.
Chef decided to increase the selling price by 10%. Please help him calculate his new profit 
after the increase in selling price.

Note that only the selling price has been increased and the buying price is same. */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int X, Y;
        cin >> X >> Y;
        cout << X / 10 + Y << endl;
    }
    return 0;
}
