/* Ezio can manipulate at most X number of guards with the apple of eden.
Given that there are Y number of guards, predict if he can safely manipulate all of them. */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int X, Y;
        cin >> X >> Y;
        X >= Y ? cout << "YES" : cout << "NO";
        cout << endl;
    }
    return 0;
}
