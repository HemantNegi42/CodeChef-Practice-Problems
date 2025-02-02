/* You are given that a mango weighs X kilograms and a truck weighs Y kilograms.
You want to cross a bridge that can withstand a weight of Z kilograms.
Find the maximum number of mangoes you can load in the truck so that you can cross the bridge safely. */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int X, Y, Z;
        cin >> X >> Y >> Z;
        cout << (Z - Y) / X << endl;
    }
    return 0;
}
