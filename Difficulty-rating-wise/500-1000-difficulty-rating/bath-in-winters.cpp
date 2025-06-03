/* A geyser has a capacity of X litres of water and a bucket has a capacity of 
Y litres of water.
One person requires exactly 2 buckets of water to take a bath. 
Find the maximum number of people that can take bath using water from one completely filled geyser.. */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int X, Y;
        cin >> X >> Y;
        cout << X / (2 * Y) << endl;
    }
    return 0;
}
