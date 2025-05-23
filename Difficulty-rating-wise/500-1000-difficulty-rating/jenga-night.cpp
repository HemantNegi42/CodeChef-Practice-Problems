/* Chef hosts a party for his birthday. There are N people at the party. All these 
N people decide to play Jenga.

There are X Jenga tiles available. In one round, all the players pick 1 tile each and place it in the tower.
The game is valid if:

All the players have a tile in each round;
All the tiles are used at the end.
Given N and X, find whether the game is valid. */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, X;
        cin >> N >> X;
        if (X % N == 0) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
    return 0;
}
