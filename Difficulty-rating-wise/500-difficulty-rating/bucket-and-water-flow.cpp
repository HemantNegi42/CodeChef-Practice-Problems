/* Alice has a bucket of water initially having W litres of water in it.
The maximum capacity of the bucket is X liters.
Alice turned on the tap and the water starts flowing into the bucket at a rate of 
Y litres/hour. She left the tap running for exactly Z hours.
Determine whether the bucket has been overflown, filled exactly, or is still left unfilled. */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int W, X, Y, Z;
        cin >> W >> X >> Y >> Z;
        if (X - W == Y * Z) cout << "filled";
        else if (X - W > Y * Z) cout << "unfilled";
        else cout << "overflow";
        cout << endl;
    }
    return 0;
}
