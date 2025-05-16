/* In discus throw, a player is given 3 throws and the throw with the longest distance is regarded as their final score.
You are given the distances for all 3 throws of a player. Determine the final score of the player. */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T, ans;
    cin >> T;

    while (T--) {
        int A, B, C;
        cin >> A >> B >> C;
        ans = max(A, max(B, C));
        cout << ans << endl;
    }
    return 0;
}
