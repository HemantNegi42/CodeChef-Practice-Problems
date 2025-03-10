/* Chef wants to reach home as soon as possible. He has two options:
Travel with his BIKE which takes X minutes.
Travel with his CAR which takes Y minutes.
Which of the two options is faster or do they both take same time? */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int X, Y;
        cin >> X >> Y;
        if (X == Y) cout << "SAME";
        else if (X < Y) cout << "BIKE";
        else cout << "CAR";
        cout << endl;
    }
    return 0;
}
