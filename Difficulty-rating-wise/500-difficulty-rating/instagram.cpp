/* Chef categorises an instagram account as spam, if, the following 
count of the account is more than 10 times the count of followers.

Given the following and follower count of an account as X and 
Y respectively, find whether it is a spam account. */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int X, Y;
        cin >> X >> Y;
        if (X > Y * 10) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
}
