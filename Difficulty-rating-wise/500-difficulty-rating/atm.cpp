/* Pooja would like to withdraw X US Dollar from an ATM. The cash machine will only accept 
the transaction if X is a multiple of 5, and Pooja's account balance has enough cash to perform 
the withdrawal transaction (including bank charges). For each successful withdrawal the bank charges 0.50 US Dollar.
Calculate Pooja's account balance after an attempted transaction. */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int X;
    double Y;
    cin >> X;
    cin >> Y;
    if (X + 0.5 > Y || X % 5 != 0) cout << Y;
    else {
        cout << Y - 0.5 - X;
    }
    cout << endl;
}
