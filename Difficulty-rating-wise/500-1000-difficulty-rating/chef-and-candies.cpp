/* There are N children and Chef wants to give them 1 candy each. Chef already has 
X candies with him. To buy the rest, he visits a candy shop. In the shop, packets containing exactly 
4 candies are available.

Determine the minimum number of candy packets Chef must buy so that he is able to give 
1 candy to each of the N children. */

#include <bits/stdc++.h>
using namespace std;

int main() {

    int T;
    cin >> T;
    while (T--) {
        int N, X;
        cin >> N >> X;
        if (N <= X) cout << 0;
        else if ((N - X) % 4 == 0) cout << (N - X) / 4;
        else cout << (N - X) / 4 + 1;
        cout << endl;
    }
    return 0;
}
