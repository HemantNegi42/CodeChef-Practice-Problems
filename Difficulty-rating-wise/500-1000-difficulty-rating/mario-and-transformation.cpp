/* Mario transforms each time he eats a mushroom as follows:
If he is currently small, he turns normal.
If he is currently normal, he turns huge.
If he is currently huge, he turns small.
Given that Mario was initially normal, find his size after eating 
X mushrooms. */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int x;
        cin >> x;
        int rem = x % 3;
        if (rem == 0) {
            cout << "NORMAL";
        }
        else if (rem == 1) {
            cout << "HUGE";
        }
        else {
            cout << "SMALL";
        }
        cout << endl;
    }
}
