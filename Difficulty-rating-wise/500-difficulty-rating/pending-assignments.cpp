/* Chef has finally decided to complete all of his pending assignments.
There are X assignments where each assignment takes Y minutes to complete.
Find whether Chef would be able to complete all the assignments in Z days. */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int X, Y, Z;
        cin >> X >> Y >> Z;
        X * Y > Z * 24 * 60 ? cout << "NO" : cout << "YES";
        cout << endl;
    }
    return 0;
}
