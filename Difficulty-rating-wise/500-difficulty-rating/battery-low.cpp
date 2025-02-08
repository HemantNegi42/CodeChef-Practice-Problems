/* Chef's phone shows a Battery Low notification if the battery level is 15% or less.
Given that the battery level of Chef's phone is X%, determine whether it would show a Battery low notification. */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int X;
        cin >> X;
        X <= 15 ? cout << "Yes" : cout << "No";
        cout << endl;
    }

}
