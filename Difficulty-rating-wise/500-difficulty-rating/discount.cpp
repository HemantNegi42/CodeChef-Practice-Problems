/* Alice buys a toy with a selling price of 100 rupees. There is a discount of 
x percent on the toy. Find the amount Alice needs to pay for it. */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int X;
        cin >> X;
        cout << 100 - X << endl;
    }
    return 0;
}
