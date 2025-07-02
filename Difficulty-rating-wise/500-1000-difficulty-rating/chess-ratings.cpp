/* Alice has recently started playing Chess. Her current rating is 
X. She noticed that when she wins a game, her rating increases by 8 points.
Can you help Alice in finding out the minimum number of games she needs to win 
in order to make her rating greater than or equal to Y? */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int X, Y;
        cin >> X >> Y;
        cout << (Y - X + 7) / 8 << endl;
    }
    return 0;
}
