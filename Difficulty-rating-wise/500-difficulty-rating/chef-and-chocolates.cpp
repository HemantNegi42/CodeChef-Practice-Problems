/* Chef wants to gift C chocolates to Botswal on his birthday. 
However, he has only X chocolates with him. The cost of 1 chocolate is Y rupees.
Find the minimum money in rupees Chef needs to spend so that he can gift 
C chocolates to Botswal. */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int C, X, Y;
        cin >> C;
        cin >> X;
        cin >> Y;
        cout << (C - X) * Y << endl;
    }
    return 0;
}
