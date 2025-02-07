/* Bob has an account in the Bobby Bank. His current account balance is W rupees.
Each month, the office in which Bob works deposits a fixed amount of X rupees to his account.
Y rupees is deducted from Bob's account each month as bank charges.
Find his final account balance after Z months. Note that the account balance can be negative as well. */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int W, X, Y, Z;
        cin >> W >> X >> Y >> Z;
        cout << (X - Y) * Z + W << endl;
    }
    return 0;
}
