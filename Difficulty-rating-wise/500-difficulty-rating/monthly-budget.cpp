/* Akshat has X rupees to spend in the current month. His daily expenditure is 
Y rupees, i.e., he spends Y rupees each day. Given that the current month has 30 days,
find out if Akshat has enough money to meet his daily expenditures for this month. */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int X, Y;
        cin >> X >> Y;
        X < 30 * Y ? cout << "NO" : cout << "YES";
        cout << endl;
    }
    return 0;
}
