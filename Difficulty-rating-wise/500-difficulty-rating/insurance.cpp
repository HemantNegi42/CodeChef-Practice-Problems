/* Chef bought car insurance. The policy of the insurance is:
The maximum rebatable amount for any damage is Rs X lakhs.
If the amount required for repairing the damage is ≤X lakhs, that amount is rebated in full.
Chef's car meets an accident and required Rs Y lakhs for repairing.
Determine the amount that will be rebated by the insurance company. */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int X, Y;
        cin >> X >> Y;
        Y <= X ? cout << Y : cout << X;
        cout << endl;
    }
    return 0;
}
