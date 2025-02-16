/* In Chefland, a tennis game involves 4 referees.
Each referee has to point out whether he considers the ball to be inside limits or outside limits.
The ball is considered to be IN if and only if all the referees agree that it was inside limits.
Given the decision of the 4 referees, help Chef determine whether the ball is considered inside limits or not. */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int r1, r2, r3, r4;
        cin >> r1 >> r2 >> r3 >> r4;
        if (r1 + r2 + r3 + r4 == 0) cout << "IN";
        else cout << "OUT";
        cout << endl;
    }
    return 0;
}
