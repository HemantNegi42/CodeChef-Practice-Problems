/* In the medieval age, there were 3 kingdoms A, B, and C.
The army of these kingdom had NA, NB, and NC soldiers respectively.
You are given that an army with X soldiers can defeat an army with 
Y soldiers only if X>Y.An army is said to be dominant if it can defeat 
both the other armies combined. For example, kingdom C's army will be dominant only if 
NC > NA + NB.Determine whether any of the armies is dominant or not. */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int A, B, C;
        cin >> A >> B >> C;
        if ((A + B < C) || (C + B < A) || (A + C < B)) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
    return 0;
}
