/* A single car can accommodate at most 4 people.
N friends want to go to a restaurant for a party. 
Find the minimum number of cars required to accommodate all the friends. */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        cout << (N + 3) / 4 << endl;
    }
}
