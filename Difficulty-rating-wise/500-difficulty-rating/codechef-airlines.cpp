/* Chef has opened a new airline. Chef has 10 airplanes where each airplane has a capacity of X passengers.
On the first day itself, Y people are willing to book a seat in any one of Chef's airplanes.
Given that Chef charges Z rupees for each ticket, find the maximum amount he can earn on the first day. */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int X, Y, Z;
        cin >> X >> Y >> Z;
        Y <= 10 * X ? cout << Z * Y : cout << Z * 10 * X;
        cout << endl;
    }
    return 0;
}
