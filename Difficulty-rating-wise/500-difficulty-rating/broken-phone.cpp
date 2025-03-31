/* Uttu broke his phone. He can get it repaired by spending X rupees 
or he can buy a new phone by spending Y rupees.
Uttu wants to spend as little money as possible. 
Find out if it is better to get the phone repaired or to buy a new phone. */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int X, Y;
        cin >> X >> Y;
        if (X == Y) cout << "ANY";
        else if (X < Y) cout << "REPAIR";
        else cout << "NEW PHONE";
        cout << endl;
    }
    return 0;
}
