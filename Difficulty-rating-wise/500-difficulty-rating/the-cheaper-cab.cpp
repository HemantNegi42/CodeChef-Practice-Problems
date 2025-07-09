/* Chef has to travel to another place. For this, he can avail any one of two cab services.
The first cab service charges X rupees.
The second cab service charges Y rupees.
Chef wants to spend the minimum amount of money. Which cab service should Chef take? */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int X, Y;
        cin >> X >> Y;
        if (X < Y) cout << "FIRST";
        else if (Y < X) cout << "SECOND";
        else cout << "ANY";
        cout << endl;
    }
    return 0;
}
