/* A participant can make 1 submission every 30 seconds. If a contest lasts for 
X minutes, what is the maximum number of submissions that the participant can make during it?

It is also given that the participant cannot make any submission in the last 
5 seconds of the contest. */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int X;
        cin >> X;
        cout << X * 2 << endl;
    }
    return 0;
}
