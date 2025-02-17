/* A problem setter is called an expert if at least 50% of their problems are approved by Chef.
Munchy submitted X problems for approval. If Y problems out of those were approved,
find whether Munchy is an expert or not. */


#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int X, Y;
        cin >> X >> Y;
        X > 2 * Y ? cout << "NO" : cout << "YES";
        cout << endl;
    }
    return 0;
}
