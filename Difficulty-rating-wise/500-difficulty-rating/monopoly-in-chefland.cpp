/* Chef is the financial incharge of Chefland and one of his duties is identifying 
if any company has gained a monopolistic advantage in the market.There are exactly 
3 companies in the market each of whose revenues are denoted by R1, R2 and R3 respectively.
A company is said to have a monopolistic advantage if its revenue is strictly greater than
the sum of the revenues of its competitors.Given the revenue of the 3 companies,
help Chef determine if any of them has a monopolistic advantage. */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int r1, r2, r3;
        cin >> r1 >> r2 >> r3;
        if (r1 + r2 < r3 || r3 + r2 < r1 || r1 + r3 < r2) cout << "Yes";
        else cout << "No";
        cout << endl;
    }
    return 0;
}
