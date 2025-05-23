/* There are two exits in a bus with 100 seats:

First exit is located beside seat number 1.
Second exit is located beside seat number 100.
Seats are arranged in a straight line from 1 to 100
with equal spacing between any 2 adjacent seats.

A passenger prefers to choose the nearest exit while leaving the bus.
Determine the exit taken by passenger sitting on seat X. */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int X;
        cin >> X;
        X <= 50 ? cout << "LEFT" : cout << "RIGHT";
        cout << endl;
    }
    return 0;
}
